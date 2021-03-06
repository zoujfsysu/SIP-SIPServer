#ifndef _SIP_DEFINE_H_
#define _SIP_DEFINE_H_

#define MAX_CONTENT_LEN		1024*20    //最大文本长度
#define MAX_USERNAME_LEN	20      //最大用户长度
#define MAX_HOST_LEN		15      //最大地址长度
#define MAX_PORT_LEN		5       //最大端口长度
#define MAX_REALM_LEN		10      //最大域长度
#define MAX_CSEQ_LEN		10      //最大序号长度
#define MAX_SSRC_LEN		10      //最大SSRC值长度
#define MAX_ADDR_LEN		50      //最大逻辑地址长度
#define MAX_SUBJECT_LEN		84      //最大主题长度
#define MAX_LIST_LEN		256     //最大头域内容长度
#define MAX_URI_LEN			256     //最大资源描述长度
#define MAX_STR_LEN			32      //默认字符串长度
#define DEFAULT_LEN			512     //默认文本长度

typedef enum xsip_event_type
{
	XSIP_EVENT_COUNT,

	XSIP_DEVICE_REG,			//设备注册消息
	XSIP_REGSUPSERVER_SUCCESS,		//注册成功
	XSIP_REGSUPSERVER_FAILURE,		//注册失败

	XSIP_CALL_INVITE,				//点播消息
	XSIP_CALL_PROCEEDING,			//点播等待
	XSIP_CALL_INVITEANSWERED,				//点播成功
	XSIP_CALL_FAILURE,				//点播失败
	XSIP_CALL_ACK,					//确认消息
	XSIP_CALL_CANCEL,				//点播取消
	XSIP_CANCEL_ANSWERED,			//取消成功
	XSIP_CANCEL_FAILURE,			//取消失败
	XSIP_INFO_ANSWERED,
	XSIP_INFO_FAILURE,
	XSIP_CALL_BYE,					//关闭消息
	XSIP_BYE_ANSWERED,				//关闭成功
	XSIP_BYE_FAILURE,				//关闭失败

	XSIP_INFO_PLAY,					//回放控制
	XSIP_INFO_TEARDOWN,				//回放关闭

	XSIP_MESSAGE_NEW,				//请求消息
	XSIP_MESSAGE_PROCEEDING,		//请求等待
	XSIP_MESSAGE_ANSWERED,			//请求成功
	XSIP_MESSAGE_FAILURE,			//请求失败

	XSIP_SUBSCRIPTION_NEW,			//订阅消息
	XSIP_SUBSCRIPTION_PROCEEDING,	//订阅等待
	XSIP_SUBSCRIPTION_ANSWERED,		//订阅成功
	XSIP_SUBSCRIPTION_FAILURE,		//订阅失败
	XSIP_SUBSCRIPTION_NOTIFY,		//通知消息
	XSIP_NOTIFICATION_ANSWERED,		//通知成功
	XSIP_NOTIFICATION_FAILURE,		//通知失败

    XSIP_DEVICE_QUERYINFO           //服务查询消息

}EVENT_TYPE;

typedef enum xsip_message_type
{
	XSIP_MESSAGE_COUNT,
	XSIP_MESSAGE_ALARM,					//报警通知
	XSIP_MESSAGE_ALARM_RESPONSE,		//报警回应
    XSIP_MESSAGE_AREADETECTION_QUERY,         //区域侦测
    XSIP_MESSAGE_AREADETECTION_RESPONSE,         //区域侦测回应
    XSIP_MESSAGE_CROSSDETECTION_QUERY,         //划线侦测
    XSIP_MESSAGE_CROSSDETECTION_RESPONSE,         //划线侦测回应
    XSIP_MESSAGE_RECVSMART,             //客户端接收smart消息
	XSIP_MESSAGE_KEEPALIVE,				//状态通知
	XSIP_MESSAGE_KEEPALIVE_RESPHONSE,	//状态回应
	XSIP_MESSAGE_PTZ_CMD,				//云台控制
	XSIP_MESSAGE_BOOT_CMD,				//远程启动
	XSIP_MESSAGE_RESTART_CMD,			//服务重启
	XSIP_MESSAGE_ALARM_CMD,				//报警复位
	XSIP_MESSAGE_RECORD_CMD,			//录像控制
	XSIP_MESSAGE_GUARD_CMD,				//布防命令
	XSIP_MESSAGE_CMD_RESPONSE,			//控制回应
	XSIP_MESSAGE_CATALOG_QUERY,			//目录查询
	XSIP_MESSAGE_CATALOG_RESPONSE,		//目录回应
	XSIP_MESSAGE_DVRINFO_QUERY,			//DVR查询
	XSIP_MESSAGE_DVRINFO_RESPONSE,		//DVR回应
	XSIP_MESSAGE_DVRSTATUS_QUERY,		//DVR状态查询
	XSIP_MESSAGE_DVRSTATUS_RESPONSE,	//DVR状态回应
	XSIP_MESSAGE_RECORDINFO,			//视频检索
	XSIP_MESSAGE_RECORDINFO_RESPONSE,	//检索回应
	XSIP_MESSAGE_MEDIASTATUS,			//媒体状态通知
	XSIP_MESSAGE_TIMEOUT_RESPHONSE		//超时通知

}MESSAGE_TYPE;

typedef enum xsip_invite_type
{
	XSIP_INVITE_PLAY,
	XSIP_INVITE_PLAYBACK,
	XSIP_INVITE_DOWNLOAD,
	XSIP_INVITE_MEDIASERVER

}INVITE_TYPE;

typedef enum xsip_connect_type
{
	XSIP_RECVONLY,
	XSIP_SENDONLY,
	XSIP_SENDRECV,
	XSIP_NONE

}CONNECT_TYPE;

typedef enum xsip_order_type
{
	XSIP_RTSP_NONE,
	XSIP_RTSP_RANGEPLAY,
	XSIP_RTSP_PAUSE,
    XSIP_RTSP_SCALE,
    XSIP_RTSP_REPLAY,
	XSIP_RTSP_TEARDOWN
}RTSP_TYPE;

typedef enum xsip_subscrstate_type
{
	XSIP_UNKNOWN,
	XSIP_PENDING,
	XSIP_ACTIVE,
	XSIP_TERMINATED

}SS_TYPE;


typedef enum xsip_content_type
{
	XSIP_APPLICATION_NONE,
	XSIP_APPLICATION_XML,
	XSIP_APPLICATION_SDP,
	XSIP_APPLICATION_RTSP
	
}CONTENT_TYPE;

typedef enum xsip_ptz_type
{
	XSIP_PTZ_STOP,
	XSIP_PTZ_UP,
	XSIP_PTZ_DOWN,
	XSIP_PTZ_LEFT,
	XSIP_PTZ_RIGHT,
	XSIP_PTZ_FOCUS_IN,
	XSIP_PTZ_FOCUS_OUT,
	XSIP_PTZ_IRIS_IN,
	XSIP_PTZ_IRIS_OUT,
	XSIP_PTZ_ZOOM_IN,
	XSIP_PTZ_ZOOM_OUT,

	XSIP_PTZ_SET,
	XSIP_PTZ_GOTO,
	XSIP_PTZ_DELETE,

	XSIP_PTZ_LEFTUP,
	XSIP_PTZ_LEFTDOWN,
	XSIP_PTZ_RIGHTUP,
	XSIP_PTZ_RIGHTDOWN,

	XSIP_PTZ_ERROR

}PTZTYPE;

/*******指令码**************************************/

#define CMD_PTZ_STOP			0x00	//云台停止
#define CMD_PTZ_UP				0x08	//云台向上
#define CMD_PTZ_DOWN			0x04	//云台向下
#define CMD_PTZ_LEFT			0x02	//云台向左
#define CMD_PTZ_RIGHT			0x01	//云台向右
#define CMD_PTZ_LU				0x0a	//云台左上
#define CMD_PTZ_LD				0x06	//云台左下
#define CMD_PTZ_RU				0x09	//云台右上
#define CMD_PTZ_RD				0x05	//云台右下
#define CMD_PTZ_ZOOM_IN			0x10	//镜头放大
#define CMD_PTZ_ZOOM_OUT		0x20	//镜头缩小

#define CMD_PTZ_IRIS_IN			0x48	//光圈放大
#define CMD_PTZ_IRIS_OUT		0x44	//光圈缩小
#define CMD_PTZ_FOCUS_IN		0x42	//聚集近
#define CMD_PTZ_FOCUS_OUT		0x41	//聚集远
#define CMD_PTZ_FI_STOP         0x40    //云台FI停止

#define CMD_PTZ_SET				0x81	//设置预设位
#define CMD_PTZ_GOTO			0x82	//调用预设位
#define CMD_PTZ_DELETE			0x83	//删除预设位

#endif

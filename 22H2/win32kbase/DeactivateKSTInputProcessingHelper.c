/*
 * XREFs of DeactivateKSTInputProcessingHelper @ 0x1C00807B4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     CleanupSensorExplicitly @ 0x1C006E510 (CleanupSensorExplicitly.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KSTIOCPDispatcher_Destroy @ 0x1C0080AB0 (KSTIOCPDispatcher_Destroy.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0084D10 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 DeactivateKSTInputProcessingHelper()
{
  char v0; // bl
  char v1; // dl
  char v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  char v11; // dl
  _BYTE v12[8]; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-40h] BYREF

  v0 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v1 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v1 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v2 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v2 = 0;
  }
  if ( v1 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      v2,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      18,
      (__int64)&WPP_f24dfba830553ecb8fc554e2a66e2779_Traceguids);
  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0289810, (unsigned __int8 *)dword_1C025E350, 0LL, 0LL, 2u, &v13);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v12);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    IOCPDispatcher::Close(*(IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 1);
  CleanupSensorExplicitly(0LL, v3, v4, v5);
  if ( !v12[0] )
    UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  KSTIOCPDispatcher_Destroy();
  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0289810, (unsigned __int8 *)dword_1C025E121, 0LL, 0LL, 2u, &v13);
  result = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 8LL))(WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 2) == 0)
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v11 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v0 = 0;
  if ( v11 || v0 )
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v11,
             v0,
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             2,
             19,
             (__int64)&WPP_f24dfba830553ecb8fc554e2a66e2779_Traceguids);
  return result;
}

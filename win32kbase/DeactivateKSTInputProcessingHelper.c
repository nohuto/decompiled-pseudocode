/*
 * XREFs of DeactivateKSTInputProcessingHelper @ 0x1C0095134
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     CleanupSensorExplicitly @ 0x1C0031540 (CleanupSensorExplicitly.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0070484 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0093DD0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     KSTIOCPDispatcher_Destroy @ 0x1C00954B0 (KSTIOCPDispatcher_Destroy.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DeactivateKSTInputProcessingHelper(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  void *v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  int v13; // edx
  void *v14; // r8
  _BYTE v15[8]; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+48h] [rbp-30h] BYREF

  v3 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v4 = &WPP_e6bb3bf3b4ef39a6c3de9dff1ef0b3c5_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      26,
      18,
      (__int64)&WPP_e6bb3bf3b4ef39a6c3de9dff1ef0b3c5_Traceguids);
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C029CCDE, 0LL, 0LL, 2u, &v16);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v15, a2, a3, (__int64)v4);
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    IOCPDispatcher::Close((IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceObject, 1);
  CleanupSensorExplicitly(0LL, v5, v6, v7);
  if ( !v15[0] )
    UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  KSTIOCPDispatcher_Destroy();
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C029CAAF, 0LL, 0LL, 2u, &v16);
  result = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 8LL))(WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
    || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v13) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( (_BYTE)v13 || v3 )
  {
    v14 = &WPP_e6bb3bf3b4ef39a6c3de9dff1ef0b3c5_Traceguids;
    LOBYTE(v14) = v3;
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v13,
             (_DWORD)v14,
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             26,
             19,
             (__int64)&WPP_e6bb3bf3b4ef39a6c3de9dff1ef0b3c5_Traceguids);
  }
  return result;
}

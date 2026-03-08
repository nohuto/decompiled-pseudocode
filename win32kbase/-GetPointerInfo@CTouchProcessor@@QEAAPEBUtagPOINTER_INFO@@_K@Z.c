/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x1C01F84D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00C9BF0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C01E8508 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01F155C (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(struct _KTHREAD **this, __int64 a2)
{
  __int64 v2; // rdi
  char v4; // bl
  char v5; // r8
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v8; // edx
  struct CPointerMsgData *v9; // rdi
  PDEVICE_OBJECT v10; // rcx
  __int16 v11; // ax
  _QWORD *FrameById; // rax
  _QWORD *v13; // rsi
  CPointerInfoNode *v14; // rdi
  char *v15; // rbx
  CInpLockGuard *v17; // [rsp+40h] [rbp-28h] BYREF
  int v18; // [rsp+48h] [rbp-20h]

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      v5,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      315,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v17, (struct CInpLockGuard *)(this + 4), 1);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, v2);
  v9 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v4 = 0;
    if ( !(_BYTE)v8 && !v4 )
      goto LABEL_47;
    v11 = 316;
LABEL_46:
    WPP_RECORDER_AND_TRACE_SF_(
      v10->AttachedDevice,
      v8,
      v4,
      v10->DeviceExtension,
      5,
      7,
      v11,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
LABEL_47:
    v15 = 0LL;
    goto LABEL_59;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *((_DWORD *)NonConstMsgData + 7), 4);
  v13 = FrameById;
  if ( !FrameById )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v4 = 0;
    if ( !(_BYTE)v8 && !v4 )
      goto LABEL_47;
    v11 = 317;
    goto LABEL_46;
  }
  if ( *((_DWORD *)v9 + 8) >= *((_DWORD *)FrameById + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13605);
  v14 = (CPointerInfoNode *)(v13[30] + 480LL * *((unsigned int *)v9 + 8));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v14) )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v4 = 0;
    if ( !(_BYTE)v8 && !v4 )
      goto LABEL_47;
    v11 = 318;
    goto LABEL_46;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v8 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      319,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v15 = (char *)v14 + 168;
LABEL_59:
  if ( !v18 )
    CInpLockGuard::UnLock(v17);
  return (const struct tagPOINTER_INFO *)v15;
}

/*
 * XREFs of ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0199F0C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01900D0 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0044428 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C009C24C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C009EBB4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCBA8 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0182D34 (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0182DF0 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187524 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0196890 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C01968B8 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C0197074 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C019ECB4 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionSetForegroundCheckNoActivate @ 0x1C01CDF60 (ApiSetEditionSetForegroundCheckNoActivate.c)
 */

__int64 __fastcall CTouchProcessor::ProcessPrimaryDown(struct _KTHREAD **this, const struct CPointerInputFrame *a2)
{
  const struct CPointerInputFrame *v2; // rdi
  unsigned int v4; // ebp
  int v5; // edx
  unsigned int v6; // r8d
  unsigned int v7; // esi
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // r9d
  int v11; // edx
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  int v14; // edx
  unsigned __int64 v15; // rdx
  int v16; // edx
  __int64 v18; // rax
  int v19; // edx
  int v20; // edx
  PERESOURCE *v21[6]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v22[64]; // [rsp+60h] [rbp-68h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      181,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  v4 = 0;
  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6091);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, *((_DWORD *)v2 + 10)) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6092);
  if ( (*((_DWORD *)v2 + 31) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6093);
  v6 = *((_DWORD *)v2 + 12);
  v7 = 0;
  v8 = *((_QWORD *)v2 + 17);
  if ( v6 )
  {
    v9 = v6;
    do
    {
      if ( v8 >= *((_QWORD *)v2 + 17) + 480 * v9 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6105);
      if ( (*(_QWORD *)(v8 + 16) || CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v8))
        && (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v8) )
      {
        break;
      }
      v8 += 480LL;
      v9 = v10;
      ++v7;
      v6 = v10;
    }
    while ( v7 < v10 );
  }
  if ( v7 == v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v5, 7, 182, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v13 = 183;
LABEL_46:
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(v12->DeviceExtension, v11, 7, v13, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    return 0LL;
  }
  if ( v8 >= *((_QWORD *)v2 + 17) + 480 * (unsigned __int64)v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6126);
  if ( !(unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6127);
  if ( !*(_QWORD *)(v8 + 16) && !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 6129);
  if ( (*(_DWORD *)v8 & 0x1000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v14, 7, 184, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v13 = 185;
    goto LABEL_46;
  }
  if ( *(_DWORD *)(v8 + 444) )
  {
    v15 = *(_QWORD *)(v8 + 192);
    if ( !v15 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v15, 7, 186, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v13 = 187;
      goto LABEL_46;
    }
    if ( !CInputDest::IsEqualByWindowHandle(v8 + 352, v15, 1) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v16, 7, 188, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v13 = 189;
      goto LABEL_46;
    }
    v4 = 1;
    if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v8) )
    {
      if ( !CInputDest::DoesBelongToForeground(v8 + 352, 1) || !CInputDest::DoesBelongToForegroundThread(v8 + 352) )
      {
        if ( gpqForeground )
        {
          if ( (*(_DWORD *)(gpqForeground + 388) & 0x2000000) != 0 )
          {
            v18 = *(_QWORD *)(gpqForeground + 112);
            if ( v18 )
            {
              if ( gptiForeground == *(struct tagTHREADINFO **)(v18 + 16)
                && CInputDest::DoesBelongToForeground(v8 + 352, 1) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v19) = 4;
                  WPP_RECORDER_SF_(
                    (_DWORD)gBaseLog,
                    v19,
                    7,
                    190,
                    (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LOBYTE(v20) = 5;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v20,
                        7,
                        191,
                        (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
                    }
                  }
                }
                return 1LL;
              }
            }
          }
        }
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v22, (struct CInputDest *)(v8 + 352));
        CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
          (CInpUnlockGuardExclusive *)v21,
          (struct CInpLockGuard *)(this + 5),
          0LL);
        v4 = ApiSetEditionSetForegroundCheckNoActivate(v8 + 352);
        CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v21);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v22);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      7,
      192,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  return v4;
}

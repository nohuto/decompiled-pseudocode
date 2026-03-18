/*
 * XREFs of ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C01BDCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D3598 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionAllocThreadPointerData @ 0x1C020622C (ApiSetEditionAllocThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::AddThreadPointerHookData(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        void *a5,
        int a6,
        struct tagINPUTDEST *a7)
{
  __int64 v11; // rdx
  CTouchProcessor *v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  const struct CPointerMsgData *MsgData; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rdi
  HWND WindowHandle; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  CInpLockGuard *v26[6]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v27[128]; // [rsp+50h] [rbp-B8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v26, (struct CInpLockGuard *)(a1 + 32), a5);
  v14 = 0;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  MsgData = CTouchProcessor::GetMsgData(v12, (unsigned __int64)a5);
  if ( MsgData )
    v19 = *((_WORD *)MsgData + 8);
  else
    v19 = 0;
  if ( a3 != v19 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
  CInputDest::CInputDest((CInputDest *)v27, a7);
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v20 = ApiSetEditionAllocThreadPointerData();
    v21 = v20;
    if ( v20 )
    {
      *(_WORD *)(v20 + 16) = a3;
      *(_DWORD *)(v20 + 20) = a4;
      *(_QWORD *)(v20 + 24) = a5;
      *(_DWORD *)(v20 + 32) = a6;
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v27);
      *(_DWORD *)(v21 + 48) &= ~1u;
      *(_QWORD *)(v21 + 40) = WindowHandle;
      CTouchProcessor::ReferenceMsgData(a1, a5, 5LL);
      *(_QWORD *)(a2 + 24) = v21;
      v14 = 1;
    }
  }
  CInputDest::SetEmpty((CInputDest *)v27);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v26, v23, v24);
  return v14;
}

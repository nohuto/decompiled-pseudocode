/*
 * XREFs of ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C018DE60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0042A50 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007B3E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C0084AF4 (PushW32ThreadLock.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C009C24C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C009EBB4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCAC0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCBA8 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD17C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187524 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019ACA8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C01CCB50 (ApiSetEditionPointerActivate.c)
 *     PopW32ThreadLock @ 0x1C01FC6B0 (PopW32ThreadLock.c)
 */

void __fastcall CTouchProcessor::DoDeferredPointerActivate(__int64 a1, __int64 a2, __int64 a3)
{
  const struct CPointerInputFrame *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int128 v10; // xmm1
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h]
  _OWORD v19[7]; // [rsp+50h] [rbp-B0h] BYREF
  PERESOURCE *v20[6]; // [rsp+C0h] [rbp-40h] BYREF
  CInpLockGuard *v21[6]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v22[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v23[128]; // [rsp+160h] [rbp+60h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v21,
    (struct CInpLockGuard *)(a1 + 40),
    (void *)a3);
  if ( a3 )
  {
    v6 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(a3 + 28));
    if ( v6 )
    {
      v7 = *(unsigned int *)(a3 + 32);
      if ( (unsigned int)v7 >= *((_DWORD *)v6 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 12188);
        v7 = *(unsigned int *)(a3 + 32);
      }
      v8 = *((_QWORD *)v6 + 17) + 480 * v7;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v8) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 12190);
      if ( *(_WORD *)(a3 + 16) != *(_WORD *)(v8 + 172) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 12191);
      PushW32ThreadLock((__int64)v6, (__int64)&v17, (__int64)CTouchProcessor::DereferencePointerInputFrame);
      CInputDest::CInputDest((CInputDest *)v23, (const struct tagINPUTDEST *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v22, (struct CInputDest *)v23);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v20,
        (struct CInpLockGuard *)(a1 + 40),
        *(void **)(v8 + 16));
      v9 = *(_QWORD *)(v8 + 16);
      v10 = *(_OWORD *)(a2 + 16);
      v11 = *(unsigned __int16 *)(v8 + 144);
      v19[0] = *(_OWORD *)a2;
      v12 = *(_OWORD *)(a2 + 32);
      v19[1] = v10;
      v13 = *(_OWORD *)(a2 + 48);
      v19[2] = v12;
      v14 = *(_OWORD *)(a2 + 64);
      v19[3] = v13;
      v15 = *(_OWORD *)(a2 + 80);
      v19[4] = v14;
      v16 = *(_OWORD *)(a2 + 96);
      v19[5] = v15;
      v19[6] = v16;
      ApiSetEditionPointerActivate(v19, v11, v9, v8 + 160);
      CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v20);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v22);
      PopW32ThreadLock(&v17);
      CTouchProcessor::UnreferenceFrame(a1, (__int64)v6);
      CInputDest::SetEmpty((CInputDest *)v23);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v21);
}

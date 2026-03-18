/*
 * XREFs of ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C01C51F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0042044 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00422E0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C0097140 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     PopW32ThreadLock @ 0x1C00DD608 (PopW32ThreadLock.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E7C96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C01BD2AC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01D30A4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C0209DE4 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DoDeferredPointerActivate(__int64 a1, __int64 a2, void *a3)
{
  CTouchProcessor *v6; // rcx
  const struct CPointerMsgData *MsgData; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  const struct CPointerMsgData *v10; // rbx
  __int64 v11; // rcx
  const struct CPointerInputFrame *v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int128 v20; // xmm1
  __int64 v21; // rdx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // r8
  __int128 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h]
  _OWORD v30[7]; // [rsp+50h] [rbp-B0h] BYREF
  PERESOURCE *v31[6]; // [rsp+C0h] [rbp-40h] BYREF
  CInpLockGuard *v32[6]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v33[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v34[128]; // [rsp+160h] [rbp+60h] BYREF

  v29 = 0LL;
  v28 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v32, (struct CInpLockGuard *)(a1 + 32), a3);
  MsgData = CTouchProcessor::GetMsgData(v6, (unsigned __int64)a3);
  v10 = MsgData;
  if ( MsgData )
  {
    v12 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *((_DWORD *)MsgData + 7));
    if ( v12 )
    {
      v13 = *((_DWORD *)v10 + 8);
      if ( v13 >= *((_DWORD *)v12 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v8, v9);
        v13 = *((_DWORD *)v10 + 8);
      }
      v14 = *((_QWORD *)v12 + 30) + 480LL * v13;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v14) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
      if ( *((_WORD *)v10 + 8) != *(_WORD *)(v14 + 172) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
      PushW32ThreadLock((__int64)v12, (__int64)&v28, (__int64)CTouchProcessor::DereferencePointerInputFrame);
      CInputDest::CInputDest((CInputDest *)v34, (const struct tagINPUTDEST *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v33, (struct CInputDest *)v34, v18);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v31,
        (struct _KTHREAD **)(a1 + 32),
        *(void **)(v14 + 16));
      v19 = *(_QWORD *)(v14 + 16);
      v20 = *(_OWORD *)(a2 + 16);
      v21 = *(unsigned __int16 *)(v14 + 144);
      v30[0] = *(_OWORD *)a2;
      v22 = *(_OWORD *)(a2 + 32);
      v30[1] = v20;
      v23 = *(_OWORD *)(a2 + 48);
      v30[2] = v22;
      v24 = *(_OWORD *)(a2 + 64);
      v30[3] = v23;
      v25 = *(_OWORD *)(a2 + 80);
      v30[4] = v24;
      v26 = *(_OWORD *)(a2 + 96);
      v30[5] = v25;
      v30[6] = v26;
      ApiSetEditionPointerActivate(v30, v21, v19, v14 + 160);
      CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v31);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v33);
      PopW32ThreadLock((__int64)&v28);
      CTouchProcessor::UnreferenceFrame(a1, (__int64)v12, v27);
      CInputDest::SetEmpty((CInputDest *)v34);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v32, v8, v9);
}

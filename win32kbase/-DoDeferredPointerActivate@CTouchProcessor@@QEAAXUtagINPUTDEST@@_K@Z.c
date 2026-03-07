void __fastcall CTouchProcessor::DoDeferredPointerActivate(__int64 a1, __int64 a2, void *a3)
{
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r8
  __int128 v16; // xmm1
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int128 v29; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h]
  _OWORD v31[7]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v32[40]; // [rsp+C0h] [rbp-40h] BYREF
  CInpLockGuard *v33; // [rsp+E8h] [rbp-18h]
  _BYTE v34[48]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v35[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v36[128]; // [rsp+160h] [rbp+60h] BYREF

  v30 = 0LL;
  v29 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v34, (struct CInpLockGuard *)(a1 + 32), a3);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, (unsigned __int64)a3);
  v8 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v9 = CTouchProcessor::ReferenceFrame(a1, *((unsigned int *)NonConstMsgData + 7));
    v10 = v9;
    if ( v9 )
    {
      if ( *((_DWORD *)v8 + 8) >= *(_DWORD *)(v9 + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12943);
      v11 = *(_QWORD *)(v10 + 240) + 480LL * *((unsigned int *)v8 + 8);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v11) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12945);
      if ( *((_WORD *)v8 + 8) != *(_WORD *)(v11 + 172) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12946);
      if ( qword_1C02D65C8 )
        qword_1C02D65C8(v10, &v29, CTouchProcessor::DereferencePointerInputFrame);
      CInputDest::CInputDest((CInputDest *)v36, (const struct tagINPUTDEST *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v35, (struct CInputDest *)v36, v12, v13);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v32,
        (struct CInpLockGuard *)(a1 + 32),
        *(void **)(v11 + 16),
        v14);
      v15 = *(_QWORD *)(v11 + 16);
      v16 = *(_OWORD *)(a2 + 16);
      v17 = *(unsigned __int16 *)(v11 + 144);
      v31[0] = *(_OWORD *)a2;
      v18 = *(_OWORD *)(a2 + 32);
      v31[1] = v16;
      v19 = *(_OWORD *)(a2 + 48);
      v31[2] = v18;
      v20 = *(_OWORD *)(a2 + 64);
      v31[3] = v19;
      v21 = *(_OWORD *)(a2 + 80);
      v31[4] = v20;
      v22 = *(_OWORD *)(a2 + 96);
      v31[5] = v21;
      v31[6] = v22;
      ApiSetEditionPointerActivate(v31, v17, v15, v11 + 160);
      CInpLockGuard::LockExclusive(v33);
      CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v32, v23, v24, v25);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v35, v26, v27, v28);
      if ( qword_1C02D65D8 )
        qword_1C02D65D8(&v29);
      CTouchProcessor::UnreferenceFrame(a1, v10);
      CInputDest::SetEmpty((CInputDest *)v36);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v34);
}

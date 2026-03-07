__int64 __fastcall SfnINOUTLPWINDOWPOS(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int128 v18; // xmm6
  __int64 v19; // xmm7_8
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  bool v24; // al
  bool v25; // bl
  int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 *v34; // rax
  ULONG64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rcx
  ULONG64 v40; // rcx
  __int128 v41; // xmm3
  __int64 v42; // xmm0_8
  __int64 v44; // [rsp+60h] [rbp-E8h] BYREF
  int v45; // [rsp+68h] [rbp-E0h]
  int v46; // [rsp+6Ch] [rbp-DCh]
  __int64 v47; // [rsp+70h] [rbp-D8h]
  _BYTE v48[40]; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-A8h]
  __int64 v50; // [rsp+A8h] [rbp-A0h]
  __int64 v51; // [rsp+B0h] [rbp-98h]
  __int128 v52; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-60h]
  int v54; // [rsp+150h] [rbp+8h] BYREF
  int v55; // [rsp+158h] [rbp+10h]
  unsigned __int64 v56; // [rsp+160h] [rbp+18h] BYREF

  v12 = 0LL;
  v56 = 0LL;
  v54 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v13 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 8)) )
  {
    v55 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v14 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v14 = *ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(v14 + 472);
  else
    v16 = 0LL;
  v46 = 0;
  memset(&v48[8], 0, 32);
  v44 = v16;
  v45 = a2;
  v47 = a3;
  *(_DWORD *)(a4 + 36) = 0;
  *(_OWORD *)v48 = *(_OWORD *)a4;
  *(_OWORD *)&v48[16] = *(_OWORD *)(a4 + 16);
  *(_QWORD *)&v48[32] = *(_QWORD *)(a4 + 32);
  v49 = a5;
  v50 = a6;
  ThreadLock(a1, &v52);
  v17 = *(_QWORD *)(v14 + 480);
  v18 = *(_OWORD *)(v17 + 64);
  v19 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v16;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 80LL) = v21;
  v22 = SGDGetUserSessionState(v21);
  v24 = ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v22 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v23);
  v25 = v24;
  UserSessionSwitchLeaveCrit(v23);
  EtwTraceBeginCallback(22LL);
  v26 = KeUserModeCallback(22LL, &v44, 80LL, &v56, &v54);
  EtwTraceEndCallback(22LL);
  if ( v25 )
    EnterSharedCrit(v28, v27, v29);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v31, v30, v32);
  v33 = *(_QWORD *)(v14 + 480);
  *(_OWORD *)(v33 + 64) = v18;
  *(_QWORD *)(v33 + 80) = v19;
  if ( v26 < 0 || v54 != 24 )
    return 0LL;
  v34 = (__int64 *)v56;
  v35 = v56 + 8;
  if ( v56 + 8 < v56 || v35 > MmUserProbeAddress )
    v34 = (__int64 *)MmUserProbeAddress;
  v36 = *v34;
  v51 = *v34;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v36;
  v37 = SGDGetUserSessionState(v35);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v37 + 8)) )
  {
    v55 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v38 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v38 )
    v12 = *v38;
  v39 = *(_QWORD *)(v12 + 512);
  if ( !v39 || (*(_DWORD *)(v39 + 84) & 1) == 0 || *(_QWORD *)(v39 + 96) != a4 )
  {
    v40 = *(_QWORD *)(v56 + 16);
    if ( v40 + 40 < v40 || v40 + 40 > MmUserProbeAddress )
      v40 = MmUserProbeAddress;
    v41 = *(_OWORD *)(v40 + 16);
    v42 = *(_QWORD *)(v40 + 32);
    *(_OWORD *)a4 = *(_OWORD *)v40;
    *(_OWORD *)(a4 + 16) = v41;
    *(_QWORD *)(a4 + 32) = v42;
    return v36;
  }
  return 0LL;
}

__int64 __fastcall SfnINOUTLPPOINT5(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  char v19; // bl
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 *v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 *v31; // rax
  __int64 v32; // rcx
  ULONG64 v33; // rcx
  __int128 v34; // xmm3
  __int64 v35; // xmm0_8
  _DWORD v37[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-100h] BYREF
  __int128 v39; // [rsp+58h] [rbp-F0h]
  __int64 v40; // [rsp+68h] [rbp-E0h]
  __int64 v41; // [rsp+70h] [rbp-D8h]
  __int128 v42; // [rsp+98h] [rbp-B0h]
  __int128 v43; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-90h]
  __int64 v45; // [rsp+C0h] [rbp-88h] BYREF
  int v46; // [rsp+C8h] [rbp-80h]
  __int64 v47; // [rsp+D0h] [rbp-78h]
  __int128 v48; // [rsp+D8h] [rbp-70h]
  __int128 v49; // [rsp+E8h] [rbp-60h]
  __int64 v50; // [rsp+F8h] [rbp-50h]
  __int64 v51; // [rsp+100h] [rbp-48h]
  __int64 v52; // [rsp+108h] [rbp-40h]

  v12 = 0LL;
  v38 = 0LL;
  v37[0] = 0;
  v43 = 0LL;
  v44 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(v13 + 472);
  memset_0(&v45, 0, 0x50uLL);
  v45 = v12;
  v46 = a2;
  v47 = a3;
  v48 = *a4;
  v49 = a4[1];
  v50 = *((_QWORD *)a4 + 4);
  v51 = a5;
  v52 = a6;
  ThreadLock(a1, &v43);
  v15 = *(_QWORD *)(v13 + 480);
  v42 = *(_OWORD *)(v15 + 64);
  v39 = v42;
  v40 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  v16 = 0LL;
  if ( a1 )
    v16 = *a1;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v17;
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() || (v19 = 1, !IS_USERCRIT_OWNED_AT_ALL()) )
    v19 = 0;
  UserSessionSwitchLeaveCrit(v18);
  EtwTraceBeginCallback(18LL);
  v20 = KeUserModeCallback(18LL, &v45, 80LL, &v38, v37);
  EtwTraceEndCallback(18LL);
  if ( v19 )
    EnterSharedCrit(v22, v21, v23);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v25, v24, v26);
  v27 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v27 + 64) = v42;
  *(_QWORD *)(v27 + 80) = v40;
  if ( v20 < 0 || v37[0] != 24 )
    return 0LL;
  v28 = (__int64 *)v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v28 = (__int64 *)MmUserProbeAddress;
  v29 = *v28;
  v41 = *v28;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v29;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v30 = 0LL;
  v31 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v31 )
    v30 = *v31;
  v32 = *(_QWORD *)(v30 + 512);
  if ( !v32 || (*(_DWORD *)(v32 + 84) & 1) == 0 || *(__int128 **)(v32 + 96) != a4 )
  {
    v33 = *(_QWORD *)(v38 + 16);
    if ( v33 + 40 < v33 || v33 + 40 > MmUserProbeAddress )
      v33 = MmUserProbeAddress;
    v34 = *(_OWORD *)(v33 + 16);
    v35 = *(_QWORD *)(v33 + 32);
    *a4 = *(_OWORD *)v33;
    a4[1] = v34;
    *((_QWORD *)a4 + 4) = v35;
    return v29;
  }
  return 0LL;
}

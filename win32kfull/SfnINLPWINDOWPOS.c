__int64 __fastcall SfnINLPWINDOWPOS(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // bl
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  ULONG64 v28; // rcx
  __int64 v30; // [rsp+58h] [rbp-E0h]
  __int128 v31; // [rsp+80h] [rbp-B8h]
  __int128 v32; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-98h]
  __int64 v34; // [rsp+B0h] [rbp-88h] BYREF
  int v35; // [rsp+B8h] [rbp-80h]
  __int64 v36; // [rsp+C0h] [rbp-78h]
  __int128 v37; // [rsp+C8h] [rbp-70h]
  __int128 v38; // [rsp+D8h] [rbp-60h]
  __int64 v39; // [rsp+E8h] [rbp-50h]
  __int64 v40; // [rsp+F0h] [rbp-48h]
  __int64 v41; // [rsp+F8h] [rbp-40h]
  int v42; // [rsp+140h] [rbp+8h] BYREF
  int v43; // [rsp+148h] [rbp+10h]
  unsigned __int64 v44; // [rsp+150h] [rbp+18h] BYREF

  v44 = 0LL;
  v42 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v10 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 8)) )
  {
    v43 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v11 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v11 = *ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(v11 + 472);
  else
    v13 = 0LL;
  memset_0(&v34, 0, 0x50uLL);
  v34 = v13;
  v35 = a2;
  v36 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v37 = *a4;
  v38 = a4[1];
  v39 = *((_QWORD *)a4 + 4);
  v40 = a5;
  v41 = a6;
  ThreadLock(a1, &v32);
  v14 = *(_QWORD *)(v11 + 480);
  v31 = *(_OWORD *)(v14 + 64);
  v30 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v13;
  v15 = 0LL;
  if ( a1 )
    v15 = *a1;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v15;
  if ( a1 )
    v16 = *(_QWORD *)(a1[5] + 224);
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v16;
  v17 = SGDGetUserSessionState(v16);
  v19 = 1;
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v17 + 8)) == 1 || !IS_USERCRIT_OWNED_AT_ALL(v18) )
    v19 = 0;
  UserSessionSwitchLeaveCrit(v18);
  EtwTraceBeginCallback(17LL);
  v20 = KeUserModeCallback(17LL, &v34, 80LL, &v44, &v42);
  EtwTraceEndCallback(17LL);
  if ( v19 )
    EnterSharedCrit(v22, v21, v23);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v25, v24, v26);
  v27 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v27 + 64) = v31;
  *(_QWORD *)(v27 + 80) = v30;
  if ( v20 < 0 || v42 != 24 )
    return 0LL;
  v28 = v44;
  if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
    v28 = MmUserProbeAddress;
  return *(_QWORD *)v28;
}

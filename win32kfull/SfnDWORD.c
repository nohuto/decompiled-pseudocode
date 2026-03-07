__int64 __fastcall SfnDWORD(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // si
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 result; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+58h] [rbp-C0h]
  __int64 v31; // [rsp+60h] [rbp-B8h] BYREF
  int v32; // [rsp+68h] [rbp-B0h]
  int v33; // [rsp+6Ch] [rbp-ACh]
  __int64 v34; // [rsp+70h] [rbp-A8h]
  __int64 v35; // [rsp+78h] [rbp-A0h]
  __int64 v36; // [rsp+80h] [rbp-98h]
  __int64 v37; // [rsp+88h] [rbp-90h]
  __int64 v38; // [rsp+90h] [rbp-88h]
  __int128 v39; // [rsp+B0h] [rbp-68h]
  __int128 v40; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-48h]
  int v43; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v44; // [rsp+138h] [rbp+20h] BYREF

  v9 = 0LL;
  v44 = 0LL;
  v43 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v10 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v11 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v11 = *ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(v11 + 472);
  else
    v13 = 0LL;
  v33 = 0;
  v31 = v13;
  v32 = a2;
  v34 = a3;
  v35 = a4;
  v36 = a5;
  v37 = a6;
  ThreadLock(a1, &v40);
  v14 = *(_QWORD *)(v11 + 480);
  v39 = *(_OWORD *)(v14 + 64);
  v30 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v13;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v15;
  if ( a1 )
    v9 = *(_QWORD *)(a1[5] + 224);
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v9;
  v16 = SGDGetUserSessionState(v15);
  v18 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v16 + 8)) != 1 )
  {
    v29 = SGDGetUserSessionState(v17);
    if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v29 + 8)) )
      v18 = 1;
  }
  UserSessionSwitchLeaveCrit(v17);
  EtwTraceBeginCallback(2LL);
  v19 = KeUserModeCallback(2LL, &v31, 48LL, &v44, &v43);
  EtwTraceEndCallback(2LL);
  if ( v18 )
    EnterSharedCrit(v21, v20, v22);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v26 + 64) = v39;
  *(_QWORD *)(v26 + 80) = v30;
  if ( v19 < 0 || v43 != 24 )
    return 0LL;
  v27 = (__int64 *)v44;
  if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  result = *v27;
  v38 = result;
  return result;
}

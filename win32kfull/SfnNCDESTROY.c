__int64 __fastcall SfnNCDESTROY(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  char v17; // di
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 result; // rax
  __int64 v28; // [rsp+58h] [rbp-C0h]
  __int64 v29; // [rsp+60h] [rbp-B8h] BYREF
  int v30; // [rsp+68h] [rbp-B0h]
  int v31; // [rsp+6Ch] [rbp-ACh]
  __int64 v32; // [rsp+70h] [rbp-A8h]
  __int64 v33; // [rsp+78h] [rbp-A0h]
  __int64 v34; // [rsp+80h] [rbp-98h]
  __int64 v35; // [rsp+88h] [rbp-90h]
  __int64 v36; // [rsp+90h] [rbp-88h]
  __int128 v37; // [rsp+B0h] [rbp-68h]
  __int128 v38; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-48h]
  int v40; // [rsp+120h] [rbp+8h] BYREF
  int v41; // [rsp+128h] [rbp+10h]
  unsigned __int64 v42; // [rsp+130h] [rbp+18h] BYREF

  v42 = 0LL;
  v40 = 0;
  v38 = 0LL;
  v39 = 0LL;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
  {
    v41 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v10 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v10 = *ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(v10 + 472);
  else
    v12 = 0LL;
  v31 = 0;
  v29 = v12;
  v30 = a2;
  v32 = a3;
  v33 = a4;
  v34 = a5;
  v35 = a6;
  ThreadLock(a1, &v38);
  v13 = *(_QWORD *)(v10 + 480);
  v37 = *(_OWORD *)(v13 + 64);
  v28 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v12;
  v14 = 0LL;
  if ( a1 )
    v14 = *a1;
  *(_QWORD *)(*(_QWORD *)(v10 + 480) + 64LL) = v14;
  if ( a1 )
    v15 = *(_QWORD *)(a1[5] + 224);
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 480) + 80LL) = v15;
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() || (v17 = 1, !IS_USERCRIT_OWNED_AT_ALL()) )
    v17 = 0;
  UserSessionSwitchLeaveCrit(v16);
  EtwTraceBeginCallback(3LL);
  v18 = KeUserModeCallback(3LL, &v29, 48LL, &v42, &v40);
  EtwTraceEndCallback(3LL);
  if ( v17 )
    EnterSharedCrit(v20, v19, v21);
  else
    EnterCrit(0LL, 0LL);
  if ( a1 )
    *(_QWORD *)(a1[5] + 224) = 0LL;
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v10 + 480);
  *(_OWORD *)(v25 + 64) = v37;
  *(_QWORD *)(v25 + 80) = v28;
  if ( v18 < 0 || v40 != 24 )
    return 0LL;
  v26 = (__int64 *)v42;
  if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  result = *v26;
  v36 = *v26;
  return result;
}

__int64 __fastcall ClientGetMessageMPH(_OWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rax
  char v8; // bl
  int v9; // edi
  __int64 *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rcx
  _OWORD *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF
  int v21; // [rsp+50h] [rbp-28h]
  int v22; // [rsp+54h] [rbp-24h]
  int v23; // [rsp+58h] [rbp-20h]
  int v24; // [rsp+5Ch] [rbp-1Ch]
  unsigned __int64 v25; // [rsp+88h] [rbp+10h] BYREF
  int v26; // [rsp+90h] [rbp+18h] BYREF

  v25 = 0LL;
  v26 = 0;
  v20 = a2;
  v21 = a3;
  v22 = a4;
  v23 = a5;
  v24 = a6;
  v7 = SGDGetUserSessionState();
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 8)) == 1 || (v8 = 1, !IS_USERCRIT_OWNED_AT_ALL()) )
    v8 = 0;
  UserSessionSwitchLeaveCrit();
  EtwTraceBeginCallback(73LL);
  v9 = KeUserModeCallback(73LL, &v20, 24LL, &v25, &v26);
  EtwTraceEndCallback(73LL);
  if ( v8 )
    EnterSharedCrit();
  else
    EnterCrit(0LL, 0LL);
  if ( v9 < 0 || v26 != 24 )
    return 0LL;
  v10 = (__int64 *)v25;
  if ( v25 + 8 < v25 || v25 + 8 > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  v11 = *v10;
  v12 = SGDGetUserSessionState();
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 8)) )
  {
    a5 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  v15 = *(_QWORD *)(v13 + 512);
  if ( v15 )
  {
    if ( (*(_DWORD *)(v15 + 84) & 1) != 0 && *(_OWORD **)(v15 + 96) == a1 )
      return 0LL;
  }
  v16 = *(_OWORD **)(v25 + 16);
  if ( v16 + 3 < v16 || (unsigned __int64)(v16 + 3) > MmUserProbeAddress )
    v16 = (_OWORD *)MmUserProbeAddress;
  v17 = v16[1];
  v18 = v16[2];
  *a1 = *v16;
  a1[1] = v17;
  a1[2] = v18;
  return (unsigned int)v11;
}

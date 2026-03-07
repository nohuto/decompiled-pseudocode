__int64 __fastcall xxxClientCallDitThread(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // bl
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rcx
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // xmm4
  __int128 v23; // xmm5
  __int128 v24; // xmm6
  int v26; // [rsp+30h] [rbp-128h] BYREF
  __int64 v27; // [rsp+38h] [rbp-120h]
  unsigned __int64 v28[4]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v29; // [rsp+60h] [rbp-F8h] BYREF
  _OWORD v30[12]; // [rsp+68h] [rbp-F0h] BYREF

  v28[0] = 0LL;
  v26 = 0;
  memset_0(v30, 0, sizeof(v30));
  v29 = a1;
  v30[0] = *a2;
  v30[1] = a2[1];
  v30[2] = a2[2];
  v30[3] = a2[3];
  v30[4] = a2[4];
  v30[5] = *a3;
  v30[6] = a3[1];
  v30[7] = a3[2];
  v30[8] = a3[3];
  v30[9] = a3[4];
  v30[10] = a3[5];
  v30[11] = a3[6];
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(v6) || (v8 = 1, !IS_USERCRIT_OWNED_AT_ALL(v7)) )
    v8 = 0;
  UserSessionSwitchLeaveCrit(v7);
  EtwTraceBeginCallback(56LL);
  v9 = KeUserModeCallback(56LL, &v29, 200LL, v28, &v26);
  EtwTraceEndCallback(56LL);
  if ( v8 )
    EnterSharedCrit(v11, v10, v12);
  else
    EnterCrit(0LL, 0LL);
  if ( v9 < 0 || v26 != 24 )
    return 0LL;
  v13 = (__int64 *)v28[0];
  if ( v28[0] + 8 < v28[0] || v28[0] + 8 > MmUserProbeAddress )
    v13 = (__int64 *)MmUserProbeAddress;
  v14 = *v13;
  v27 = *v13;
  if ( !IS_USERCRIT_OWNED_AT_ALL((__int64)v13) )
  {
    LODWORD(v27) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v15 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v15 = *ThreadWin32Thread;
  v17 = *(_QWORD *)(v15 + 512);
  if ( v17 )
  {
    if ( (*(_DWORD *)(v17 + 84) & 1) != 0 && *(_OWORD **)(v17 + 96) == a3 )
      return 0LL;
  }
  v18 = *(_OWORD **)(v28[0] + 16);
  if ( v18 + 7 < v18 || (unsigned __int64)(v18 + 7) > MmUserProbeAddress )
    v18 = (_OWORD *)MmUserProbeAddress;
  v19 = v18[1];
  v20 = v18[2];
  v21 = v18[3];
  v22 = v18[4];
  v23 = v18[5];
  v24 = v18[6];
  *a3 = *v18;
  a3[1] = v19;
  a3[2] = v20;
  a3[3] = v21;
  a3[4] = v22;
  a3[5] = v23;
  a3[6] = v24;
  return (unsigned int)v14;
}

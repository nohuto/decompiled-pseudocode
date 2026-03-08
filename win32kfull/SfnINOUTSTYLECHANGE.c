/*
 * XREFs of SfnINOUTSTYLECHANGE @ 0x1C00CF7D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SfnINOUTSTYLECHANGE(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 *a4,
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
  bool v19; // bl
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 *v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v33; // [rsp+58h] [rbp-C0h]
  __int64 v34; // [rsp+60h] [rbp-B8h] BYREF
  int v35; // [rsp+68h] [rbp-B0h]
  int v36; // [rsp+6Ch] [rbp-ACh]
  __int64 v37; // [rsp+70h] [rbp-A8h]
  __int64 v38; // [rsp+78h] [rbp-A0h]
  __int64 v39; // [rsp+80h] [rbp-98h]
  __int64 v40; // [rsp+88h] [rbp-90h]
  __int64 v41; // [rsp+90h] [rbp-88h]
  __int128 v42; // [rsp+B8h] [rbp-60h]
  __int128 v43; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v44; // [rsp+D8h] [rbp-40h]
  int v45; // [rsp+120h] [rbp+8h] BYREF
  int v46; // [rsp+128h] [rbp+10h]
  unsigned __int64 v47; // [rsp+130h] [rbp+18h] BYREF

  v12 = 0LL;
  v47 = 0LL;
  v45 = 0;
  v43 = 0LL;
  v44 = 0LL;
  if ( !IS_USERCRIT_OWNED_AT_ALL((__int64)a1) )
  {
    v46 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(v13 + 472);
  v36 = 0;
  v34 = v12;
  v35 = a2;
  v37 = a3;
  v39 = a5;
  v40 = a6;
  v38 = *a4;
  ThreadLock(a1, &v43);
  v15 = *(_QWORD *)(v13 + 480);
  v42 = *(_OWORD *)(v15 + 64);
  v33 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v17;
  v19 = !IS_USERCRIT_OWNED_EXCLUSIVE(v17) && IS_USERCRIT_OWNED_AT_ALL(v18);
  UserSessionSwitchLeaveCrit(v18);
  EtwTraceBeginCallback(39LL);
  v20 = KeUserModeCallback(39LL, &v34, 48LL, &v47, &v45);
  EtwTraceEndCallback(39LL);
  if ( v19 )
    EnterSharedCrit(v22, v21, v23);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v25, v24, v26);
  v27 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v27 + 64) = v42;
  *(_QWORD *)(v27 + 80) = v33;
  if ( v20 >= 0 && v45 == 24 )
  {
    v28 = (__int64 *)v47;
    if ( v47 + 8 < v47 || v47 + 8 > MmUserProbeAddress )
      v28 = (__int64 *)MmUserProbeAddress;
    v29 = *v28;
    v41 = *v28;
    if ( a2 != 124 || a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v29;
    v30 = *((_QWORD *)PtiCurrentShared((__int64)v28) + 64);
    if ( !v30 || (*(_DWORD *)(v30 + 84) & 1) == 0 || *(__int64 **)(v30 + 96) != a4 )
    {
      v31 = *(__int64 **)(v47 + 16);
      if ( v31 + 1 < v31 || (unsigned __int64)(v31 + 1) > MmUserProbeAddress )
        v31 = (__int64 *)MmUserProbeAddress;
      *a4 = *v31;
      return v29;
    }
  }
  return 0LL;
}

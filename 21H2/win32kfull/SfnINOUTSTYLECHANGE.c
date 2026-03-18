/*
 * XREFs of SfnINOUTSTYLECHANGE @ 0x1C00DE170
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
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
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  bool v22; // bl
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 *v35; // rax
  __int64 v37; // [rsp+58h] [rbp-B0h]
  _QWORD v38[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h] BYREF
  int v40; // [rsp+80h] [rbp-88h]
  int v41; // [rsp+84h] [rbp-84h]
  __int64 v42; // [rsp+88h] [rbp-80h]
  __int64 v43; // [rsp+90h] [rbp-78h]
  __int64 v44; // [rsp+98h] [rbp-70h]
  __int64 v45; // [rsp+A0h] [rbp-68h]
  __int64 v46; // [rsp+A8h] [rbp-60h]
  __int128 v47; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v48; // [rsp+110h] [rbp+8h] BYREF
  int v49; // [rsp+118h] [rbp+10h] BYREF

  v12 = 0LL;
  v48 = 0LL;
  v49 = 0;
  v38[2] = 0LL;
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(v13 + 472);
  else
    v15 = 0LL;
  v41 = 0;
  v39 = v15;
  v40 = a2;
  v42 = a3;
  v44 = a5;
  v45 = a6;
  v43 = *a4;
  v16 = 0LL;
  v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v17 )
    v16 = *v17;
  v38[0] = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = v38;
  v38[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v18 = *(_QWORD *)(v13 + 480);
  v47 = *(_OWORD *)(v18 + 64);
  v37 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v15;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v20;
  v22 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v21);
  EtwTraceBeginCallback(39LL);
  v23 = KeUserModeCallback(39LL, &v39, 48LL, &v48, &v49);
  EtwTraceEndCallback(39LL);
  if ( v22 )
    EnterSharedCrit(v25, v24, v26);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v28, v27, v29);
  v30 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v30 + 64) = v47;
  *(_QWORD *)(v30 + 80) = v37;
  if ( v23 >= 0 && v49 == 24 )
  {
    v31 = (__int64 *)v48;
    if ( v48 + 8 < v48 || v48 + 8 > MmUserProbeAddress )
      v31 = (__int64 *)MmUserProbeAddress;
    v32 = *v31;
    v46 = *v31;
    if ( a2 != 124 || a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v32;
    v33 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v33 )
      v12 = *v33;
    v34 = *(_QWORD *)(v12 + 512);
    if ( !v34 || (*(_DWORD *)(v34 + 84) & 1) == 0 || *(__int64 **)(v34 + 96) != a4 )
    {
      v35 = *(__int64 **)(v48 + 16);
      if ( v35 + 1 < v35 || (unsigned __int64)(v35 + 1) > MmUserProbeAddress )
        v35 = (__int64 *)MmUserProbeAddress;
      *a4 = *v35;
      return v32;
    }
  }
  return 0LL;
}

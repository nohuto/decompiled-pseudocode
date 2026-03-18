/*
 * XREFs of SfnINOUTLPWINDOWPOS @ 0x1C00E08F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall SfnINOUTLPWINDOWPOS(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  bool v21; // bl
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rcx
  ULONG64 v35; // rcx
  __int128 v36; // xmm3
  __int64 v37; // xmm0_8
  __int64 v39; // [rsp+58h] [rbp-D0h]
  _QWORD v40[8]; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-88h]
  __int64 v42; // [rsp+B0h] [rbp-78h] BYREF
  int v43; // [rsp+B8h] [rbp-70h]
  int v44; // [rsp+BCh] [rbp-6Ch]
  __int64 v45; // [rsp+C0h] [rbp-68h]
  __int128 v46; // [rsp+C8h] [rbp-60h]
  __int128 v47; // [rsp+D8h] [rbp-50h]
  __int64 v48; // [rsp+E8h] [rbp-40h]
  __int64 v49; // [rsp+F0h] [rbp-38h]
  __int64 v50; // [rsp+F8h] [rbp-30h]
  unsigned __int64 v51; // [rsp+130h] [rbp+8h] BYREF
  int v52; // [rsp+138h] [rbp+10h] BYREF

  v51 = 0LL;
  v52 = 0;
  v40[2] = 0LL;
  v12 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v12 = *ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(v12 + 472);
  else
    v14 = 0LL;
  v44 = 0;
  v42 = v14;
  v43 = a2;
  v45 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v46 = *a4;
  v47 = a4[1];
  v48 = *((_QWORD *)a4 + 4);
  v49 = a5;
  v50 = a6;
  v15 = 0LL;
  v16 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v16 )
    v15 = *v16;
  v40[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v40;
  v40[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v12 + 480);
  v41 = *(_OWORD *)(v17 + 64);
  v39 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v19;
  v21 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v20);
  EtwTraceBeginCallback(22LL);
  v22 = KeUserModeCallback(22LL, &v42, 80LL, &v51, &v52);
  EtwTraceEndCallback(22LL);
  if ( v21 )
    EnterSharedCrit(v24, v23, v25);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v29 + 64) = v41;
  *(_QWORD *)(v29 + 80) = v39;
  if ( v22 < 0 || v52 != 24 )
    return 0LL;
  v30 = (__int64 *)v51;
  if ( v51 + 8 < v51 || v51 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  v31 = *v30;
  v40[3] = *v30;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v31;
  v32 = 0LL;
  v33 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v33 )
    v32 = *v33;
  v34 = *(_QWORD *)(v32 + 512);
  if ( !v34 || (*(_DWORD *)(v34 + 84) & 1) == 0 || *(__int128 **)(v34 + 96) != a4 )
  {
    v35 = *(_QWORD *)(v51 + 16);
    if ( v35 + 40 < v35 || v35 + 40 > MmUserProbeAddress )
      v35 = MmUserProbeAddress;
    v36 = *(_OWORD *)(v35 + 16);
    v37 = *(_QWORD *)(v35 + 32);
    *a4 = *(_OWORD *)v35;
    a4[1] = v36;
    *((_QWORD *)a4 + 4) = v37;
    return v31;
  }
  return 0LL;
}

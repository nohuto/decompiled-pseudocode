/*
 * XREFs of SfnINOUTNCCALCSIZE @ 0x1C006B370
 * Callers:
 *     <none>
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C006D934 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall SfnINOUTNCCALCSIZE(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  unsigned int v15; // r12d
  __int64 v16; // r15
  __int64 *v17; // rax
  __int64 v18; // rax
  __int128 v19; // xmm6
  __int64 v20; // xmm7_8
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int *Data; // rax
  ULONG_PTR v24; // rdx
  bool v25; // bl
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 *v32; // rcx
  __int64 v33; // rdi
  ULONG64 v34; // rcx
  __int128 *v35; // xmm0_8
  __int128 *v36; // rbx
  __int128 v37; // xmm0
  __int64 v38; // rax
  _DWORD v40[8]; // [rsp+50h] [rbp-1B8h] BYREF
  unsigned __int64 v41[3]; // [rsp+70h] [rbp-198h] BYREF
  _QWORD v42[3]; // [rsp+88h] [rbp-180h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-168h]
  __int64 v44; // [rsp+B0h] [rbp-158h]
  __int64 v45; // [rsp+B8h] [rbp-150h]
  __int64 v46; // [rsp+C0h] [rbp-148h]
  __int128 v47; // [rsp+E8h] [rbp-120h]
  volatile void *Address; // [rsp+F8h] [rbp-110h]
  __int128 v49; // [rsp+100h] [rbp-108h]
  __int128 *v50; // [rsp+110h] [rbp-F8h]
  _OWORD v51[9]; // [rsp+120h] [rbp-E8h] BYREF

  v12 = 0LL;
  v41[0] = 0LL;
  v40[0] = 0;
  v42[2] = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(v13 + 472);
  v15 = 136;
  memset(v51, 0, 0x88uLL);
  *(_QWORD *)&v51[0] = v12;
  DWORD2(v51[0]) = a2;
  *(_QWORD *)&v51[1] = a3;
  *((_QWORD *)&v51[1] + 1) = a5;
  *(_QWORD *)&v51[2] = a6;
  *(_OWORD *)((char *)&v51[2] + 8) = *(_OWORD *)a4;
  if ( a3 )
  {
    *(_OWORD *)((char *)&v51[3] + 8) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)((char *)&v51[4] + 8) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)&v51[5] + 1) = *(_QWORD *)(a4 + 48);
    *(_DWORD *)(*((_QWORD *)&v51[5] + 1) + 36LL) = 0;
    v51[6] = **((_OWORD **)&v51[5] + 1);
    v51[7] = *(_OWORD *)(*((_QWORD *)&v51[5] + 1) + 16LL);
    *(_QWORD *)&v51[8] = *(_QWORD *)(*((_QWORD *)&v51[5] + 1) + 32LL);
    *((_QWORD *)&v51[5] + 1) = 0LL;
  }
  else
  {
    v15 = 56;
  }
  v16 = 0LL;
  v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v17 )
    v16 = *v17;
  v42[0] = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = v42;
  v42[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v18 = *(_QWORD *)(v13 + 480);
  v19 = *(_OWORD *)(v18 + 64);
  v43 = v19;
  v20 = *(_QWORD *)(v18 + 80);
  v44 = v20;
  *(_QWORD *)(v18 + 72) = v12;
  v21 = 0LL;
  if ( a1 )
    v21 = *a1;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224);
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v22;
  Data = (unsigned int *)GetData();
  if ( Data )
    v24 = *Data;
  else
    v24 = 0LL;
  if ( (_DWORD)v24 )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, v24, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  v25 = (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() != 0;
  UserSessionSwitchLeaveCrit(v26);
  EtwTraceBeginCallback(21LL);
  v27 = KeUserModeCallback(21LL, v51, v15, v41, v40);
  EtwTraceEndCallback(21LL);
  if ( v25 )
    EnterSharedCrit();
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v29, v28, v30);
  v31 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v31 + 64) = v19;
  *(_QWORD *)(v31 + 80) = v20;
  if ( v27 < 0 || v40[0] != 24 )
    return 0LL;
  v32 = (__int64 *)v41[0];
  if ( v41[0] + 8 < v41[0] || v41[0] + 8 > MmUserProbeAddress )
    v32 = (__int64 *)MmUserProbeAddress;
  v33 = *v32;
  v45 = *v32;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v34 = v41[0];
    if ( v41[0] + 24 < v41[0] || v41[0] + 24 > MmUserProbeAddress )
      v34 = MmUserProbeAddress;
    v47 = *(_OWORD *)v34;
    v35 = *(__int128 **)(v34 + 16);
    Address = v35;
    v49 = v47;
    v50 = v35;
    v36 = v35;
    ProbeForRead(v35, 0x60uLL, 4u);
    v37 = *v35;
    if ( a3 )
    {
      v46 = *(_QWORD *)(a4 + 48);
      v38 = v46;
      *(_OWORD *)a4 = v37;
      *(_OWORD *)(a4 + 16) = v36[1];
      *(_OWORD *)(a4 + 32) = v36[2];
      *(_QWORD *)(a4 + 48) = *((_QWORD *)v36 + 6);
      *(_OWORD *)v38 = *(__int128 *)((char *)v36 + 56);
      *(_OWORD *)(v38 + 16) = *(__int128 *)((char *)v36 + 72);
      *(_QWORD *)(v38 + 32) = *((_QWORD *)v36 + 11);
      *(_QWORD *)(a4 + 48) = v38;
    }
    else
    {
      *(_OWORD *)a4 = v37;
    }
  }
  return v33;
}

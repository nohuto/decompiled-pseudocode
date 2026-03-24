/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x1C0022B90
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021A5C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00232F8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00233D0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall SfnGETDBCSTEXTLENGTHS(
        _QWORD *a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rdi
  __int64 v21; // rdi
  __int64 v23; // rdx
  unsigned int v24; // edi
  __int64 v25; // r14
  unsigned int v26; // edx
  unsigned int v27; // r12d
  unsigned __int8 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // esi
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 *v35; // rsi
  __int64 v36; // rsi
  ULONG64 v37; // rcx
  __int64 v38; // xmm0_8
  char v39; // [rsp+30h] [rbp-428h] BYREF
  char v40; // [rsp+31h] [rbp-427h] BYREF
  char v41; // [rsp+32h] [rbp-426h] BYREF
  char v42; // [rsp+33h] [rbp-425h] BYREF
  int v43; // [rsp+34h] [rbp-424h]
  int v44; // [rsp+38h] [rbp-420h] BYREF
  int v45; // [rsp+3Ch] [rbp-41Ch] BYREF
  int v46; // [rsp+40h] [rbp-418h]
  __int64 v47; // [rsp+48h] [rbp-410h]
  unsigned int v48; // [rsp+50h] [rbp-408h]
  unsigned __int64 v49; // [rsp+78h] [rbp-3E0h] BYREF
  __int128 v50; // [rsp+80h] [rbp-3D8h]
  unsigned __int64 v51; // [rsp+90h] [rbp-3C8h] BYREF
  __int64 v52; // [rsp+98h] [rbp-3C0h]
  __int64 v53; // [rsp+A0h] [rbp-3B8h]
  __int64 v54; // [rsp+B8h] [rbp-3A0h]
  __int64 v55; // [rsp+C0h] [rbp-398h]
  __int128 v56; // [rsp+C8h] [rbp-390h]
  ULONG_PTR RegionSize; // [rsp+D8h] [rbp-380h] BYREF
  __int128 v58; // [rsp+E0h] [rbp-378h]
  __int64 v59; // [rsp+F0h] [rbp-368h]
  __int128 v60; // [rsp+F8h] [rbp-360h] BYREF
  __int64 v61; // [rsp+108h] [rbp-350h]
  __int128 v62; // [rsp+110h] [rbp-348h]
  __int64 v63; // [rsp+120h] [rbp-338h]
  __int64 v64; // [rsp+128h] [rbp-330h] BYREF
  int v65; // [rsp+130h] [rbp-328h]
  int v66; // [rsp+134h] [rbp-324h]
  __int64 v67; // [rsp+138h] [rbp-320h]
  __int64 v68; // [rsp+140h] [rbp-318h]
  __int64 v69; // [rsp+148h] [rbp-310h]
  _QWORD v70[3]; // [rsp+150h] [rbp-308h] BYREF
  __int128 v71; // [rsp+168h] [rbp-2F0h] BYREF
  __int64 v72; // [rsp+178h] [rbp-2E0h]
  __int128 v73; // [rsp+1B8h] [rbp-2A0h] BYREF
  __int64 v74; // [rsp+1C8h] [rbp-290h]
  unsigned __int8 v75[96]; // [rsp+1D0h] [rbp-288h] BYREF
  unsigned __int8 v76[512]; // [rsp+230h] [rbp-228h] BYREF

  v54 = a3;
  v46 = a4 != 0;
  v43 = a7 & 1;
  v51 = 0LL;
  v44 = 0;
  v52 = 0LL;
  v70[2] = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  if ( !a1 )
    return 0LL;
  v47 = *(_QWORD *)(a1[5] + 120LL);
  v66 = 0;
  v64 = v14;
  v65 = a2;
  v67 = a3;
  v55 = a5;
  v68 = a5;
  *(_QWORD *)&v56 = a6;
  v69 = a6;
  v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v70[0] = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = v70;
  v70[1] = a1;
  HMLockObject(a1);
  v16 = *(_QWORD *)(v13 + 480);
  v50 = *(_OWORD *)(v16 + 64);
  v58 = v50;
  v59 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = *a1;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = *(_QWORD *)(a1[5] + 224LL);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v40);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(6LL);
  v17 = KeUserModeCallback(6LL, &v64, 40LL, &v51, &v44);
  EtwTraceEndCallback(6LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v40);
  ThreadUnlock1(v18);
  v19 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v19 + 64) = v50;
  *(_QWORD *)(v19 + 80) = v59;
  if ( v17 < 0 || v44 != 24 )
    return 0LL;
  v20 = (__int64 *)v51;
  if ( v51 + 8 < v51 || v51 + 8 > MmUserProbeAddress )
    v20 = (__int64 *)MmUserProbeAddress;
  v21 = *v20;
  v52 = v21;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 || (int)v21 <= 0 || v46 == v43 )
    return v21;
  if ( *(_QWORD *)(a1[5] + 120LL) != v47 )
    goto LABEL_62;
  v23 = 0LL;
  if ( a2 != 14 )
  {
    LOBYTE(v23) = 1;
    if ( HMValidateHandleNoSecure(*a1, v23) )
    {
      if ( a2 == 394 )
      {
        LODWORD(v23) = (*(_DWORD *)(a1[5] + 28LL) & 0x40) == 0 && (*(_DWORD *)(a1[5] + 28LL) & 0x30) != 0;
        goto LABEL_59;
      }
      if ( a2 == 329 )
      {
        if ( (*(_DWORD *)(a1[5] + 28LL) & 0x30) != 0 && (*(_DWORD *)(a1[5] + 28LL) & 0x200) == 0 )
        {
          LODWORD(v23) = 1;
LABEL_60:
          v21 = 8LL;
          v52 = 8LL;
          goto LABEL_19;
        }
        LODWORD(v23) = 0;
LABEL_59:
        if ( !(_DWORD)v23 )
          goto LABEL_20;
        goto LABEL_60;
      }
    }
    return 0LL;
  }
LABEL_19:
  if ( (_DWORD)v23 )
    return v21;
LABEL_20:
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x4000000) != 0 )
  {
    if ( a4 )
LABEL_62:
      v21 *= 2LL;
    return v21;
  }
  v24 = v21 + 1;
  v48 = v24;
  memset(v75, 0, sizeof(v75));
  v49 = 0LL;
  v45 = 0;
  v53 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v25 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v47 = a1[5] - *(_QWORD *)(v25 + 472);
  *(_DWORD *)(gptiCurrent + 488LL) |= 0x4000000u;
  v26 = 2 * v24;
  if ( v43 )
    v26 = v24;
  v27 = v26;
  v28 = AllocCallbackMessage(96, 1u, v26, v76, 0, 0x200uLL);
  *(_QWORD *)&v50 = v28;
  if ( !v28 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v71 = 0LL;
  v72 = 0LL;
  if ( v28 != v75 && v28 != v76 )
    PushW32ThreadLock(v28, &v71, Win32FreePool);
  *((_QWORD *)v28 + 5) = v47;
  *((_DWORD *)v28 + 12) = a2 - 1;
  v29 = v48;
  if ( a2 != 14 )
    v29 = v54;
  *((_QWORD *)v28 + 7) = v29;
  *((_QWORD *)v28 + 8) = v55;
  *((_QWORD *)v28 + 9) = v56;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v28, v27, (void **)v28 + 10) < 0 )
    goto LABEL_48;
  *((_DWORD *)v28 + 22) = v27;
  v30 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v60 = *(_QWORD *)(v30 + 416);
  *(_QWORD *)(v30 + 416) = &v60;
  *((_QWORD *)&v60 + 1) = a1;
  HMLockObject(a1);
  v31 = *(_QWORD *)(v25 + 480);
  v56 = *(_OWORD *)(v31 + 64);
  v62 = v56;
  v63 = *(_QWORD *)(v31 + 80);
  *(_QWORD *)(v31 + 72) = v47;
  *(_QWORD *)(*(_QWORD *)(v25 + 480) + 64LL) = *a1;
  *(_QWORD *)(*(_QWORD *)(v25 + 480) + 80LL) = *(_QWORD *)(a1[5] + 224LL);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v42);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v28 + 2) = 0LL;
  v32 = KeUserModeCallback(35LL, v28, *(unsigned int *)v28, &v49, &v45);
  EtwTraceEndCallback(35LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v42);
  ThreadUnlock1(v33);
  v34 = *(_QWORD *)(v25 + 480);
  *(_OWORD *)(v34 + 64) = v56;
  *(_QWORD *)(v34 + 80) = v63;
  if ( v32 < 0 )
    goto LABEL_48;
  if ( v45 == 24 )
  {
    v35 = (__int64 *)v49;
    if ( v49 + 8 < v49 || v49 + 8 > MmUserProbeAddress )
      v35 = (__int64 *)MmUserProbeAddress;
    v36 = *v35;
    v53 = v36;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)v36 > 0 )
    {
      v37 = v49;
      if ( v49 + 24 < v49 || v49 + 24 > MmUserProbeAddress )
        v37 = MmUserProbeAddress;
      v38 = *(_QWORD *)(v37 + 16);
      v73 = *(_OWORD *)v37;
      v74 = v38;
      v36 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v73, v36, v46, v43);
      v53 = v36;
    }
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x4000000u;
  }
  else
  {
LABEL_48:
    v36 = 0LL;
  }
  if ( v28 != v75 && v28 != v76 )
  {
    if ( *((_QWORD *)v28 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v28 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v71);
  }
  return v36;
}

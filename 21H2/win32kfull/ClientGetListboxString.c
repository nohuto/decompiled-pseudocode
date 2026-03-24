/*
 * XREFs of ClientGetListboxString @ 0x1C015A484
 * Callers:
 *     SfnOUTCBOXSTRING @ 0x1C015A250 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C015A370 (SfnOUTLBOXSTRING.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021AFC (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0023398 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0023470 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00245CC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall ClientGetListboxString(
        __int64 *a1,
        int a2,
        __int64 a3,
        struct _LARGE_STRING *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // r15
  __int64 v16; // r14
  int v17; // ecx
  unsigned __int64 v18; // rdx
  int v19; // r11d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int64 *v27; // rdi
  unsigned __int64 v28; // rdi
  ULONG64 v29; // rcx
  __int64 v30; // xmm0_8
  __int64 v31; // rdx
  int v32; // r15d
  int v33; // r8d
  unsigned int v34; // r8d
  unsigned int v35; // eax
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  char v39; // [rsp+30h] [rbp-378h] BYREF
  _BYTE v40[3]; // [rsp+31h] [rbp-377h] BYREF
  unsigned int v41; // [rsp+34h] [rbp-374h]
  int v42; // [rsp+38h] [rbp-370h] BYREF
  int v43; // [rsp+3Ch] [rbp-36Ch]
  unsigned __int8 *v44; // [rsp+40h] [rbp-368h]
  unsigned __int64 v45[3]; // [rsp+48h] [rbp-360h] BYREF
  unsigned __int64 v46; // [rsp+60h] [rbp-348h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-338h] BYREF
  __int128 v48; // [rsp+78h] [rbp-330h] BYREF
  __int64 v49; // [rsp+88h] [rbp-320h]
  __int128 v50; // [rsp+90h] [rbp-318h]
  __int64 v51; // [rsp+A0h] [rbp-308h]
  __int128 v52; // [rsp+A8h] [rbp-300h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-2F0h]
  __int128 v54; // [rsp+C0h] [rbp-2E8h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-2D8h]
  __int128 v56; // [rsp+100h] [rbp-2A8h]
  unsigned __int8 v57[96]; // [rsp+110h] [rbp-298h] BYREF
  unsigned __int8 v58[512]; // [rsp+170h] [rbp-238h] BYREF

  v43 = a7 & 1;
  memset(v57, 0, sizeof(v57));
  v13 = v57;
  v45[0] = 0LL;
  v42 = 0;
  v46 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v16 = 0LL;
  v17 = *((_DWORD *)a4 + 1);
  v18 = (v17 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v18 < (v17 & 0x7FFFFFFFu) )
    goto LABEL_50;
  v41 = (v17 & 0x7FFFFFFF) + 2;
  if ( v17 < 0 && !v43 )
  {
    v18 *= 2LL;
    if ( v18 > 0xFFFFFFFF )
      goto LABEL_50;
    v41 = v18;
  }
  v13 = AllocCallbackMessage(96, 1u, (unsigned int)v18, v58, 0, 0x200uLL);
  v44 = v13;
  if ( !v13 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v54 = 0LL;
  v55 = 0LL;
  if ( v13 != v57 && v13 != v58 )
    PushW32ThreadLock((__int64)v13, &v54, (__int64)Win32FreePool);
  *((_QWORD *)v13 + 5) = v16;
  *((_DWORD *)v13 + 12) = a2;
  *((_QWORD *)v13 + 7) = a3;
  *((_QWORD *)v13 + 8) = a5;
  *((_QWORD *)v13 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v13, v41, (void **)v13 + 10) < 0 )
    goto LABEL_50;
  *((_DWORD *)v13 + 22) = v19;
  v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v48 = *(_QWORD *)(v20 + 416);
  *(_QWORD *)(v20 + 416) = &v48;
  *((_QWORD *)&v48 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v15 + 480);
  v56 = *(_OWORD *)(v21 + 64);
  v50 = v56;
  v51 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v16;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 480) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 480) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v40);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(72LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v24 = KeUserModeCallback(72LL, v13, *(unsigned int *)v13, v45, &v42);
  EtwTraceEndCallback(72LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v40);
  ThreadUnlock1(v25);
  v26 = *(_QWORD *)(v15 + 480);
  *(_OWORD *)(v26 + 64) = v56;
  *(_QWORD *)(v26 + 80) = v51;
  if ( v24 < 0 || v42 != 24 )
    goto LABEL_50;
  v27 = (unsigned __int64 *)v45[0];
  if ( v45[0] + 8 < v45[0] || v45[0] + 8 > MmUserProbeAddress )
    v27 = (unsigned __int64 *)MmUserProbeAddress;
  v28 = *v27;
  v46 = v28;
  if ( (v28 & 0x80000000) != 0LL || a9 && (*(_DWORD *)(a9 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_45;
  if ( !a8 )
  {
    v29 = v45[0];
    if ( v45[0] + 24 < v45[0] || v45[0] + 24 > MmUserProbeAddress )
      v29 = MmUserProbeAddress;
    v30 = *(_QWORD *)(v29 + 16);
    v52 = *(_OWORD *)v29;
    v53 = v30;
    v31 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( v31 && (*(_DWORD *)(v31 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v31 + 96) == a4 )
      goto LABEL_50;
    v32 = v43;
    v28 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v52, v28, *((_DWORD *)a4 + 1) >> 31, v43);
    v46 = v28;
    v33 = *((_DWORD *)a4 + 1);
    if ( v33 < 0 )
      v34 = v33 & 0x7FFFFFFF;
    else
      v34 = ((unsigned int)v33 >> 1) & 0x3FFFFFFF;
    CopyOutputString((volatile void **)&v52, a4, v34, v32);
LABEL_39:
    if ( !a8 && v28 != -1LL )
    {
      v35 = *(_DWORD *)a4 >> 1;
      if ( *((int *)a4 + 1) < 0 )
        v35 = *(_DWORD *)a4;
      if ( v28 > v35 )
        LODWORD(v28) = v35;
    }
    goto LABEL_45;
  }
  v37 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( !v37 || (*(_DWORD *)(v37 + 84) & 1) == 0 || *(_QWORD *)(v37 + 96) != *((_QWORD *)a4 + 1) )
  {
    v38 = *(_QWORD **)(v45[0] + 16);
    if ( v38 + 1 < v38 || (unsigned __int64)(v38 + 1) > MmUserProbeAddress )
      v38 = (_QWORD *)MmUserProbeAddress;
    **((_QWORD **)a4 + 1) = *v38;
    goto LABEL_39;
  }
LABEL_50:
  LODWORD(v28) = 0;
LABEL_45:
  if ( v13 != v57 && v13 != v58 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v54);
  }
  return (unsigned int)v28;
}

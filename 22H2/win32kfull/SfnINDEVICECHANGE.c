/*
 * XREFs of SfnINDEVICECHANGE @ 0x1C0020920
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00219B8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021A5C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall SfnINDEVICECHANGE(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned int v14; // r12d
  unsigned __int8 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdi
  char v26; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v27[3]; // [rsp+31h] [rbp-357h] BYREF
  int v28; // [rsp+34h] [rbp-354h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-350h]
  unsigned __int8 *v30; // [rsp+50h] [rbp-338h]
  unsigned __int64 v31; // [rsp+58h] [rbp-330h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-320h] BYREF
  __int128 v33; // [rsp+70h] [rbp-318h] BYREF
  __int64 v34; // [rsp+80h] [rbp-308h]
  __int128 v35; // [rsp+88h] [rbp-300h]
  __int64 v36; // [rsp+98h] [rbp-2F0h]
  __int128 v37; // [rsp+A0h] [rbp-2E8h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-2D8h]
  __int64 v39; // [rsp+B8h] [rbp-2D0h]
  __int128 v40; // [rsp+D8h] [rbp-2B0h]
  unsigned __int8 v41[96]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v42[512]; // [rsp+150h] [rbp-238h] BYREF
  int v43; // [rsp+3C0h] [rbp+38h]

  v29 = a2;
  v43 = a7 & 1;
  v10 = (unsigned __int16)a3 & 0x8000;
  memset(v41, 0, sizeof(v41));
  v31 = 0LL;
  v28 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v14 = 0;
  if ( v10 && a4 && a4 >= MmSystemRangeStart )
    v14 = *a4;
  v15 = (unsigned __int8 *)AllocCallbackMessage(0x60u, 1u, v14, v42, 1, 0x200uLL);
  v30 = v15;
  if ( !v15 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v37 = 0LL;
  v38 = 0LL;
  if ( v15 != v41 && v15 != v42 )
    PushW32ThreadLock(v15, &v37, Win32FreePool);
  *((_QWORD *)v15 + 5) = v13;
  *((_DWORD *)v15 + 12) = v29;
  *((_QWORD *)v15 + 7) = a3;
  if ( v14 )
  {
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v15, a4, *a4, (void **)v15 + 10) < 0 )
      goto LABEL_32;
  }
  else
  {
    *((_QWORD *)v15 + 10) = a4;
  }
  *((_DWORD *)v15 + 22) = v43;
  *((_QWORD *)v15 + 8) = a5;
  *((_QWORD *)v15 + 9) = a6;
  v16 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v33 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v33;
  *((_QWORD *)&v33 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v12 + 480);
  v40 = *(_OWORD *)(v17 + 64);
  v35 = v40;
  v36 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
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
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v27);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  EtwTraceBeginCallback(28LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v20 = KeUserModeCallback(28LL, v15, *(unsigned int *)v15, &v31, &v28);
  EtwTraceEndCallback(28LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v27);
  ThreadUnlock1(v21);
  v22 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v22 + 64) = v40;
  *(_QWORD *)(v22 + 80) = v36;
  if ( v20 >= 0 && v28 == 24 )
  {
    v23 = (__int64 *)v31;
    if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    v39 = *v23;
    goto LABEL_25;
  }
LABEL_32:
  v24 = 0LL;
LABEL_25:
  if ( v15 != v41 && v15 != v42 )
  {
    if ( *((_QWORD *)v15 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v37);
  }
  return v24;
}

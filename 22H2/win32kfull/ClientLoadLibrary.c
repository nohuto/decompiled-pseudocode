/*
 * XREFs of ClientLoadLibrary @ 0x1C0020CF8
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C00205DC (xxxLoadHmodIndex.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00219B8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021A5C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall ClientLoadLibrary(void **a1, void **a2)
{
  unsigned __int8 *v4; // rdi
  int v5; // ebx
  __int64 *v6; // rcx
  __int64 v7; // rbx
  char v9; // [rsp+30h] [rbp-2B8h] BYREF
  _BYTE v10[3]; // [rsp+31h] [rbp-2B7h] BYREF
  int v11; // [rsp+34h] [rbp-2B4h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-2A0h] BYREF
  __int128 v14; // [rsp+50h] [rbp-298h] BYREF
  __int64 v15; // [rsp+60h] [rbp-288h]
  __int64 v16; // [rsp+68h] [rbp-280h]
  unsigned __int8 v17[72]; // [rsp+80h] [rbp-268h] BYREF
  unsigned __int8 v18[512]; // [rsp+D0h] [rbp-218h] BYREF

  memset(v17, 0, sizeof(v17));
  v12[0] = 0LL;
  v11 = 0;
  v4 = (unsigned __int8 *)AllocCallbackMessage(
                            0x48u,
                            2u,
                            *((unsigned __int16 *)a2 + 1) + (unsigned __int64)*((unsigned __int16 *)a1 + 1),
                            v18,
                            1,
                            0x200uLL);
  v12[1] = v4;
  if ( !v4 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v14 = 0LL;
  v15 = 0LL;
  if ( v4 != v17 && v4 != v18 )
    PushW32ThreadLock(v4, &v14, Win32FreePool);
  *((_WORD *)v4 + 20) = *(_WORD *)a1;
  *((_WORD *)v4 + 21) = *((_WORD *)a1 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v4, a1[1], *(unsigned __int16 *)a1 + 2, (void **)v4 + 6) < 0 )
    goto LABEL_18;
  *((_WORD *)v4 + 28) = *(_WORD *)a2;
  *((_WORD *)v4 + 29) = *((_WORD *)a2 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v4, a2[1], *(unsigned __int16 *)a2 + 2, (void **)v4 + 8) < 0 )
    goto LABEL_18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v10);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(75LL);
  *((_QWORD *)v4 + 2) = 0LL;
  v5 = KeUserModeCallback(75LL, v4, *(unsigned int *)v4, v12, &v11);
  EtwTraceEndCallback(75LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v10);
  if ( v5 < 0 )
    goto LABEL_18;
  if ( v11 == 24 )
  {
    v6 = (__int64 *)v12[0];
    if ( (unsigned __int64)(v12[0] + 8LL) < v12[0] || v12[0] + 8LL > MmUserProbeAddress )
      v6 = (__int64 *)MmUserProbeAddress;
    v7 = *v6;
    v16 = *v6;
  }
  else
  {
LABEL_18:
    v7 = 0LL;
  }
  if ( v4 != v17 && v4 != v18 )
  {
    if ( *((_QWORD *)v4 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v4 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v14);
  }
  return v7;
}

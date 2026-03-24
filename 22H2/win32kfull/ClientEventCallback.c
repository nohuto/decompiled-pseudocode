/*
 * XREFs of ClientEventCallback @ 0x1C02282E8
 * Callers:
 *     xxxEventWndProc @ 0x1C0023B00 (xxxEventWndProc.c)
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
 */

unsigned __int8 *__fastcall ClientEventCallback(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebx
  unsigned __int8 *result; // rax
  unsigned __int8 *v6; // rdi
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rbx
  char v10; // [rsp+30h] [rbp-298h] BYREF
  _BYTE v11[3]; // [rsp+31h] [rbp-297h] BYREF
  _DWORD v12[3]; // [rsp+34h] [rbp-294h] BYREF
  unsigned __int8 *v13; // [rsp+40h] [rbp-288h]
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-280h] BYREF
  __int128 v15; // [rsp+50h] [rbp-278h] BYREF
  __int64 v16; // [rsp+60h] [rbp-268h]
  __int64 v17; // [rsp+68h] [rbp-260h]
  _OWORD v18[3]; // [rsp+78h] [rbp-250h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-220h]
  unsigned __int8 v20[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 6) + 8;
  memset(v18, 0, sizeof(v18));
  v19 = 0LL;
  memset(v12, 0, sizeof(v12));
  result = AllocCallbackMessage(56, 1u, v4, v20, 1, 0x200uLL);
  v6 = result;
  v13 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v15 = 0LL;
    v16 = 0LL;
    if ( v6 != (unsigned __int8 *)v18 && v6 != v20 )
      PushW32ThreadLock((__int64)v6, &v15, (__int64)Win32FreePool);
    *((_QWORD *)v6 + 5) = a1;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v6, a2, v4, (void **)v6 + 6) < 0 )
      goto LABEL_15;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v11);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
    EtwTraceBeginCallback(65LL);
    *((_QWORD *)v6 + 2) = 0LL;
    v7 = KeUserModeCallback(65LL, v6, *(unsigned int *)v6, &v12[1], v12);
    EtwTraceEndCallback(65LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v11);
    if ( v7 < 0 )
      goto LABEL_15;
    if ( v12[0] == 24 )
    {
      v8 = *(__int64 **)&v12[1];
      if ( (unsigned __int64)(*(_QWORD *)&v12[1] + 8LL) < *(_QWORD *)&v12[1]
        || *(_QWORD *)&v12[1] + 8LL > MmUserProbeAddress )
      {
        v8 = (__int64 *)MmUserProbeAddress;
      }
      v9 = *v8;
      v17 = *v8;
    }
    else
    {
LABEL_15:
      LODWORD(v9) = 0;
    }
    if ( v6 != (unsigned __int8 *)v18 && v6 != v20 )
    {
      if ( *((_QWORD *)v6 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v15);
    }
    return (unsigned __int8 *)(unsigned int)v9;
  }
  return result;
}

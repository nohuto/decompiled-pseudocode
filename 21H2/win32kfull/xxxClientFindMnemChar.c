/*
 * XREFs of xxxClientFindMnemChar @ 0x1C02328B0
 * Callers:
 *     xxxMNFindChar @ 0x1C02508D8 (xxxMNFindChar.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0021A58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021AFC (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

unsigned __int8 *__fastcall xxxClientFindMnemChar(unsigned __int16 *a1, __int16 a2)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v5; // rdi
  int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // rbx
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
  result = AllocCallbackMessage(72, 1u, a1[1], v18, 1, 0x200uLL);
  v5 = result;
  v12[1] = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v14 = 0LL;
    v15 = 0LL;
    if ( v5 != v17 && v5 != v18 )
      PushW32ThreadLock((__int64)v5, &v14, (__int64)Win32FreePool);
    *((_WORD *)v5 + 28) = a2;
    *((_DWORD *)v5 + 15) = 1;
    *((_DWORD *)v5 + 16) = 1;
    *((_WORD *)v5 + 20) = *a1;
    *((_WORD *)v5 + 21) = a1[1];
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v5, *((_QWORD *)a1 + 1), (unsigned int)*a1 + 2, (void **)v5 + 6) < 0 )
      goto LABEL_15;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v10);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
    EtwTraceBeginCallback(66LL);
    *((_QWORD *)v5 + 2) = 0LL;
    v6 = KeUserModeCallback(66LL, v5, *(unsigned int *)v5, v12, &v11);
    EtwTraceEndCallback(66LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v10);
    if ( v6 < 0 )
      goto LABEL_15;
    if ( v11 == 24 )
    {
      v7 = (__int64 *)v12[0];
      if ( (unsigned __int64)(v12[0] + 8LL) < v12[0] || v12[0] + 8LL > MmUserProbeAddress )
        v7 = (__int64 *)MmUserProbeAddress;
      v8 = *v7;
      v16 = *v7;
    }
    else
    {
LABEL_15:
      LODWORD(v8) = 0;
    }
    if ( v5 != v17 && v5 != v18 )
    {
      if ( *((_QWORD *)v5 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v14);
    }
    return (unsigned __int8 *)(unsigned int)v8;
  }
  return result;
}

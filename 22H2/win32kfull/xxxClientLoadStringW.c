/*
 * XREFs of xxxClientLoadStringW @ 0x1C002425C
 * Callers:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0024610 (-xxxLoadSomeStrings@@YAXXZ.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021A5C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00232F8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00233D0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C002452C (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
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

__int64 __fastcall xxxClientLoadStringW(int a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r14d
  unsigned __int8 *v7; // rdi
  int v8; // ebx
  __int64 *v9; // rcx
  __int64 v10; // r10
  ULONG64 v11; // rcx
  __int64 v12; // xmm0_8
  __int64 v13; // rdx
  unsigned int v14; // ebx
  char v16; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v17[3]; // [rsp+31h] [rbp-2E7h] BYREF
  int v18; // [rsp+34h] [rbp-2E4h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-2E0h] BYREF
  _DWORD v20[2]; // [rsp+48h] [rbp-2D0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-2C8h]
  __int64 v22; // [rsp+58h] [rbp-2C0h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-2B8h] BYREF
  __int128 v24; // [rsp+68h] [rbp-2B0h] BYREF
  __int64 v25; // [rsp+78h] [rbp-2A0h]
  __int128 v26; // [rsp+80h] [rbp-298h] BYREF
  __int64 v27; // [rsp+90h] [rbp-288h]
  unsigned __int8 v28[64]; // [rsp+B0h] [rbp-268h] BYREF
  unsigned __int8 v29[512]; // [rsp+F0h] [rbp-228h] BYREF

  memset(v28, 0, sizeof(v28));
  v19[0] = 0LL;
  v18 = 0;
  v6 = 2 * a3;
  v21 = a2;
  v20[0] = 0;
  v20[1] = 2;
  v7 = AllocCallbackMessage(64, 1u, 2 * a3, v29, 0, 0x200uLL);
  v19[1] = v7;
  if ( !v7 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v26 = 0LL;
  v27 = 0LL;
  if ( v7 != v28 && v7 != v29 )
    PushW32ThreadLock(v7, &v26, Win32FreePool);
  *((_DWORD *)v7 + 10) = a1;
  *((_DWORD *)v7 + 11) = a3;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v7, v6, (void **)v7 + 6) < 0 )
    goto LABEL_24;
  *((_DWORD *)v7 + 14) = v6;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v17);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  EtwTraceBeginCallback(98LL);
  *((_QWORD *)v7 + 2) = 0LL;
  v8 = KeUserModeCallback(98LL, v7, *(unsigned int *)v7, v19, &v18);
  EtwTraceEndCallback(98LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v17);
  if ( v8 < 0 || v18 != 24 )
    goto LABEL_24;
  v9 = (__int64 *)v19[0];
  if ( (unsigned __int64)(v19[0] + 8LL) < v19[0] || v19[0] + 8LL > MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  v10 = *v9;
  v22 = *v9;
  v11 = v19[0];
  if ( (unsigned __int64)(v19[0] + 24LL) < v19[0] || v19[0] + 24LL > MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v12 = *(_QWORD *)(v11 + 16);
  v24 = *(_OWORD *)v11;
  v25 = v12;
  v13 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v13 && (*(_DWORD *)(v13 + 84) & 1) != 0 && *(_DWORD **)(v13 + 96) == v20 )
  {
LABEL_24:
    v14 = 0;
  }
  else
  {
    v14 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v24, v10, 0, 0);
    v22 = v14;
    CopyOutputString((struct _CALLBACKSTATUS *)&v24, (struct _LARGE_STRING *)v20, a3, 0);
  }
  if ( v7 != v28 && v7 != v29 )
  {
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v26);
  }
  return v14;
}

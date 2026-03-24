/*
 * XREFs of xxxClientLoadMenu @ 0x1C0023740
 * Callers:
 *     xxxLoadSysMenu @ 0x1C0042D94 (xxxLoadSysMenu.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0244778 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00219B8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021A5C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     HMValidateHandleNoRip @ 0x1C0023BCC (HMValidateHandleNoRip.c)
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

unsigned __int8 *__fastcall xxxClientLoadMenu(__int64 a1, unsigned __int16 *a2)
{
  __int64 v4; // r9
  unsigned __int8 *v5; // rdi
  unsigned __int16 v6; // ax
  int v7; // ebx
  __int64 *v8; // rcx
  ULONG64 v9; // rdx
  __int64 v10; // rbx
  unsigned __int8 *result; // rax
  char v12; // [rsp+30h] [rbp-2A8h] BYREF
  _BYTE v13[3]; // [rsp+31h] [rbp-2A7h] BYREF
  int v14; // [rsp+34h] [rbp-2A4h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-2A0h] BYREF
  unsigned __int8 *v16; // [rsp+40h] [rbp-298h]
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-290h] BYREF
  __int128 v18; // [rsp+50h] [rbp-288h] BYREF
  __int64 v19; // [rsp+60h] [rbp-278h]
  __int64 v20; // [rsp+68h] [rbp-270h]
  _DWORD v21[16]; // [rsp+80h] [rbp-258h] BYREF
  unsigned __int8 v22[512]; // [rsp+C0h] [rbp-218h] BYREF

  memset(v21, 0, sizeof(v21));
  v15 = 0LL;
  v14 = 0;
  v4 = a2[1];
  if ( (_WORD)v4 )
  {
    result = AllocCallbackMessage(64, (_WORD)v4 != 0, v4 & -(__int64)((_WORD)v4 != 0), v22, 1, 0x200uLL);
    v5 = result;
    v16 = result;
    if ( !result )
      return result;
  }
  else
  {
    v5 = (unsigned __int8 *)v21;
    v16 = (unsigned __int8 *)v21;
    v21[0] = 64;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v18 = 0LL;
  v19 = 0LL;
  if ( v5 != (unsigned __int8 *)v21 && v5 != v22 )
    PushW32ThreadLock(v5, &v18, Win32FreePool);
  *((_QWORD *)v5 + 5) = a1;
  *((_WORD *)v5 + 24) = *a2;
  v6 = a2[1];
  *((_WORD *)v5 + 25) = v6;
  if ( v6 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v5, *((_QWORD *)a2 + 1), (unsigned int)*a2 + 2, (void **)v5 + 7) < 0 )
      goto LABEL_20;
  }
  else
  {
    *((_QWORD *)v5 + 7) = *((_QWORD *)a2 + 1);
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  EtwTraceBeginCallback(76LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v7 = KeUserModeCallback(76LL, v5, *(unsigned int *)v5, &v15, &v14);
  EtwTraceEndCallback(76LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13);
  if ( v7 >= 0 && v14 == 24 )
  {
    v8 = (__int64 *)v15;
    v9 = v15 + 8;
    if ( v15 + 8 < v15 || v9 > MmUserProbeAddress )
      v8 = (__int64 *)MmUserProbeAddress;
    v20 = *v8;
    LOBYTE(v9) = 2;
    v10 = HMValidateHandleNoRip(v20, v9);
    goto LABEL_13;
  }
LABEL_20:
  v10 = 0LL;
LABEL_13:
  if ( v5 != (unsigned __int8 *)v21 && v5 != v22 )
  {
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v18);
  }
  return (unsigned __int8 *)v10;
}

/*
 * XREFs of xxxClientLoadImage @ 0x1C0022860
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0024700 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0024BDC (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0025790 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DA898 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
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

unsigned __int8 *__fastcall xxxClientLoadImage(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v7; // r15d
  __int64 v9; // r8
  unsigned __int8 *v10; // rdi
  unsigned __int16 v11; // ax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 *v14; // rbx
  __int64 v15; // rbx
  unsigned __int8 *result; // rax
  char v17; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v18[3]; // [rsp+31h] [rbp-2E7h] BYREF
  int v19; // [rsp+34h] [rbp-2E4h] BYREF
  __int64 v20; // [rsp+38h] [rbp-2E0h]
  void *v21; // [rsp+40h] [rbp-2D8h]
  unsigned __int64 v22; // [rsp+48h] [rbp-2D0h] BYREF
  unsigned __int8 *v23; // [rsp+50h] [rbp-2C8h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-2C0h] BYREF
  __int128 v25; // [rsp+60h] [rbp-2B8h] BYREF
  __int64 v26; // [rsp+70h] [rbp-2A8h]
  __int64 v27; // [rsp+78h] [rbp-2A0h]
  _DWORD v28[24]; // [rsp+90h] [rbp-288h] BYREF
  unsigned __int8 v29[512]; // [rsp+F0h] [rbp-228h] BYREF

  v7 = a3;
  v20 = 0LL;
  memset(v28, 0, sizeof(v28));
  v22 = 0LL;
  v19 = 0;
  v9 = a1[1];
  v21 = 0LL;
  if ( (_WORD)v9 )
  {
    result = AllocCallbackMessage(96, (_WORD)v9 != 0, v9 & -(__int64)((_WORD)v9 != 0), v29, 1, 0x200uLL);
    v10 = result;
    v23 = result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = (unsigned __int8 *)v28;
    v23 = (unsigned __int8 *)v28;
    memset(&v28[1], 0, 0x5CuLL);
    v28[0] = 96;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v25 = 0LL;
  v26 = 0LL;
  if ( v10 != (unsigned __int8 *)v28 && v10 != v29 )
    PushW32ThreadLock(v10, &v25, Win32FreePool);
  *((_DWORD *)v10 + 10) = v20;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              (unsigned __int64)v21,
              (unsigned int)(unsigned __int16)v20 + 2,
              (void **)v10 + 6) < 0 )
    goto LABEL_22;
  *((_WORD *)v10 + 28) = *a1;
  v11 = a1[1];
  *((_WORD *)v10 + 29) = v11;
  if ( v11 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v10,
                *((_QWORD *)a1 + 1),
                (unsigned int)*a1 + 2,
                (void **)v10 + 8) < 0 )
      goto LABEL_22;
  }
  else
  {
    *((_QWORD *)v10 + 8) = *((_QWORD *)a1 + 1);
  }
  *((_DWORD *)v10 + 18) = v7;
  *((_DWORD *)v10 + 19) = a4;
  *((_DWORD *)v10 + 20) = a5;
  *((_DWORD *)v10 + 21) = a6;
  *((_DWORD *)v10 + 22) = 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  EtwTraceBeginCallback(74LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v12 = KeUserModeCallback(74LL, v10, *(unsigned int *)v10, &v22, &v19);
  EtwTraceEndCallback(74LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v18);
  if ( v12 >= 0 && v19 == 24 )
  {
    v14 = (__int64 *)v22;
    if ( v22 + 8 < v22 || v22 + 8 > MmUserProbeAddress )
      v14 = (__int64 *)MmUserProbeAddress;
    v15 = *v14;
    v27 = v15;
    if ( v15 )
    {
      LOBYTE(v13) = 3;
      v15 = HMValidateHandleNoRip(v15, v13);
    }
    goto LABEL_15;
  }
LABEL_22:
  v15 = 0LL;
LABEL_15:
  if ( v10 != (unsigned __int8 *)v28 && v10 != v29 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v25);
  }
  return (unsigned __int8 *)v15;
}

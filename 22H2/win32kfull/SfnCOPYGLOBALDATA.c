/*
 * XREFs of SfnCOPYGLOBALDATA @ 0x1C02286E0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
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
 */

unsigned __int8 *__fastcall SfnCOPYGLOBALDATA(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rdi
  char v21; // [rsp+30h] [rbp-338h] BYREF
  _BYTE v22[3]; // [rsp+31h] [rbp-337h] BYREF
  _DWORD v23[5]; // [rsp+34h] [rbp-334h] BYREF
  unsigned __int8 *v24; // [rsp+48h] [rbp-320h]
  unsigned __int64 v25; // [rsp+50h] [rbp-318h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-308h] BYREF
  __int128 v27; // [rsp+68h] [rbp-300h] BYREF
  __int64 v28; // [rsp+78h] [rbp-2F0h]
  __int128 v29; // [rsp+80h] [rbp-2E8h]
  __int64 v30; // [rsp+90h] [rbp-2D8h]
  __int128 v31; // [rsp+98h] [rbp-2D0h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-2C0h]
  __int64 v33; // [rsp+B0h] [rbp-2B8h]
  __int128 v34; // [rsp+D0h] [rbp-298h]
  _OWORD v35[3]; // [rsp+E0h] [rbp-288h] BYREF
  __int64 v36; // [rsp+110h] [rbp-258h]
  unsigned __int8 v37[512]; // [rsp+120h] [rbp-248h] BYREF

  memset(v35, 0, sizeof(v35));
  v36 = 0LL;
  v25 = 0LL;
  v23[0] = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v8 = ThreadWin32Thread;
  if ( a1 )
    v9 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v9 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v37, 1, 0x200uLL);
  v11 = result;
  v24 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v31 = 0LL;
    v32 = 0LL;
    if ( v11 != (unsigned __int8 *)v35 && v11 != v37 )
      PushW32ThreadLock((__int64)v11, &v31, (__int64)Win32FreePool);
    if ( !a4 )
      goto LABEL_27;
    *((_DWORD *)v11 + 10) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, a4, a3, (void **)v11 + 6) < 0 )
      goto LABEL_27;
    v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v27 = *(_QWORD *)(v12 + 416);
    *(_QWORD *)(v12 + 416) = &v27;
    *((_QWORD *)&v27 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    v13 = *(_QWORD *)(v8 + 480);
    v34 = *(_OWORD *)(v13 + 64);
    v29 = v34;
    v30 = *(_QWORD *)(v13 + 80);
    *(_QWORD *)(v13 + 72) = v9;
    if ( a1 )
      v14 = *a1;
    else
      v14 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v8 + 480) + 64LL) = v14;
    if ( a1 )
      v15 = *(_QWORD *)(a1[5] + 224);
    else
      v15 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v8 + 480) + 80LL) = v15;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v22);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v11 + 2) = 0LL;
    v16 = KeUserModeCallback(1LL, v11, *(unsigned int *)v11, &v25, v23);
    EtwTraceEndCallback(1LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v22);
    ThreadUnlock1(v17);
    v18 = *(_QWORD *)(v8 + 480);
    *(_OWORD *)(v18 + 64) = v34;
    *(_QWORD *)(v18 + 80) = v30;
    if ( v16 < 0 )
      goto LABEL_27;
    if ( v23[0] == 24 )
    {
      v19 = (__int64 *)v25;
      if ( v25 + 8 < v25 || v25 + 8 > MmUserProbeAddress )
        v19 = (__int64 *)MmUserProbeAddress;
      v20 = *v19;
      v33 = *v19;
    }
    else
    {
LABEL_27:
      v20 = 0LL;
    }
    if ( v11 != (unsigned __int8 *)v35 && v11 != v37 )
    {
      if ( *((_QWORD *)v11 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v31);
    }
    return (unsigned __int8 *)v20;
  }
  return result;
}

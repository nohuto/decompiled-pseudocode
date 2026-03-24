/*
 * XREFs of SfnTOUCHHITTESTING @ 0x1C0230970
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0021A58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021AFC (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
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

unsigned __int8 *__fastcall SfnTOUCHHITTESTING(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rdi
  char v24; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v25[3]; // [rsp+31h] [rbp-347h] BYREF
  _DWORD v26[5]; // [rsp+34h] [rbp-344h] BYREF
  unsigned __int8 *v27; // [rsp+48h] [rbp-330h]
  unsigned __int64 v28; // [rsp+50h] [rbp-328h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-318h] BYREF
  __int128 v30; // [rsp+68h] [rbp-310h] BYREF
  __int64 v31; // [rsp+78h] [rbp-300h]
  __int128 v32; // [rsp+80h] [rbp-2F8h]
  __int64 v33; // [rsp+90h] [rbp-2E8h]
  __int128 v34; // [rsp+98h] [rbp-2E0h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-2D0h]
  __int64 v36; // [rsp+B0h] [rbp-2C8h]
  __int128 v37; // [rsp+D0h] [rbp-2A8h]
  unsigned __int8 v38[88]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v39[512]; // [rsp+140h] [rbp-238h] BYREF

  memset(v38, 0, sizeof(v38));
  v28 = 0LL;
  v26[0] = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  result = AllocCallbackMessage(88, 1u, 48LL, v39, 1, 0x200uLL);
  v14 = result;
  v27 = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v34 = 0LL;
    v35 = 0LL;
    if ( v14 != v38 && v14 != v39 )
      PushW32ThreadLock((__int64)v14, &v34, (__int64)Win32FreePool);
    *((_QWORD *)v14 + 5) = v12;
    *((_DWORD *)v14 + 12) = a2;
    *((_QWORD *)v14 + 7) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v14, a4, 0x30u, (void **)v14 + 8) < 0 )
      goto LABEL_26;
    *((_QWORD *)v14 + 9) = a5;
    *((_QWORD *)v14 + 10) = a6;
    v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v30 = *(_QWORD *)(v15 + 416);
    *(_QWORD *)(v15 + 416) = &v30;
    *((_QWORD *)&v30 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    v16 = *(_QWORD *)(v11 + 480);
    v37 = *(_OWORD *)(v16 + 64);
    v32 = v37;
    v33 = *(_QWORD *)(v16 + 80);
    *(_QWORD *)(v16 + 72) = v12;
    if ( a1 )
      v17 = *a1;
    else
      v17 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v17;
    if ( a1 )
      v18 = *(_QWORD *)(a1[5] + 224);
    else
      v18 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v18;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v25);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v24);
    EtwTraceBeginCallback(115LL);
    *((_QWORD *)v14 + 2) = 0LL;
    v19 = KeUserModeCallback(115LL, v14, *(unsigned int *)v14, &v28, v26);
    EtwTraceEndCallback(115LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v24);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v25);
    ThreadUnlock1(v20);
    v21 = *(_QWORD *)(v11 + 480);
    *(_OWORD *)(v21 + 64) = v37;
    *(_QWORD *)(v21 + 80) = v33;
    if ( v19 < 0 )
      goto LABEL_26;
    if ( v26[0] == 24 )
    {
      v22 = (__int64 *)v28;
      if ( v28 + 8 < v28 || v28 + 8 > MmUserProbeAddress )
        v22 = (__int64 *)MmUserProbeAddress;
      v23 = *v22;
      v36 = *v22;
    }
    else
    {
LABEL_26:
      v23 = 0LL;
    }
    if ( v14 != v38 && v14 != v39 )
    {
      if ( *((_QWORD *)v14 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v14 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v34);
    }
    return (unsigned __int8 *)v23;
  }
  return result;
}

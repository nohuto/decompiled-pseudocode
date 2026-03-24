/*
 * XREFs of SfnPOPTINLPUINT @ 0x1C022F7C0
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

unsigned __int8 *__fastcall SfnPOPTINLPUINT(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  unsigned __int8 *result; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdi
  char v26; // [rsp+30h] [rbp-368h] BYREF
  _BYTE v27[3]; // [rsp+31h] [rbp-367h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-364h]
  int v29; // [rsp+38h] [rbp-360h] BYREF
  unsigned __int8 *v30; // [rsp+40h] [rbp-358h]
  unsigned __int64 v31; // [rsp+58h] [rbp-340h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-330h] BYREF
  __int128 v33; // [rsp+70h] [rbp-328h] BYREF
  __int64 v34; // [rsp+80h] [rbp-318h]
  __int128 v35; // [rsp+88h] [rbp-310h]
  __int64 v36; // [rsp+98h] [rbp-300h]
  __int128 v37; // [rsp+A0h] [rbp-2F8h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-2E8h]
  __int64 v39; // [rsp+B8h] [rbp-2E0h]
  __int128 v40; // [rsp+D8h] [rbp-2C0h]
  _DWORD v41[24]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v42[512]; // [rsp+150h] [rbp-248h] BYREF

  memset(v41, 0, 0x58uLL);
  v10 = (unsigned __int8 *)v41;
  v31 = 0LL;
  v29 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  if ( a4 )
  {
    v14 = 1;
    v15 = 4LL * (unsigned int)a3;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_36;
  }
  else
  {
    LODWORD(v15) = 0;
    v14 = 0;
  }
  v28 = v15;
  if ( v14 )
  {
    result = AllocCallbackMessage(88, v14, (unsigned int)v15, v42, 1, 0x200uLL);
    v10 = result;
    v30 = result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = (unsigned __int8 *)v41;
    v30 = (unsigned __int8 *)v41;
    memset(&v41[1], 0, 0x54uLL);
    v41[0] = 88;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v37 = 0LL;
  v38 = 0LL;
  if ( v10 != (unsigned __int8 *)v41 && v10 != v42 )
    PushW32ThreadLock((__int64)v10, &v37, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v13;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = a3;
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v10, a4, v28, (void **)v10 + 8) < 0 )
      goto LABEL_36;
  }
  else
  {
    *((_QWORD *)v10 + 8) = 0LL;
  }
  *((_QWORD *)v10 + 9) = a5;
  *((_QWORD *)v10 + 10) = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v33 = *(_QWORD *)(v17 + 416);
  *(_QWORD *)(v17 + 416) = &v33;
  *((_QWORD *)&v33 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v18 = *(_QWORD *)(v12 + 480);
  v40 = *(_OWORD *)(v18 + 64);
  v35 = v40;
  v36 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v13;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v27);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v21 = KeUserModeCallback(36LL, v10, *(unsigned int *)v10, &v31, &v29);
  EtwTraceEndCallback(36LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v27);
  ThreadUnlock1(v22);
  v23 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v23 + 64) = v40;
  *(_QWORD *)(v23 + 80) = v36;
  if ( v21 >= 0 && v29 == 24 )
  {
    v24 = (__int64 *)v31;
    if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v39 = *v24;
    goto LABEL_37;
  }
LABEL_36:
  v25 = 0LL;
LABEL_37:
  if ( v10 != (unsigned __int8 *)v41 && v10 != v42 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v37);
  }
  return (unsigned __int8 *)v25;
}

/*
 * XREFs of SfnCOPYDATA @ 0x1C0023E20
 * Callers:
 *     xxxSendShutdownData @ 0x1C02338B8 (xxxSendShutdownData.c)
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

__int64 __fastcall SfnCOPYDATA(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r15
  __int64 v11; // rsi
  unsigned int v12; // r12d
  unsigned __int8 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rdi
  char v24; // [rsp+30h] [rbp-368h] BYREF
  _BYTE v25[3]; // [rsp+31h] [rbp-367h] BYREF
  int v26; // [rsp+34h] [rbp-364h] BYREF
  unsigned __int8 *v27; // [rsp+38h] [rbp-360h]
  int v28; // [rsp+40h] [rbp-358h]
  unsigned __int64 v29; // [rsp+58h] [rbp-340h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-330h] BYREF
  __int128 v31; // [rsp+70h] [rbp-328h] BYREF
  __int64 v32; // [rsp+80h] [rbp-318h]
  __int128 v33; // [rsp+88h] [rbp-310h]
  __int64 v34; // [rsp+98h] [rbp-300h]
  __int128 v35; // [rsp+A0h] [rbp-2F8h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-2E8h]
  __int64 v37; // [rsp+B8h] [rbp-2E0h]
  __int128 v38; // [rsp+D8h] [rbp-2C0h]
  _DWORD v39[28]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v40[512]; // [rsp+160h] [rbp-238h] BYREF

  v28 = a2;
  memset(v39, 0, sizeof(v39));
  v29 = 0LL;
  v26 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v10 = ThreadWin32Thread;
  if ( a1 )
    v11 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v11 = 0LL;
  if ( a4 )
  {
    v12 = *(_DWORD *)(a4 + 8);
    v13 = AllocCallbackMessage(112, 1u, v12, v40, 1, 0x200uLL);
    v27 = v13;
    if ( !v13 )
      return 0LL;
  }
  else
  {
    v12 = 0;
    v13 = (unsigned __int8 *)v39;
    v27 = (unsigned __int8 *)v39;
    memset(&v39[1], 0, 0x6CuLL);
    v39[0] = 112;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v35 = 0LL;
  v36 = 0LL;
  if ( v13 != (unsigned __int8 *)v39 && v13 != v40 )
    PushW32ThreadLock(v13, &v35, Win32FreePool);
  *((_QWORD *)v13 + 5) = v11;
  *((_DWORD *)v13 + 12) = v28;
  *((_QWORD *)v13 + 7) = a3;
  if ( a4 )
  {
    *((_DWORD *)v13 + 16) = 1;
    *(_DWORD *)(a4 + 12) = 0;
    *(_OWORD *)(v13 + 72) = *(_OWORD *)a4;
    *((_QWORD *)v13 + 11) = *(_QWORD *)(a4 + 16);
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v13, *(_QWORD *)(a4 + 16), v12, (void **)v13 + 11) < 0 )
      goto LABEL_32;
  }
  else
  {
    *((_DWORD *)v13 + 16) = 0;
  }
  *((_QWORD *)v13 + 12) = a5;
  *((_QWORD *)v13 + 13) = a6;
  v14 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v31 = *(_QWORD *)(v14 + 416);
  *(_QWORD *)(v14 + 416) = &v31;
  *((_QWORD *)&v31 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v15 = *(_QWORD *)(v10 + 480);
  v38 = *(_OWORD *)(v15 + 64);
  v33 = v38;
  v34 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v11;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 480) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v10 + 480) + 80LL) = v17;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v25);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v24);
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v18 = KeUserModeCallback(0LL, v13, *(unsigned int *)v13, &v29, &v26);
  EtwTraceEndCallback(0LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v24);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v25);
  ThreadUnlock1(v19);
  v20 = *(_QWORD *)(v10 + 480);
  *(_OWORD *)(v20 + 64) = v38;
  *(_QWORD *)(v20 + 80) = v34;
  if ( v18 >= 0 && v26 == 24 )
  {
    v21 = (__int64 *)v29;
    if ( v29 + 8 < v29 || v29 + 8 > MmUserProbeAddress )
      v21 = (__int64 *)MmUserProbeAddress;
    v22 = *v21;
    v37 = *v21;
    goto LABEL_25;
  }
LABEL_32:
  v22 = 0LL;
LABEL_25:
  if ( v13 != (unsigned __int8 *)v39 && v13 != v40 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v35);
  }
  return v22;
}

/*
 * XREFs of SfnPOUTLPINT @ 0x1C022F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00219B8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021A5C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00233D0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

unsigned __int8 *__fastcall SfnPOUTLPINT(
        __int64 *a1,
        int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  SIZE_T v16; // r13
  unsigned __int8 *result; // rax
  unsigned int v18; // r8d
  void *v19; // r12
  int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // rdi
  ULONG64 v30; // rcx
  char v31; // [rsp+30h] [rbp-3A8h] BYREF
  _BYTE v32[3]; // [rsp+31h] [rbp-3A7h] BYREF
  unsigned int v33; // [rsp+34h] [rbp-3A4h]
  int v34; // [rsp+38h] [rbp-3A0h] BYREF
  unsigned __int8 *v35; // [rsp+40h] [rbp-398h]
  unsigned __int64 v36; // [rsp+60h] [rbp-378h] BYREF
  void *v37[2]; // [rsp+68h] [rbp-370h]
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-350h] BYREF
  __int128 v39; // [rsp+90h] [rbp-348h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-338h]
  __int128 v41; // [rsp+A8h] [rbp-330h]
  __int64 v42; // [rsp+B8h] [rbp-320h]
  __int128 v43; // [rsp+C0h] [rbp-318h]
  volatile void *Address; // [rsp+D0h] [rbp-308h]
  __int128 v45; // [rsp+D8h] [rbp-300h] BYREF
  __int64 v46; // [rsp+E8h] [rbp-2F0h]
  __int64 v47; // [rsp+F0h] [rbp-2E8h]
  __int128 v48; // [rsp+118h] [rbp-2C0h]
  volatile void *v49; // [rsp+128h] [rbp-2B0h]
  unsigned __int8 v50[96]; // [rsp+130h] [rbp-2A8h] BYREF
  unsigned __int8 v51[512]; // [rsp+190h] [rbp-248h] BYREF

  v37[0] = a4;
  memset(v50, 0, sizeof(v50));
  v11 = v50;
  v36 = 0LL;
  v34 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v15 = 4LL * (unsigned int)a3;
  if ( v15 > 0xFFFFFFFF )
    goto LABEL_38;
  v33 = 4 * a3;
  v16 = (unsigned int)v15;
  result = AllocCallbackMessage(96, 1u, (unsigned int)v15, v51, 0, 0x200uLL);
  v11 = result;
  v35 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v45 = 0LL;
  v46 = 0LL;
  if ( v11 != v50 && v11 != v51 )
    PushW32ThreadLock((__int64)v11, &v45, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v14;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    v18 = v33;
    *((_DWORD *)v11 + 22) = v33;
    v19 = v37[0];
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (unsigned __int64)v37[0], v18, (void **)v11 + 10) < 0 )
      goto LABEL_38;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v33, (void **)v11 + 10) < 0 )
      goto LABEL_38;
    *((_DWORD *)v11 + 22) = v20;
    v19 = v37[0];
  }
  v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v39 = *(_QWORD *)(v21 + 416);
  *(_QWORD *)(v21 + 416) = &v39;
  *((_QWORD *)&v39 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v22 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)v37 = *(_OWORD *)(v22 + 64);
  v41 = *(_OWORD *)v37;
  v42 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v14;
  if ( a1 )
    v23 = *a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v32);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v25 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v36, &v34);
  EtwTraceEndCallback(37LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v31);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v32);
  ThreadUnlock1(v26);
  v27 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v27 + 64) = *(_OWORD *)v37;
  *(_QWORD *)(v27 + 80) = v42;
  if ( v25 >= 0 && v34 == 24 )
  {
    v28 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
      v28 = (__int64 *)MmUserProbeAddress;
    v29 = *v28;
    v47 = *v28;
    if ( v33 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v30 = v36;
      if ( v36 + 24 < v36 || v36 + 24 > MmUserProbeAddress )
        v30 = MmUserProbeAddress;
      v43 = *(_OWORD *)v30;
      Address = *(volatile void **)(v30 + 16);
      v48 = v43;
      v49 = Address;
      ProbeForRead(Address, v16, 4u);
      memmove(v19, (const void *)Address, v16);
    }
    goto LABEL_39;
  }
LABEL_38:
  v29 = 0LL;
LABEL_39:
  if ( v11 != v50 && v11 != v51 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v45);
  }
  return (unsigned __int8 *)v29;
}

/*
 * XREFs of SfnPOUTLPINT @ 0x1C0229B30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C006E568 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00803F0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
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
  __int64 v13; // r15
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  unsigned __int8 *result; // rax
  void *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rsi
  ULONG64 v28; // rcx
  _BYTE v29[4]; // [rsp+30h] [rbp-3A8h] BYREF
  int v30; // [rsp+34h] [rbp-3A4h] BYREF
  unsigned __int8 *v31; // [rsp+38h] [rbp-3A0h]
  unsigned __int64 v32; // [rsp+58h] [rbp-380h] BYREF
  void *v33[2]; // [rsp+60h] [rbp-378h]
  SIZE_T Length; // [rsp+80h] [rbp-358h]
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-350h] BYREF
  __int128 v36; // [rsp+90h] [rbp-348h]
  __int64 v37; // [rsp+A0h] [rbp-338h]
  __int128 v38; // [rsp+A8h] [rbp-330h]
  volatile void *Address; // [rsp+B8h] [rbp-320h]
  __int128 v40; // [rsp+C0h] [rbp-318h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-308h]
  __int64 v42; // [rsp+D8h] [rbp-300h]
  __int128 v43; // [rsp+100h] [rbp-2D8h] BYREF
  __int64 v44; // [rsp+110h] [rbp-2C8h]
  __int128 v45; // [rsp+118h] [rbp-2C0h]
  volatile void *v46; // [rsp+128h] [rbp-2B0h]
  unsigned __int8 v47[96]; // [rsp+130h] [rbp-2A8h] BYREF
  unsigned __int8 v48[512]; // [rsp+190h] [rbp-248h] BYREF

  v33[0] = a4;
  memset(v47, 0, sizeof(v47));
  v11 = v47;
  v32 = 0LL;
  v30 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v15 = 4LL * (unsigned int)a3;
  if ( v15 > 0xFFFFFFFF )
    goto LABEL_33;
  Length = (unsigned int)v15;
  result = AllocCallbackMessage(96, 1u, (unsigned int)v15, v48, 0, 0x200uLL);
  v11 = result;
  v31 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v40 = 0LL;
  v41 = 0LL;
  if ( v11 != v47 && v11 != v48 )
    PushW32ThreadLock((__int64)v11, &v40, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v14;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    *((_DWORD *)v11 + 22) = v15;
    v17 = v33[0];
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (unsigned __int64)v33[0], v15, (void **)v11 + 10) < 0 )
      goto LABEL_33;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v15, (void **)v11 + 10) < 0 )
      goto LABEL_33;
    *((_DWORD *)v11 + 22) = v15;
    v17 = v33[0];
  }
  ThreadLock((__int64)a1, (__int64 *)&v43);
  v18 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)v33 = *(_OWORD *)(v18 + 64);
  v36 = *(_OWORD *)v33;
  v37 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v14;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v20;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v29);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v21 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v32, &v30);
  EtwTraceEndCallback(37LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v29);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v25 + 64) = *(_OWORD *)v33;
  *(_QWORD *)(v25 + 80) = v37;
  if ( v21 >= 0 && v30 == 24 )
  {
    v26 = (__int64 *)v32;
    if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v42 = *v26;
    if ( (_DWORD)v15 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v28 = v32;
      if ( v32 + 24 < v32 || v32 + 24 > MmUserProbeAddress )
        v28 = MmUserProbeAddress;
      v38 = *(_OWORD *)v28;
      Address = *(volatile void **)(v28 + 16);
      v45 = v38;
      v46 = Address;
      ProbeForRead(Address, Length, 4u);
      memmove(v17, (const void *)Address, Length);
    }
    goto LABEL_34;
  }
LABEL_33:
  v27 = 0LL;
LABEL_34:
  if ( v11 != v47 && v11 != v48 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v40);
  }
  return (unsigned __int8 *)v27;
}

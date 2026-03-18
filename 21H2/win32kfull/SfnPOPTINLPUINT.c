/*
 * XREFs of SfnPOPTINLPUINT @ 0x1C02296F0
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
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

unsigned __int8 *__fastcall SfnPOPTINLPUINT(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 *v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r15
  __int64 v12; // r14
  unsigned int v13; // edx
  unsigned __int64 v14; // rsi
  unsigned __int8 *result; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdi
  _BYTE v26[4]; // [rsp+30h] [rbp-368h] BYREF
  int v27; // [rsp+34h] [rbp-364h] BYREF
  unsigned __int8 *v28; // [rsp+38h] [rbp-360h]
  unsigned int v29; // [rsp+40h] [rbp-358h]
  unsigned __int64 v30; // [rsp+58h] [rbp-340h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-330h] BYREF
  __int128 v32; // [rsp+70h] [rbp-328h]
  __int64 v33; // [rsp+80h] [rbp-318h]
  __int128 v34; // [rsp+88h] [rbp-310h] BYREF
  __int64 v35; // [rsp+98h] [rbp-300h]
  __int64 v36; // [rsp+A0h] [rbp-2F8h]
  __int128 v37; // [rsp+C0h] [rbp-2D8h]
  __int128 v38; // [rsp+D0h] [rbp-2C8h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-2B8h]
  _DWORD v40[24]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v41[512]; // [rsp+150h] [rbp-248h] BYREF

  v29 = a2;
  memset(v40, 0, 0x58uLL);
  v9 = (unsigned __int8 *)v40;
  v30 = 0LL;
  v27 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  if ( a4 )
  {
    v13 = 1;
    v14 = 4LL * (unsigned int)a3;
    if ( v14 > 0xFFFFFFFF )
      goto LABEL_31;
  }
  else
  {
    LODWORD(v14) = 0;
    v13 = 0;
  }
  if ( v13 )
  {
    result = AllocCallbackMessage(88, v13, (unsigned int)v14, v41, 1, 0x200uLL);
    v9 = result;
    v28 = result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = (unsigned __int8 *)v40;
    v28 = (unsigned __int8 *)v40;
    memset(&v40[1], 0, 0x54uLL);
    v40[0] = 88;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v34 = 0LL;
  v35 = 0LL;
  if ( v9 != (unsigned __int8 *)v40 && v9 != v41 )
    PushW32ThreadLock((__int64)v9, &v34, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v12;
  *((_DWORD *)v9 + 12) = v29;
  *((_QWORD *)v9 + 7) = a3;
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v9, a4, v14, (void **)v9 + 8) < 0 )
      goto LABEL_31;
  }
  else
  {
    *((_QWORD *)v9 + 8) = 0LL;
  }
  *((_QWORD *)v9 + 9) = a5;
  *((_QWORD *)v9 + 10) = a6;
  ThreadLock((__int64)a1, (__int64 *)&v38);
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
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v26);
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v19 = KeUserModeCallback(36LL, v9, *(unsigned int *)v9, &v30, &v27);
  EtwTraceEndCallback(36LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v26);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v23 + 64) = v37;
  *(_QWORD *)(v23 + 80) = v33;
  if ( v19 >= 0 && v27 == 24 )
  {
    v24 = (__int64 *)v30;
    if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v36 = *v24;
    goto LABEL_32;
  }
LABEL_31:
  v25 = 0LL;
LABEL_32:
  if ( v9 != (unsigned __int8 *)v40 && v9 != v41 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v34);
  }
  return (unsigned __int8 *)v25;
}

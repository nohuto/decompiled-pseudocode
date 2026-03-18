/*
 * XREFs of SfnINDEVICECHANGE @ 0x1C00EBC90
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

__int64 __fastcall SfnINDEVICECHANGE(
        __int64 *a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned int v14; // r12d
  unsigned __int8 *v15; // rbx
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
  _BYTE v27[4]; // [rsp+30h] [rbp-358h] BYREF
  int v28; // [rsp+34h] [rbp-354h] BYREF
  int v29; // [rsp+38h] [rbp-350h]
  unsigned __int8 *v30; // [rsp+50h] [rbp-338h]
  unsigned __int64 v31; // [rsp+58h] [rbp-330h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-320h] BYREF
  __int128 v33; // [rsp+70h] [rbp-318h]
  __int64 v34; // [rsp+80h] [rbp-308h]
  __int128 v35; // [rsp+88h] [rbp-300h] BYREF
  __int64 v36; // [rsp+98h] [rbp-2F0h]
  __int64 v37; // [rsp+A0h] [rbp-2E8h]
  __int128 v38; // [rsp+C0h] [rbp-2C8h]
  __int128 v39; // [rsp+D0h] [rbp-2B8h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-2A8h]
  unsigned __int8 v41[96]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v42[512]; // [rsp+150h] [rbp-238h] BYREF
  int v43; // [rsp+3C0h] [rbp+38h]

  v29 = a2;
  v43 = a7 & 1;
  v10 = (unsigned __int16)a3 & 0x8000;
  memset(v41, 0, sizeof(v41));
  v31 = 0LL;
  v28 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v14 = 0;
  if ( v10 && a4 && a4 >= MmSystemRangeStart )
    v14 = *a4;
  v15 = AllocCallbackMessage(96, 1u, v14, v42, 1, 0x200uLL);
  v30 = v15;
  if ( !v15 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v35 = 0LL;
  v36 = 0LL;
  if ( v15 != v41 && v15 != v42 )
    PushW32ThreadLock((__int64)v15, &v35, (__int64)Win32FreePool);
  *((_QWORD *)v15 + 5) = v13;
  *((_DWORD *)v15 + 12) = v29;
  *((_QWORD *)v15 + 7) = a3;
  if ( v14 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v15, (unsigned __int64)a4, *a4, (void **)v15 + 10) < 0 )
      goto LABEL_29;
  }
  else
  {
    *((_QWORD *)v15 + 10) = a4;
  }
  *((_DWORD *)v15 + 22) = v43;
  *((_QWORD *)v15 + 8) = a5;
  *((_QWORD *)v15 + 9) = a6;
  ThreadLock((__int64)a1, (__int64 *)&v39);
  v16 = *(_QWORD *)(v12 + 480);
  v38 = *(_OWORD *)(v16 + 64);
  v33 = v38;
  v34 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v13;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v18;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v27);
  EtwTraceBeginCallback(28LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v19 = KeUserModeCallback(28LL, v15, *(unsigned int *)v15, &v31, &v28);
  EtwTraceEndCallback(28LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v27);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v23 + 64) = v38;
  *(_QWORD *)(v23 + 80) = v34;
  if ( v19 >= 0 && v28 == 24 )
  {
    v24 = (__int64 *)v31;
    if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v37 = *v24;
    goto LABEL_22;
  }
LABEL_29:
  v25 = 0LL;
LABEL_22:
  if ( v15 != v41 && v15 != v42 )
  {
    if ( *((_QWORD *)v15 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v35);
  }
  return v25;
}

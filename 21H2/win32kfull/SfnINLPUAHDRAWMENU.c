/*
 * XREFs of SfnINLPUAHDRAWMENU @ 0x1C00F3E70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     _ServerFixupMenuDC @ 0x1C00F4650 (_ServerFixupMenuDC.c)
 */

__int64 __fastcall SfnINLPUAHDRAWMENU(
        __int64 *a1,
        int a2,
        __int64 a3,
        HDC *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  HDC v14; // r13
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rbx
  __int64 v28; // [rsp+58h] [rbp-D0h]
  __int64 v29; // [rsp+60h] [rbp-C8h] BYREF
  int v30; // [rsp+68h] [rbp-C0h]
  int v31; // [rsp+6Ch] [rbp-BCh]
  __int64 v32; // [rsp+70h] [rbp-B8h]
  __int128 v33; // [rsp+78h] [rbp-B0h]
  HDC v34; // [rsp+88h] [rbp-A0h]
  __int64 v35; // [rsp+90h] [rbp-98h]
  __int64 v36; // [rsp+98h] [rbp-90h]
  __int64 v37; // [rsp+A0h] [rbp-88h]
  __int128 v38; // [rsp+C0h] [rbp-68h]
  __int128 v39; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-48h]
  int v41; // [rsp+130h] [rbp+8h] BYREF
  char v42; // [rsp+138h] [rbp+10h] BYREF
  __int64 v43; // [rsp+140h] [rbp+18h]
  unsigned __int64 v44; // [rsp+148h] [rbp+20h] BYREF

  v43 = a3;
  v44 = 0LL;
  v41 = 0;
  v39 = 0LL;
  v40 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v31 = 0;
  v14 = 0LL;
  v15 = ServerFixupMenuDC(a4[1]);
  v16 = v15;
  if ( v15 )
  {
    v14 = a4[1];
    a4[1] = (HDC)v15;
  }
  v29 = v13;
  v30 = a2 & 0x1FFFF;
  v32 = v43;
  *((_DWORD *)a4 + 5) = 0;
  v33 = *(_OWORD *)a4;
  v34 = a4[2];
  v35 = a5;
  v36 = a6;
  ThreadLock((__int64)a1, (__int64 *)&v39);
  v17 = *(_QWORD *)(v12 + 480);
  v38 = *(_OWORD *)(v17 + 64);
  v28 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v19;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(106LL);
  v20 = KeUserModeCallback(106LL, &v29, 64LL, &v44, &v41);
  EtwTraceEndCallback(106LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  ThreadUnlock1(v22, v21, v23);
  v24 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v24 + 64) = v38;
  *(_QWORD *)(v24 + 80) = v28;
  if ( v20 < 0 || v41 != 24 )
    return 0LL;
  v25 = (__int64 *)v44;
  if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
    v25 = (__int64 *)MmUserProbeAddress;
  v26 = *v25;
  v37 = *v25;
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      a4[1] = v14;
  }
  return v26;
}

/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00F3AC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     _ServerFixupMenuDC @ 0x1C00F4650 (_ServerFixupMenuDC.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINOUTLPUAHMEASUREMENUITEM(
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
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rcx
  _OWORD *v27; // rcx
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  __int128 v32; // xmm5
  __int128 v33; // xmm6
  _BYTE v35[4]; // [rsp+30h] [rbp-188h] BYREF
  _DWORD v36[5]; // [rsp+34h] [rbp-184h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-170h] BYREF
  HDC v38; // [rsp+50h] [rbp-168h]
  __int128 v39; // [rsp+60h] [rbp-158h]
  __int64 v40; // [rsp+70h] [rbp-148h]
  __int64 v41; // [rsp+78h] [rbp-140h]
  __int128 v42; // [rsp+A0h] [rbp-118h]
  __int128 v43; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-F8h]
  __int64 v45; // [rsp+D0h] [rbp-E8h] BYREF
  int v46; // [rsp+D8h] [rbp-E0h]
  int v47; // [rsp+DCh] [rbp-DCh]
  __int64 v48; // [rsp+E0h] [rbp-D8h]
  __int128 v49; // [rsp+E8h] [rbp-D0h]
  __int128 v50; // [rsp+F8h] [rbp-C0h]
  __int128 v51; // [rsp+108h] [rbp-B0h]
  __int128 v52; // [rsp+118h] [rbp-A0h]
  __int128 v53; // [rsp+128h] [rbp-90h]
  __int128 v54; // [rsp+138h] [rbp-80h]
  __int128 v55; // [rsp+148h] [rbp-70h]
  __int64 v56; // [rsp+158h] [rbp-60h]
  __int64 v57; // [rsp+160h] [rbp-58h]

  v37 = 0LL;
  v36[0] = 0;
  v43 = 0LL;
  v44 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v47 = 0;
  v38 = 0LL;
  v15 = ServerFixupMenuDC(a4[5]);
  if ( v15 )
  {
    v38 = a4[5];
    a4[5] = (HDC)v15;
  }
  v45 = v14;
  v46 = a2 & 0x1FFFF;
  v48 = a3;
  v49 = *(_OWORD *)a4;
  v50 = *((_OWORD *)a4 + 1);
  v51 = *((_OWORD *)a4 + 2);
  v52 = *((_OWORD *)a4 + 3);
  v53 = *((_OWORD *)a4 + 4);
  v54 = *((_OWORD *)a4 + 5);
  v55 = *((_OWORD *)a4 + 6);
  DWORD1(v50) = 0;
  DWORD1(v52) = 0;
  v56 = a5;
  v57 = a6;
  ThreadLock((__int64)a1, (__int64 *)&v43);
  v16 = *(_QWORD *)(v13 + 480);
  v42 = *(_OWORD *)(v16 + 64);
  v39 = v42;
  v40 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v18;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v35);
  EtwTraceBeginCallback(109LL);
  v19 = KeUserModeCallback(109LL, &v45, 152LL, &v37, v36);
  EtwTraceEndCallback(109LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v35);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v23 + 64) = v42;
  *(_QWORD *)(v23 + 80) = v40;
  if ( v19 < 0 || v36[0] != 24 )
    return 0LL;
  v24 = (__int64 *)v37;
  if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
    v24 = (__int64 *)MmUserProbeAddress;
  v25 = *v24;
  v41 = *v24;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_23;
  v26 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
  if ( v26 )
  {
    if ( (*(_DWORD *)(v26 + 84) & 1) != 0 && *(HDC **)(v26 + 96) == a4 )
      return 0LL;
  }
  v27 = *(_OWORD **)(v37 + 16);
  if ( v27 + 7 < v27 || (unsigned __int64)(v27 + 7) > MmUserProbeAddress )
    v27 = (_OWORD *)MmUserProbeAddress;
  v28 = v27[1];
  v29 = v27[2];
  v30 = v27[3];
  v31 = v27[4];
  v32 = v27[5];
  v33 = v27[6];
  *(_OWORD *)a4 = *v27;
  *((_OWORD *)a4 + 1) = v28;
  *((_OWORD *)a4 + 2) = v29;
  *((_OWORD *)a4 + 3) = v30;
  *((_OWORD *)a4 + 4) = v31;
  *((_OWORD *)a4 + 5) = v32;
  *((_OWORD *)a4 + 6) = v33;
LABEL_23:
  if ( v15 )
  {
    _ReleaseDC(v15);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      a4[5] = v38;
  }
  return v25;
}

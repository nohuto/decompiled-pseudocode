/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C020B9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     _ServerFixupMenuDC @ 0x1C0234AFC (_ServerFixupMenuDC.c)
 */

__int64 __fastcall SfnINOUTLPUAHMEASUREMENUITEM(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 *v31; // rcx
  ULONG64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rcx
  _OWORD *v35; // rcx
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  __int128 v39; // xmm4
  __int128 v40; // xmm5
  __int128 v41; // xmm6
  _BYTE v43[4]; // [rsp+30h] [rbp-188h] BYREF
  _DWORD v44[5]; // [rsp+34h] [rbp-184h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-170h] BYREF
  __int64 v46; // [rsp+50h] [rbp-168h]
  __int128 v47; // [rsp+60h] [rbp-158h]
  __int64 v48; // [rsp+70h] [rbp-148h]
  __int64 v49; // [rsp+78h] [rbp-140h]
  __int128 v50; // [rsp+A0h] [rbp-118h]
  __int128 v51; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-F8h]
  __int64 v53; // [rsp+D0h] [rbp-E8h] BYREF
  int v54; // [rsp+D8h] [rbp-E0h]
  __int64 v55; // [rsp+E0h] [rbp-D8h]
  __int128 v56; // [rsp+E8h] [rbp-D0h]
  __int128 v57; // [rsp+F8h] [rbp-C0h]
  __int128 v58; // [rsp+108h] [rbp-B0h]
  __int128 v59; // [rsp+118h] [rbp-A0h]
  __int128 v60; // [rsp+128h] [rbp-90h]
  __int128 v61; // [rsp+138h] [rbp-80h]
  __int128 v62; // [rsp+148h] [rbp-70h]
  __int64 v63; // [rsp+158h] [rbp-60h]
  __int64 v64; // [rsp+160h] [rbp-58h]

  v10 = a2;
  v45 = 0LL;
  v44[0] = 0;
  v51 = 0LL;
  v52 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v12 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v53, 0, 0x98uLL);
  v46 = 0LL;
  v15 = ServerFixupMenuDC(*(HDC *)(a4 + 40));
  if ( v15 )
  {
    v46 = *(_QWORD *)(a4 + 40);
    *(_QWORD *)(a4 + 40) = v15;
  }
  v53 = v14;
  v54 = v10 & 0x1FFFF;
  v55 = a3;
  v56 = *(_OWORD *)a4;
  v57 = *(_OWORD *)(a4 + 16);
  v58 = *(_OWORD *)(a4 + 32);
  v59 = *(_OWORD *)(a4 + 48);
  v60 = *(_OWORD *)(a4 + 64);
  v61 = *(_OWORD *)(a4 + 80);
  v62 = *(_OWORD *)(a4 + 96);
  DWORD1(v57) = 0;
  DWORD1(v59) = 0;
  v63 = a5;
  v64 = a6;
  ThreadLock(a1, &v51);
  v19 = *((_QWORD *)v13 + 60);
  v50 = *(_OWORD *)(v19 + 64);
  v47 = v50;
  v48 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v14;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224);
  else
    v21 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v21;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v43,
    v16,
    v17,
    v18);
  EtwTraceBeginCallback(109LL);
  v22 = KeUserModeCallback(109LL, &v53, 152LL, &v45, v44);
  EtwTraceEndCallback(109LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v43, v23, v24);
  ThreadUnlock1(v26, v25, v27);
  v30 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v30 + 64) = v50;
  *(_QWORD *)(v30 + 80) = v48;
  if ( v22 < 0 || v44[0] != 24 )
    return 0LL;
  v31 = (__int64 *)v45;
  v32 = v45 + 8;
  if ( v45 + 8 < v45 || v32 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  v33 = *v31;
  v49 = *v31;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_27;
  v34 = *((_QWORD *)PtiCurrentShared((__int64)v31, v32, v28, v29) + 64);
  if ( v34 )
  {
    if ( (*(_DWORD *)(v34 + 84) & 1) != 0 && *(_QWORD *)(v34 + 96) == a4 )
      return 0LL;
  }
  v35 = *(_OWORD **)(v45 + 16);
  if ( v35 + 7 < v35 || (unsigned __int64)(v35 + 7) > MmUserProbeAddress )
    v35 = (_OWORD *)MmUserProbeAddress;
  v36 = v35[1];
  v37 = v35[2];
  v38 = v35[3];
  v39 = v35[4];
  v40 = v35[5];
  v41 = v35[6];
  *(_OWORD *)a4 = *v35;
  *(_OWORD *)(a4 + 16) = v36;
  *(_OWORD *)(a4 + 32) = v37;
  *(_OWORD *)(a4 + 48) = v38;
  *(_OWORD *)(a4 + 64) = v39;
  *(_OWORD *)(a4 + 80) = v40;
  *(_OWORD *)(a4 + 96) = v41;
LABEL_27:
  if ( v15 )
  {
    _ReleaseDC(v15);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 40) = v46;
  }
  return v33;
}

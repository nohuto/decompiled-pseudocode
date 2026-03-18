/*
 * XREFs of SfnSHELLSYNCDISPLAYCHANGED @ 0x1C020F340
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall SfnSHELLSYNCDISPLAYCHANGED(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  _OWORD *v8; // rbx
  int v10; // r15d
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // r14
  __int64 v14; // rsi
  _OWORD *v15; // rax
  char *v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 *v34; // rcx
  ULONG64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rcx
  _OWORD *v38; // rcx
  _OWORD *v39; // rdx
  __int64 v40; // rax
  _OWORD *v41; // rax
  _BYTE v43[4]; // [rsp+30h] [rbp-A68h] BYREF
  _DWORD v44[5]; // [rsp+34h] [rbp-A64h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-A50h] BYREF
  __int128 v46; // [rsp+58h] [rbp-A40h]
  __int64 v47; // [rsp+68h] [rbp-A30h]
  __int64 v48; // [rsp+70h] [rbp-A28h]
  __int128 v49; // [rsp+98h] [rbp-A00h]
  __int128 v50; // [rsp+A8h] [rbp-9F0h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-9E0h]
  _BYTE v52[1216]; // [rsp+C0h] [rbp-9D8h] BYREF
  __int64 v53; // [rsp+580h] [rbp-518h] BYREF
  int v54; // [rsp+588h] [rbp-510h]
  __int64 v55; // [rsp+590h] [rbp-508h]
  char v56; // [rsp+598h] [rbp-500h] BYREF
  __int64 v57; // [rsp+A50h] [rbp-48h]
  __int64 v58; // [rsp+A58h] [rbp-40h]

  v8 = (_OWORD *)a4;
  v10 = a2;
  v45 = 0LL;
  v44[0] = 0;
  v50 = 0LL;
  v51 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v12 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v53, 0, 0x4E0uLL);
  v53 = v14;
  v54 = v10 & 0x1FFFF;
  v55 = a3;
  v15 = v8;
  v16 = &v56;
  v17 = 9LL;
  v18 = 9LL;
  do
  {
    *(_OWORD *)v16 = *v15;
    *((_OWORD *)v16 + 1) = v15[1];
    *((_OWORD *)v16 + 2) = v15[2];
    *((_OWORD *)v16 + 3) = v15[3];
    *((_OWORD *)v16 + 4) = v15[4];
    *((_OWORD *)v16 + 5) = v15[5];
    *((_OWORD *)v16 + 6) = v15[6];
    v16 += 128;
    *((_OWORD *)v16 - 1) = v15[7];
    v15 += 8;
    --v18;
  }
  while ( v18 );
  *(_OWORD *)v16 = *v15;
  *((_OWORD *)v16 + 1) = v15[1];
  *((_OWORD *)v16 + 2) = v15[2];
  *((_DWORD *)v16 + 12) = *((_DWORD *)v15 + 12);
  v57 = a5;
  v58 = a6;
  ThreadLock(a1, &v50);
  v22 = *((_QWORD *)v13 + 60);
  v49 = *(_OWORD *)(v22 + 64);
  v46 = v49;
  v47 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v14;
  if ( a1 )
    v23 = *a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224);
  else
    v24 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v24;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v43,
    v19,
    v20,
    v21);
  EtwTraceBeginCallback(129LL);
  v25 = KeUserModeCallback(129LL, &v53, 1248LL, &v45, v44);
  EtwTraceEndCallback(129LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v43, v26, v27);
  ThreadUnlock1(v29, v28, v30);
  v33 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v33 + 64) = v49;
  *(_QWORD *)(v33 + 80) = v47;
  if ( v25 >= 0 && v44[0] == 24 )
  {
    v34 = (__int64 *)v45;
    v35 = v45 + 8;
    if ( v45 + 8 < v45 || v35 > MmUserProbeAddress )
      v34 = (__int64 *)MmUserProbeAddress;
    v36 = *v34;
    v48 = *v34;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v36;
    v37 = *((_QWORD *)PtiCurrentShared((__int64)v34, v35, v31, v32) + 64);
    if ( !v37 || (*(_DWORD *)(v37 + 84) & 1) == 0 || *(_OWORD **)(v37 + 96) != v8 )
    {
      v38 = *(_OWORD **)(v45 + 16);
      if ( (_OWORD *)((char *)v38 + 1204) < v38 || (unsigned __int64)v38 + 1204 > MmUserProbeAddress )
        v38 = (_OWORD *)MmUserProbeAddress;
      v39 = v52;
      v40 = 9LL;
      do
      {
        *v39 = *v38;
        v39[1] = v38[1];
        v39[2] = v38[2];
        v39[3] = v38[3];
        v39[4] = v38[4];
        v39[5] = v38[5];
        v39[6] = v38[6];
        v39 += 8;
        *(v39 - 1) = v38[7];
        v38 += 8;
        --v40;
      }
      while ( v40 );
      *v39 = *v38;
      v39[1] = v38[1];
      v39[2] = v38[2];
      *((_DWORD *)v39 + 12) = *((_DWORD *)v38 + 12);
      v41 = v52;
      do
      {
        *v8 = *v41;
        v8[1] = v41[1];
        v8[2] = v41[2];
        v8[3] = v41[3];
        v8[4] = v41[4];
        v8[5] = v41[5];
        v8[6] = v41[6];
        v8 += 8;
        *(v8 - 1) = v41[7];
        v41 += 8;
        --v17;
      }
      while ( v17 );
      *v8 = *v41;
      v8[1] = v41[1];
      v8[2] = v41[2];
      *((_DWORD *)v8 + 12) = *((_DWORD *)v41 + 12);
      return v36;
    }
  }
  return 0LL;
}

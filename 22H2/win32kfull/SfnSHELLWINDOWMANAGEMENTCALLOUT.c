/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x1C020F820
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

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTCALLOUT(
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
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 *v30; // rcx
  ULONG64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rcx
  ULONG64 v34; // rcx
  __int128 v35; // xmm3
  __int128 v36; // xmm4
  __int128 v37; // xmm5
  __int128 v38; // xmm6
  __int128 v39; // xmm7
  __int64 v40; // xmm0_8
  _BYTE v42[4]; // [rsp+30h] [rbp-178h] BYREF
  _DWORD v43[5]; // [rsp+34h] [rbp-174h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-160h] BYREF
  __int128 v45; // [rsp+58h] [rbp-150h]
  __int64 v46; // [rsp+68h] [rbp-140h]
  __int64 v47; // [rsp+70h] [rbp-138h]
  __int128 v48; // [rsp+98h] [rbp-110h]
  __int128 v49; // [rsp+A8h] [rbp-100h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-F0h]
  __int64 v51; // [rsp+C0h] [rbp-E8h] BYREF
  int v52; // [rsp+C8h] [rbp-E0h]
  __int64 v53; // [rsp+D0h] [rbp-D8h]
  __int128 v54; // [rsp+D8h] [rbp-D0h]
  __int128 v55; // [rsp+E8h] [rbp-C0h]
  __int128 v56; // [rsp+F8h] [rbp-B0h]
  __int128 v57; // [rsp+108h] [rbp-A0h]
  __int128 v58; // [rsp+118h] [rbp-90h]
  __int128 v59; // [rsp+128h] [rbp-80h]
  __int64 v60; // [rsp+138h] [rbp-70h]
  __int64 v61; // [rsp+140h] [rbp-68h]
  __int64 v62; // [rsp+148h] [rbp-60h]

  v10 = a2;
  v44 = 0LL;
  v43[0] = 0;
  v49 = 0LL;
  v50 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v12 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v51, 0, 0x90uLL);
  v51 = v14;
  v52 = v10 & 0x1FFFF;
  v53 = a3;
  v54 = *(_OWORD *)a4;
  v55 = *(_OWORD *)(a4 + 16);
  v56 = *(_OWORD *)(a4 + 32);
  v57 = *(_OWORD *)(a4 + 48);
  v58 = *(_OWORD *)(a4 + 64);
  v59 = *(_OWORD *)(a4 + 80);
  v60 = *(_QWORD *)(a4 + 96);
  v61 = a5;
  v62 = a6;
  ThreadLock(a1, &v49);
  v18 = *((_QWORD *)v13 + 60);
  v48 = *(_OWORD *)(v18 + 64);
  v45 = v48;
  v46 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v14;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v20;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v42,
    v15,
    v16,
    v17);
  EtwTraceBeginCallback(53LL);
  v21 = KeUserModeCallback(53LL, &v51, 144LL, &v44, v43);
  EtwTraceEndCallback(53LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v42, v22, v23);
  ThreadUnlock1(v25, v24, v26);
  v29 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v29 + 64) = v48;
  *(_QWORD *)(v29 + 80) = v46;
  if ( v21 >= 0 && v43[0] == 24 )
  {
    v30 = (__int64 *)v44;
    v31 = v44 + 8;
    if ( v44 + 8 < v44 || v31 > MmUserProbeAddress )
      v30 = (__int64 *)MmUserProbeAddress;
    v32 = *v30;
    v47 = *v30;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v32;
    v33 = *((_QWORD *)PtiCurrentShared((__int64)v30, v31, v27, v28) + 64);
    if ( !v33 || (*(_DWORD *)(v33 + 84) & 1) == 0 || *(_QWORD *)(v33 + 96) != a4 )
    {
      v34 = *(_QWORD *)(v44 + 16);
      if ( v34 + 104 < v34 || v34 + 104 > MmUserProbeAddress )
        v34 = MmUserProbeAddress;
      v35 = *(_OWORD *)(v34 + 16);
      v36 = *(_OWORD *)(v34 + 32);
      v37 = *(_OWORD *)(v34 + 48);
      v38 = *(_OWORD *)(v34 + 64);
      v39 = *(_OWORD *)(v34 + 80);
      v40 = *(_QWORD *)(v34 + 96);
      *(_OWORD *)a4 = *(_OWORD *)v34;
      *(_OWORD *)(a4 + 16) = v35;
      *(_OWORD *)(a4 + 32) = v36;
      *(_OWORD *)(a4 + 48) = v37;
      *(_OWORD *)(a4 + 64) = v38;
      *(_OWORD *)(a4 + 80) = v39;
      *(_QWORD *)(a4 + 96) = v40;
      return v32;
    }
  }
  return 0LL;
}

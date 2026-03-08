/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C00DCC50
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTNOTIFY(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6)
{
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 result; // rax
  _BYTE v23[4]; // [rsp+30h] [rbp-148h] BYREF
  _DWORD v24[5]; // [rsp+34h] [rbp-144h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-130h] BYREF
  __int128 v26; // [rsp+58h] [rbp-120h]
  __int64 v27; // [rsp+68h] [rbp-110h]
  __int64 v28; // [rsp+70h] [rbp-108h]
  __int128 v29; // [rsp+90h] [rbp-E8h]
  __int128 v30; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-C8h]
  __int64 v32; // [rsp+C0h] [rbp-B8h] BYREF
  int v33; // [rsp+C8h] [rbp-B0h]
  __int64 v34; // [rsp+D0h] [rbp-A8h]
  __int128 v35; // [rsp+D8h] [rbp-A0h]
  __int128 v36; // [rsp+E8h] [rbp-90h]
  __int128 v37; // [rsp+F8h] [rbp-80h]
  __int128 v38; // [rsp+108h] [rbp-70h]
  __int128 v39; // [rsp+118h] [rbp-60h]
  __int64 v40; // [rsp+128h] [rbp-50h]
  __int64 v41; // [rsp+130h] [rbp-48h]

  v25 = 0LL;
  v24[0] = 0;
  v30 = 0LL;
  v31 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v10 = PtiCurrentShared((__int64)a1);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 59);
  else
    v12 = 0LL;
  memset_0(&v32, 0, 0x78uLL);
  v32 = v12;
  v33 = a2 & 0x1FFFF;
  v34 = a3;
  *((_DWORD *)a4 + 3) = 0;
  *((_DWORD *)a4 + 19) = 0;
  v35 = *a4;
  v36 = a4[1];
  v37 = a4[2];
  v38 = a4[3];
  v39 = a4[4];
  v40 = a5;
  v41 = a6;
  ThreadLock(a1, &v30);
  v13 = *((_QWORD *)v11 + 60);
  v29 = *(_OWORD *)(v13 + 64);
  v26 = v29;
  v27 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v12;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 60) + 64LL) = v14;
  if ( a1 )
    v15 = *(_QWORD *)(a1[5] + 224);
  else
    v15 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 60) + 80LL) = v15;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v23);
  EtwTraceBeginCallback(54LL);
  v16 = KeUserModeCallback(54LL, &v32, 120LL, &v25, v24);
  EtwTraceEndCallback(54LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v23);
  ThreadUnlock1(v18, v17, v19);
  v20 = *((_QWORD *)v11 + 60);
  *(_OWORD *)(v20 + 64) = v29;
  *(_QWORD *)(v20 + 80) = v27;
  if ( v16 < 0 || v24[0] != 24 )
    return 0LL;
  v21 = (__int64 *)v25;
  if ( v25 + 8 < v25 || v25 + 8 > MmUserProbeAddress )
    v21 = (__int64 *)MmUserProbeAddress;
  result = *v21;
  v28 = *v21;
  return result;
}

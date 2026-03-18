/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1C020BE30
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall SfnINOUTMENUGETOBJECT(
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
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // rdi
  __m128i *v30; // rcx
  __int128 v32; // [rsp+58h] [rbp-110h]
  _QWORD *Address; // [rsp+68h] [rbp-100h]
  __int64 v34; // [rsp+80h] [rbp-E8h]
  __int128 v35; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-A8h]
  __int64 v37; // [rsp+D0h] [rbp-98h] BYREF
  int v38; // [rsp+D8h] [rbp-90h]
  __int64 v39; // [rsp+E0h] [rbp-88h]
  __int128 v40; // [rsp+E8h] [rbp-80h]
  __int128 v41; // [rsp+F8h] [rbp-70h]
  __int64 v42; // [rsp+108h] [rbp-60h]
  __int64 v43; // [rsp+110h] [rbp-58h]
  __m128i v44; // [rsp+120h] [rbp-48h]
  _QWORD *v45; // [rsp+130h] [rbp-38h]
  int v46; // [rsp+170h] [rbp+8h] BYREF
  char v47; // [rsp+178h] [rbp+10h] BYREF
  unsigned __int64 v48; // [rsp+180h] [rbp+18h] BYREF

  v10 = a2;
  v48 = 0LL;
  v46 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v12 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v37, 0, 0x48uLL);
  v37 = v14;
  v38 = v10;
  v39 = a3;
  v40 = *(_OWORD *)a4;
  v41 = *(_OWORD *)(a4 + 16);
  v42 = a5;
  v43 = a6;
  ThreadLock(a1, &v35);
  v18 = *((_QWORD *)v13 + 60);
  v32 = *(_OWORD *)(v18 + 64);
  v34 = *(_QWORD *)(v18 + 80);
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
    (LeaveEnterCritProperDisposition *)&v47,
    v15,
    v16,
    v17);
  EtwTraceBeginCallback(102LL);
  v21 = KeUserModeCallback(102LL, &v37, 72LL, &v48, &v46);
  EtwTraceEndCallback(102LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v47, v22, v23);
  ThreadUnlock1(v25, v24, v26);
  v27 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v27 + 64) = v32;
  *(_QWORD *)(v27 + 80) = v34;
  if ( v21 >= 0 && v46 == 24 )
  {
    v28 = (__int64 *)v48;
    if ( v48 + 8 < v48 || v48 + 8 > MmUserProbeAddress )
      v28 = (__int64 *)MmUserProbeAddress;
    v29 = *v28;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v29;
    v30 = (__m128i *)v48;
    if ( v48 + 24 < v48 || v48 + 24 > MmUserProbeAddress )
      v30 = (__m128i *)MmUserProbeAddress;
    Address = (_QWORD *)v30[1].m128i_i64[0];
    v44 = *v30;
    v45 = Address;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v44, 8)) == 8 )
    {
      ProbeForRead(Address, 8uLL, 4u);
      *(_QWORD *)(a4 + 24) = *Address;
      return v29;
    }
  }
  return 0LL;
}

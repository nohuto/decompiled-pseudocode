/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1C020EA00
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall SfnINOUTMENUGETOBJECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdi
  __m128i *v25; // rcx
  __int128 v27; // [rsp+58h] [rbp-110h]
  _QWORD *Address; // [rsp+68h] [rbp-100h]
  __int64 v29; // [rsp+80h] [rbp-E8h]
  __int128 v30; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-A8h]
  __int64 v32; // [rsp+D0h] [rbp-98h] BYREF
  int v33; // [rsp+D8h] [rbp-90h]
  __int64 v34; // [rsp+E0h] [rbp-88h]
  __int128 v35; // [rsp+E8h] [rbp-80h]
  __int128 v36; // [rsp+F8h] [rbp-70h]
  __int64 v37; // [rsp+108h] [rbp-60h]
  __int64 v38; // [rsp+110h] [rbp-58h]
  __m128i v39; // [rsp+120h] [rbp-48h]
  _QWORD *v40; // [rsp+130h] [rbp-38h]
  int v41; // [rsp+170h] [rbp+8h] BYREF
  char v42; // [rsp+178h] [rbp+10h] BYREF
  unsigned __int64 v43; // [rsp+180h] [rbp+18h] BYREF

  v43 = 0LL;
  v41 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v12 = PtiCurrentShared((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v32, 0, 0x48uLL);
  v32 = v14;
  v33 = a2;
  v34 = a3;
  v35 = *a4;
  v36 = a4[1];
  v37 = a5;
  v38 = a6;
  ThreadLock(a1, &v30);
  v15 = *((_QWORD *)v13 + 60);
  v27 = *(_OWORD *)(v15 + 64);
  v29 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v14;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v17;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(102LL);
  v18 = KeUserModeCallback(102LL, &v32, 72LL, &v43, &v41);
  EtwTraceEndCallback(102LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  ThreadUnlock1(v20, v19, v21);
  v22 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v22 + 64) = v27;
  *(_QWORD *)(v22 + 80) = v29;
  if ( v18 >= 0 && v41 == 24 )
  {
    v23 = (__int64 *)v43;
    if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
      v23 = (__int64 *)MmUserProbeAddress;
    v24 = *v23;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v24;
    v25 = (__m128i *)v43;
    if ( v43 + 24 < v43 || v43 + 24 > MmUserProbeAddress )
      v25 = (__m128i *)MmUserProbeAddress;
    Address = (_QWORD *)v25[1].m128i_i64[0];
    v39 = *v25;
    v40 = Address;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v39, 8)) == 8 )
    {
      ProbeForRead(Address, 8uLL, 4u);
      *((_QWORD *)a4 + 3) = *Address;
      return v24;
    }
  }
  return 0LL;
}

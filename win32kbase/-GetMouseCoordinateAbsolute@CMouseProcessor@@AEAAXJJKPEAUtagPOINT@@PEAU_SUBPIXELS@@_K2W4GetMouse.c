__int64 __fastcall CMouseProcessor::GetMouseCoordinateAbsolute(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        int *a5,
        _DWORD *a6,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  char v13; // si
  __m128i *UnionRegion; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // xmm0_8
  unsigned __int64 v17; // r8
  int v18; // eax
  __int32 v19; // ecx
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 result; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  _OWORD v60[45]; // [rsp+20h] [rbp-5E8h] BYREF
  _OWORD v61[45]; // [rsp+2F0h] [rbp-318h] BYREF
  __m128i v62; // [rsp+5C0h] [rbp-48h]

  if ( (a4 & 2) != 0 )
  {
    v13 = 1;
    UnionRegion = (__m128i *)InputConfig::Mouse::GetUnionRegion(v60);
  }
  else
  {
    v13 = 0;
    UnionRegion = (__m128i *)InputConfig::Mouse::GetPrimaryRegion(v61);
  }
  v62 = *UnionRegion;
  v15 = v62.m128i_i64[0];
  v16 = _mm_srli_si128(v62, 8).m128i_u64[0];
  v17 = HIDWORD(v62.m128i_i64[0]);
  v18 = a2 * (v16 - v62.m128i_i32[0]);
  v19 = HIDWORD(v16) - v62.m128i_i32[1];
  *a5 = v18;
  if ( v18 < 0 )
  {
    *a6 = -(unsigned __int16)-(__int16)v18;
    v20 = -((unsigned int)-*a5 >> 16);
  }
  else
  {
    *a6 = (unsigned __int16)v18;
    v20 = HIWORD(*a5);
  }
  v21 = a3 * v19;
  *a5 = v20;
  a5[1] = v21;
  if ( v21 < 0 )
  {
    a6[1] = -(unsigned __int16)-(__int16)v21;
    v22 = -((unsigned int)-a5[1] >> 16);
  }
  else
  {
    a6[1] = (unsigned __int16)v21;
    v22 = HIWORD(a5[1]);
  }
  a5[1] = v22;
  if ( v13 )
  {
    *a5 += v15;
    a5[1] = v17 + v22;
  }
  v62.m128i_i64[0] = 0LL;
  result = 0LL;
  *(_QWORD *)(a1 + 52) = 0LL;
  if ( (a9 & 1) == 0 || (a4 & 0x20) != 0 )
    result = ApiSetEditionMagnificationMousePosition(a5);
  if ( (a9 & 4) == 0 )
  {
    v24 = SGDGetUserSessionState(v22, v20, v17, v15) + 14368;
    v29 = *(unsigned int *)(SGDGetUserSessionState(v26, v25, v27, v28) + 14364);
    *(_DWORD *)(v24 + 24 * v29) = a2 | 0xFFFF0000;
    v32 = SGDGetUserSessionState(v29, 3 * v29, v30, v31) + 14368;
    v37 = *(unsigned int *)(SGDGetUserSessionState(v34, v33, v35, v36) + 14364);
    *(_DWORD *)(v32 + 24 * v37 + 4) = a3 | 0xFFFF0000;
    v40 = SGDGetUserSessionState(v37, 3 * v37, v38, v39) + 14368;
    v45 = 3LL * *(unsigned int *)(SGDGetUserSessionState(v42, v41, v43, v44) + 14364);
    *(_DWORD *)(v40 + 8 * v45 + 8) = a7;
    v48 = SGDGetUserSessionState(a7, v45, v46, v47) + 14368;
    v53 = 3LL * *(unsigned int *)(SGDGetUserSessionState(v50, v49, v51, v52) + 14364);
    *(_QWORD *)(v48 + 8 * v53 + 16) = a8;
    LODWORD(v48) = ((unsigned __int8)*(_DWORD *)(SGDGetUserSessionState(a8, v53, v54, v55) + 14364) + 1) & 0x3F;
    result = SGDGetUserSessionState(v57, v56, v58, v59);
    *(_DWORD *)(result + 14364) = v48;
  }
  return result;
}

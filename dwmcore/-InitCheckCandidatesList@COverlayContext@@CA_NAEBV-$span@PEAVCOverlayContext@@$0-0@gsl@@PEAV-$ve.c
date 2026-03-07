char __fastcall COverlayContext::InitCheckCandidatesList(_QWORD *a1, _QWORD *a2)
{
  __int64 *v2; // r14
  _QWORD *v3; // r12
  char v4; // di
  __int64 v5; // rax
  __int64 *v6; // r13
  __int64 v7; // rsi
  unsigned int v8; // r15d
  __int64 v9; // rdx
  _QWORD *v10; // r13
  COverlayContext **v11; // rsi
  COverlayContext **v12; // r15
  COverlayContext *v13; // r14
  char v14; // bl
  _BYTE *v15; // rcx
  void *v16; // rcx
  bool v17; // zf
  __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned int v21; // esi
  int v22; // r14d
  unsigned int v23; // r15d
  const struct COverlayContext::OverlayPlaneInfo *v24; // rbx
  const struct COverlayContext::OverlayPlaneInfo **v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // rsi
  __int64 *v28; // rsi
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r10
  __int64 v35; // r8
  _BYTE *v36; // rbx
  char v37; // [rsp+20h] [rbp-E0h]
  _QWORD *v38; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v39; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v40[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-B8h] BYREF
  int v42; // [rsp+50h] [rbp-B0h]
  char v43; // [rsp+54h] [rbp-ACh]
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h]
  __m128i v46; // [rsp+68h] [rbp-98h]
  _BYTE *v47; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v48; // [rsp+A0h] [rbp-60h]
  _BYTE **v49; // [rsp+A8h] [rbp-58h]
  _BYTE v50[128]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v51; // [rsp+130h] [rbp+30h] BYREF
  _BYTE *v52; // [rsp+138h] [rbp+38h]
  __int64 *v53; // [rsp+140h] [rbp+40h]
  _BYTE v54[128]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v55; // [rsp+1C8h] [rbp+C8h] BYREF

  v2 = (__int64 *)a1[1];
  v47 = v50;
  v39 = a2;
  v48 = v50;
  v3 = a2;
  v38 = a1;
  v49 = &v51;
  v4 = 1;
  v5 = *a1;
  v37 = 0;
  v41 = 0LL;
  v42 = 0;
  v6 = &v2[v5];
  v43 = 0;
  if ( v2 != v6 )
  {
    do
    {
      v7 = *v2;
      v8 = 0;
      *(_BYTE *)(v7 + 11328) = *(_BYTE *)(*v2 + 11306);
      *(_QWORD *)(v7 + 11316) = 0LL;
      *(_DWORD *)(v7 + 11324) = 0;
      while ( 1 )
      {
        v9 = *(_QWORD *)(v7 + 88);
        if ( v8 >= -1227133513 * (unsigned int)((*(_QWORD *)(v7 + 96) - v9) >> 5) )
          break;
        v19 = 224LL * v8;
        *(_DWORD *)(v19 + v9 + 212) = v8;
        v20 = v19 + *(_QWORD *)(v7 + 88);
        ++v8;
        *(_QWORD *)detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     &v47,
                     (v48 - v47) >> 3) = v20;
      }
      ++v2;
    }
    while ( v2 != v6 );
    v3 = v39;
  }
  v10 = v38;
  while ( ((v48 - v47) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    gsl::span<_LUID,-1>::span<_LUID,-1>(v40, &v47);
    v21 = v40[0];
    v22 = -1;
    if ( v40[0] )
    {
      v22 = 0;
      v23 = 1;
      if ( LODWORD(v40[0]) > 1 )
      {
        do
        {
          v24 = *(const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                      v40,
                                                                      v22);
          v25 = (const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                     v40,
                                                                     v23);
          if ( COverlayContext::IsHigherProprity(*v25, v24) )
            v22 = v23;
          ++v23;
        }
        while ( v23 < v21 );
      }
    }
    v26 = *(__int64 **)&v47[8 * v22];
    v27 = *v26;
    v46 = *(__m128i *)(*v26 + 44);
    if ( (_mm_srli_si128(v46, 8).m128i_i32[1] & 0x2000) != 0 )
      v28 = &v41;
    else
      v28 = (__int64 *)(v27 + 11316);
    if ( *(_DWORD *)v28 < (unsigned int)(v46.m128i_i32[0] - 1)
      && (*((_BYTE *)v26 + 176)
        ? *((_DWORD *)v28 + 2) < v46.m128i_i32[2]
        : *((_DWORD *)v28 + 1) < (unsigned int)(v46.m128i_i32[1] - 1)) )
    {
      if ( *v10 <= 1uLL || (gsl::span<_LUID,-1>::span<_LUID,-1>(&v44, v3), v30 = v45, v31 = v45 + 8 * v44, v45 == v31) )
      {
LABEL_45:
        v32 = 0LL;
        v33 = (__int64)(v3[1] - *v3) >> 3;
        if ( (_DWORD)v33 )
        {
          v34 = *(_QWORD *)&v47[8 * v22];
          do
          {
            v35 = *(_QWORD *)(*v3 + 8 * v32);
            if ( *(_QWORD *)v34 == *(_QWORD *)v35 && *(_DWORD *)(v34 + 212) < *(_DWORD *)(v35 + 212) )
              break;
            v32 = (unsigned int)(v32 + 1);
          }
          while ( (_DWORD)v32 != (_DWORD)v33 );
        }
        v36 = v47;
        *(_QWORD *)detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     v3,
                     v32) = *(_QWORD *)&v36[8 * v22];
        ++*(_DWORD *)v28;
        if ( *(_BYTE *)(*(_QWORD *)&v47[8 * v22] + 176LL) )
          ++*((_DWORD *)v28 + 2);
        else
          ++*((_DWORD *)v28 + 1);
      }
      else
      {
        while ( v26[2] != *(_QWORD *)(*(_QWORD *)v30 + 16LL) )
        {
          v30 += 8LL;
          if ( v30 == v31 )
            goto LABEL_45;
        }
      }
    }
    v38 = &v47[8 * v22];
    detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
      &v47,
      &v39,
      &v38);
  }
  v11 = (COverlayContext **)v10[1];
  v12 = &v11[*v10];
  if ( v11 == v12 )
  {
    v14 = 0;
  }
  else
  {
    do
    {
      v13 = *v11;
      v51 = v54;
      v52 = v54;
      v53 = &v55;
      gsl::span<_LUID,-1>::span<_LUID,-1>(&v44, v3);
      COverlayContext::GetContextCandidates(v13, &v44, &v51);
      gsl::span<_LUID,-1>::span<_LUID,-1>(v40, &v51);
      COverlayContext::DeriveDesktopPlaneAttributes(v13);
      v14 = v37;
      if ( *((_BYTE *)v13 + 11024) )
      {
        v14 = v37;
        if ( *((_BYTE *)v13 + 11025) )
          v14 = 1;
        v37 = v14;
      }
      v15 = v51;
      if ( (v52 - v51) >> 3 )
      {
        detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
          &v51,
          0LL);
        v15 = v51;
      }
      v51 = 0LL;
      if ( v15 == v54 )
        v15 = 0LL;
      operator delete(v15);
      ++v11;
    }
    while ( v11 != v12 );
  }
  if ( ((v3[1] - *v3) & 0xFFFFFFFFFFFFFFF8uLL) == 0 && !v14 )
    v4 = 0;
  if ( (v48 - v47) >> 3 )
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
      &v47,
      0LL);
  v16 = v47;
  v17 = v47 == v50;
  v47 = 0LL;
  if ( v17 )
    v16 = 0LL;
  operator delete(v16);
  return v4;
}

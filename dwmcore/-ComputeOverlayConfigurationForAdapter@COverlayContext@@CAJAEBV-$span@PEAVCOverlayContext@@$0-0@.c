__int64 __fastcall COverlayContext::ComputeOverlayConfigurationForAdapter(_QWORD *a1)
{
  COverlayContext **v1; // rbx
  COverlayContext **v3; // rsi
  unsigned int v4; // r12d
  char v6; // r14
  unsigned int v7; // ebx
  char i; // al
  _QWORD *v9; // rbx
  _QWORD *v10; // rsi
  COverlayContext **v11; // rsi
  COverlayContext **v12; // r15
  COverlayContext *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // r13
  _BYTE **v16; // rsi
  _BYTE **v17; // r13
  _BYTE *v18; // rbx
  __int64 *v19; // rdi
  _BYTE *v20; // rcx
  const struct CCompositionSurfaceInfo *v21; // r12
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // [rsp+28h] [rbp-89h] BYREF
  _BYTE **v29; // [rsp+30h] [rbp-81h]
  _BYTE v30[16]; // [rsp+38h] [rbp-79h] BYREF
  _BYTE *v31; // [rsp+48h] [rbp-69h] BYREF
  _BYTE *v32; // [rsp+50h] [rbp-61h]
  __int64 *v33; // [rsp+58h] [rbp-59h]
  _BYTE v34[128]; // [rsp+60h] [rbp-51h] BYREF
  __int64 v35; // [rsp+E0h] [rbp+2Fh] BYREF

  v1 = (COverlayContext **)a1[1];
  v3 = &v1[*a1];
  if ( v1 == v3 )
    return 0LL;
  v4 = 0;
  while ( !COverlayContext::HaveOverlayCandidatesChanged(*v1) )
  {
    if ( ++v1 == v3 )
      return 0LL;
  }
  v31 = v34;
  v6 = 0;
  v32 = v34;
  v7 = 0;
  v33 = &v35;
  for ( i = COverlayContext::InitCheckCandidatesList(a1, &v31);
        i && v7 <= 8;
        i = COverlayContext::TrimCheckCandidatesList(a1, &v31) )
  {
    gsl::span<_LUID,-1>::span<_LUID,-1>(v30, &v31);
    if ( (unsigned __int8)COverlayContext::CheckMultiPlaneOverlaySupport(a1, v30) )
    {
      v6 = 1;
      break;
    }
    ++v7;
  }
  v9 = (_QWORD *)a1[1];
  v10 = &v9[*a1];
  if ( v9 != v10 )
  {
    if ( v6 )
    {
      do
        COverlayContext::PushCandidates(*v9++, &v31);
      while ( v9 != v10 );
    }
    else
    {
      do
        COverlayContext::PushCandidates(*v9++, 0LL);
      while ( v9 != v10 );
    }
  }
  v11 = (COverlayContext **)a1[1];
  v12 = &v11[*a1];
  if ( v11 != v12 )
  {
    do
    {
      v13 = *v11;
      v14 = *((_QWORD *)*v11 + 913);
      v15 = *((_QWORD *)*v11 + 914);
      while ( v14 != v15 )
      {
        v21 = *(const struct CCompositionSurfaceInfo **)(v14 + 16);
        if ( (unsigned int)COverlayContext::FindOverlayCandidateIndex(
                             v13,
                             *(const struct CVisual **)(v14 + 8),
                             v21,
                             *(_QWORD *)(v14 + 24)) == -1 )
        {
          (*(void (__fastcall **)(const struct CCompositionSurfaceInfo *, _QWORD))(*(_QWORD *)v21 + 264LL))(
            v21,
            *(_QWORD *)(v14 + 24));
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v14 + 16) + 408LL))(*(_QWORD *)(v14 + 16), 2LL);
          *((_BYTE *)v13 + 11310) = 1;
        }
        v14 += 224LL;
      }
      ++v11;
    }
    while ( v11 != v12 );
    v4 = 0;
  }
  v16 = (_BYTE **)a1[1];
  v17 = &v16[*a1];
  v29 = v17;
LABEL_19:
  if ( v16 != v17 )
  {
    v18 = *v16;
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(*v16 + 7304);
    v19 = (__int64 *)(v18 + 88);
    if ( *((_QWORD *)v18 + 12) == *((_QWORD *)v18 + 11) )
      goto LABEL_21;
    v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v18 + 176LL))(*(_QWORD *)v18);
    while ( 1 )
    {
      while ( 1 )
      {
        v23 = *v19;
        v24 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)v18 + 12) - *((_QWORD *)v18 + 11)) >> 5);
        if ( v4 >= (unsigned int)v24 )
        {
          v17 = v29;
          v4 = 0;
          if ( v24 )
            detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
              v18 + 7304,
              v18 + 88);
          if ( v18[11024] && !v18[11296] )
            v18[11310] = 1;
LABEL_21:
          COverlayContext::UpdateAlphaMode((COverlayContext *)v18);
          ++v16;
          goto LABEL_19;
        }
        v25 = 224LL * v4;
        if ( !*(_BYTE *)(v25 + v23 + 180) )
          break;
LABEL_39:
        ++v4;
      }
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v25 + v23 + 16) + 256LL))(
             *(_QWORD *)(v25 + v23 + 16),
             *(_QWORD *)(v25 + v23 + 24),
             v22) >= 0 )
      {
        v27 = *(_QWORD *)(v25 + v23 + 16);
        *(_WORD *)(v25 + v23 + 180) = 257;
        LOBYTE(v26) = 1;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 408LL))(v27, 2LL, v26);
        v18[11310] = 1;
        goto LABEL_39;
      }
      v28 = v25 + *v19;
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
        v18 + 88,
        v30,
        &v28);
    }
  }
  v20 = v31;
  if ( (v32 - v31) >> 3 )
  {
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
      &v31,
      0LL);
    v20 = v31;
  }
  v31 = 0LL;
  if ( v20 == v34 )
    v20 = 0LL;
  operator delete(v20);
  return 0LL;
}

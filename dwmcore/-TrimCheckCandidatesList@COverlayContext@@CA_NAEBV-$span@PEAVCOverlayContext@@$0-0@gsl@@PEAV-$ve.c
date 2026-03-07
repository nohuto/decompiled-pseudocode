char __fastcall COverlayContext::TrimCheckCandidatesList(_QWORD *a1, __int64 *a2)
{
  char v2; // di
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rax
  COverlayContext **v8; // r15
  char v9; // si
  COverlayContext **i; // r12
  COverlayContext *v11; // r13
  char v12; // bl
  _BYTE *v13; // rcx
  __int64 v14; // r8
  _QWORD v16[2]; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-89h] BYREF
  _BYTE *v18; // [rsp+40h] [rbp-79h] BYREF
  _BYTE *v19; // [rsp+48h] [rbp-71h]
  __int64 *v20; // [rsp+50h] [rbp-69h]
  _BYTE v21[128]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+1Fh] BYREF

  v2 = 0;
  if ( ((a2[1] - *a2) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    gsl::span<_LUID,-1>::span<_LUID,-1>((gsl::details *)v16, a2);
    v17[0] = *a2 + 8LL * (int)COverlayContext::FindLowestPriorityOverlayCandidateIndex((gsl::details *)v16);
    detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
      a2,
      v16,
      v17);
LABEL_10:
    v8 = (COverlayContext **)a1[1];
    v9 = 0;
    for ( i = &v8[*a1]; v8 != i; ++v8 )
    {
      v11 = *v8;
      v18 = v21;
      v19 = v21;
      v20 = &v22;
      gsl::span<_LUID,-1>::span<_LUID,-1>((gsl::details *)v16, a2);
      COverlayContext::GetContextCandidates((__int64)v11, (__int64)v16, &v18);
      v12 = *((_BYTE *)v11 + 11328);
      gsl::span<_LUID,-1>::span<_LUID,-1>((gsl::details *)v17, (__int64 *)&v18);
      COverlayContext::DeriveDesktopPlaneAttributes(v11, v17, v12);
      if ( *((_BYTE *)v11 + 11024) && *((_BYTE *)v11 + 11025) )
        v9 = 1;
      v13 = v18;
      v14 = (v19 - v18) >> 3;
      if ( v14 )
      {
        detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)&v18,
          0LL,
          v14);
        v13 = v18;
      }
      v18 = 0LL;
      if ( v13 == v21 )
        v13 = 0LL;
      operator delete(v13);
    }
    if ( ((a2[1] - *a2) & 0xFFFFFFFFFFFFFFF8uLL) != 0 || v9 )
      return 1;
  }
  else
  {
    v5 = (__int64 *)a1[1];
    v6 = &v5[*a1];
    while ( v5 != v6 )
    {
      v7 = *v5;
      if ( *(_BYTE *)(*v5 + 11024) && *(_BYTE *)(v7 + 11025) )
      {
        *(_BYTE *)(v7 + 11328) = 0;
        goto LABEL_10;
      }
      ++v5;
    }
  }
  return v2;
}

__int64 __fastcall CRenderingTechnique::CreateShaderBodies(CRenderingTechnique *this)
{
  unsigned int v2; // esi
  __int64 v3; // rax
  unsigned int i; // r9d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE *v8; // rcx
  int v9; // r8d
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  int EffectShaderBody; // eax
  unsigned int v13; // ecx
  int v14; // ebx
  _BYTE *v15; // rcx
  __int64 v16; // rax
  _BYTE *v17; // rcx
  unsigned __int64 v18; // r8
  int MaskShaderBody; // eax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  _BYTE *v23; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  _BYTE *v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  int v28; // [rsp+60h] [rbp-A0h]
  _BYTE *v29; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v30; // [rsp+78h] [rbp-88h]
  char *v31; // [rsp+80h] [rbp-80h]
  _BYTE v32[48]; // [rsp+88h] [rbp-78h] BYREF
  char v33; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE *v34; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v35; // [rsp+C8h] [rbp-38h]
  __int64 *v36; // [rsp+D0h] [rbp-30h]
  _BYTE v37[128]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v38; // [rsp+158h] [rbp+58h] BYREF

  v29 = v32;
  v2 = 0;
  v30 = v32;
  v31 = &v33;
  v3 = *((unsigned int *)this + 19);
  v27 = 0LL;
  v28 = 0;
  v23 = v32;
  if ( v3 )
  {
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::insert(
      (unsigned int)&v29,
      (unsigned int)&v26,
      (unsigned int)&v23,
      v3,
      (__int64)&v27);
  }
  else
  {
    v26 = v32;
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::erase(
      &v29,
      &v27,
      &v26,
      &v23);
  }
  for ( i = 0; i < *((_DWORD *)this + 19); *(_DWORD *)&v8[4 * v7 + 8] = v9 )
  {
    v5 = i++;
    v6 = 44 * v5;
    v7 = 3 * v5;
    v8 = v29;
    v9 = *(_DWORD *)((char *)this + v6 + 92);
    *(_QWORD *)&v29[4 * v7] = *(_QWORD *)((char *)this + v6 + 84);
  }
  v25 = 0LL;
  v34 = v37;
  v28 = 0;
  v35 = v37;
  v36 = &v38;
  v27 = *((_QWORD *)this + 1);
  v24 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(&v24, &v27);
  CFragmentIterator::FindFirst((CFragmentIterator *)&v24);
  while ( 1 )
  {
    v10 = v24;
    if ( !((__int64)(*((_QWORD *)&v24 + 1) - v24) >> 4) )
      break;
    v11 = *(_QWORD **)(*((_QWORD *)&v24 + 1) - 16LL);
    if ( *v11 )
    {
      EffectShaderBody = CRenderingTechniqueFragment::CreateEffectShaderBody(v11, (int)&v34, (__int64)&v29);
      v14 = EffectShaderBody;
      v2 = EffectShaderBody;
      if ( EffectShaderBody < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, EffectShaderBody, 0x1D9u, 0LL);
        goto LABEL_25;
      }
    }
    else
    {
      MaskShaderBody = CRenderingTechniqueFragment::CreateMaskShaderBody((__int64)v11, (int)&v34, (__int64)&v29);
      v14 = MaskShaderBody;
      v2 = MaskShaderBody;
      if ( MaskShaderBody < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, MaskShaderBody, 0x1DEu, 0LL);
LABEL_25:
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v14, 0x12Bu, 0LL);
        v10 = v24;
        break;
      }
    }
    v2 = v14;
    *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                 &v34,
                 (v35 - v34) >> 3) = v11;
    CFragmentIterator::MoveNext((CFragmentIterator *)&v24);
  }
  if ( v10 )
  {
    std::_Deallocate<16,0>(v10, (v25 - v10) & 0xFFFFFFFFFFFFFFF0uLL);
    v25 = 0LL;
    v24 = 0LL;
  }
  v15 = v34;
  v16 = (v35 - v34) >> 3;
  if ( v16 )
    v35 -= 8 * v16;
  v34 = 0LL;
  if ( v15 == v37 )
    v15 = 0LL;
  operator delete(v15);
  v17 = v29;
  v18 = 0xAAAAAAAAAAAAAAABuLL * ((v30 - v29) >> 2);
  if ( v18 )
  {
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::clear_region(
      &v29,
      0LL,
      v18);
    v17 = v29;
  }
  v29 = 0LL;
  if ( v17 == v32 )
    v17 = 0LL;
  operator delete(v17);
  return v2;
}

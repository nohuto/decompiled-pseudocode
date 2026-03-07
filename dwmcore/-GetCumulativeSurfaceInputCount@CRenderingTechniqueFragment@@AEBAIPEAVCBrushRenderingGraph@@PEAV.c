__int64 __fastcall CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
        CRenderingTechniqueFragment *a1,
        const struct CBrushRenderingGraph *a2,
        __int64 *a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 i; // r9
  __int64 v13; // rax
  int v14; // ecx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+28h] [rbp-50h]

  v3 = 0;
  v4 = 0;
  v5 = (__int64)(*((_QWORD *)a1 + 5) - *((_QWORD *)a1 + 4)) >> 4;
  if ( (_DWORD)v5 )
  {
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(v9 + *((_QWORD *)a1 + 4) + 8);
      if ( v10 )
      {
        v3 += CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(v10, a2, a3);
      }
      else
      {
        CRenderingTechniqueFragment::GetSurfaceDescription(
          a1,
          a2,
          v4,
          (struct CRenderingTechniqueFragment::SurfaceDescription *)&v17);
        v11 = a3[1];
        for ( i = *a3;
              i != v11 && !(unsigned __int8)CRenderingTechniqueFragment::SurfaceDescription::operator==(i, &v17);
              i = v16 + 12 )
        {
          ;
        }
        if ( v11 == i )
        {
          v13 = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::reserve_region(
                  a3,
                  0xAAAAAAAAAAAAAAABuLL * ((v11 - *a3) >> 2));
          ++v3;
          v14 = v18;
          *(_QWORD *)v13 = v17;
          *(_DWORD *)(v13 + 8) = v14;
        }
      }
      ++v4;
      v9 += 16LL;
    }
    while ( v4 < (unsigned int)v5 );
  }
  return v3;
}

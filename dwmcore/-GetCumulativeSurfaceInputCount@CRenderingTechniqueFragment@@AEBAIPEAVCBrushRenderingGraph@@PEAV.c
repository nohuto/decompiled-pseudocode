/*
 * XREFs of ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002D870
 * Callers:
 *     ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x18002D7A8 (-NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002D870 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1802B6788 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 * Callees:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002D870 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x18002D968 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x18002DABC (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@.c)
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x18002DBE4 (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

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

/*
 * XREFs of ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x18002D7A8
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x18002D764 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800259D0 (-clear_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vlibe.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002D870 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

bool __fastcall CRenderingTechniqueFragment::NeedsToBeBrokenUp(
        CRenderingTechniqueFragment *this,
        struct CBrushRenderingGraph *a2)
{
  unsigned int CumulativeSurfaceInputCount; // eax
  __int64 v3; // rdx
  _BYTE *v4; // rcx
  bool v5; // bl
  unsigned __int64 v6; // r8
  _BYTE *v8; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE *v9; // [rsp+28h] [rbp-D8h]
  char *v10; // [rsp+30h] [rbp-D0h]
  _BYTE v11[192]; // [rsp+38h] [rbp-C8h] BYREF
  char v12; // [rsp+F8h] [rbp-8h] BYREF

  v8 = v11;
  v9 = v11;
  v10 = &v12;
  CumulativeSurfaceInputCount = CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(this, a2, &v8);
  v4 = v8;
  v5 = CumulativeSurfaceInputCount > 4;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 2);
  if ( v6 )
  {
    detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v8,
      v3,
      v6);
    v4 = v8;
  }
  v8 = 0LL;
  if ( v4 == v11 )
    v4 = 0LL;
  operator delete(v4);
  return v5;
}

/*
 * XREFs of ??1CEdgeFlagsMap@@QEAA@XZ @ 0x18019C7F8
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094FF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180163A40 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18019CF90 (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_p.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019D084 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 */

void __fastcall CEdgeFlagsMap::~CEdgeFlagsMap(CEdgeFlagsMap *this, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v4; // rcx
  unsigned __int64 v5; // r8
  CEdgeFlagsMap *v6; // rcx
  CEdgeFlagsMap *v7; // rcx

  v2 = (__int64 *)((char *)this + 240);
  v4 = (__int64 *)*((_QWORD *)this + 30);
  v5 = (v2[1] - (__int64)v4) >> 3;
  if ( v5 )
  {
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
      v2,
      a2,
      v5);
    v4 = (__int64 *)*v2;
  }
  *v2 = 0LL;
  if ( v4 == v2 + 3 )
    v4 = 0LL;
  operator delete(v4);
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 88);
  v6 = (CEdgeFlagsMap *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v6 == (CEdgeFlagsMap *)((char *)this + 112) )
    v6 = 0LL;
  operator delete(v6);
  v7 = *(CEdgeFlagsMap **)this;
  if ( (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 2 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(this);
    v7 = *(CEdgeFlagsMap **)this;
  }
  *(_QWORD *)this = 0LL;
  if ( v7 == (CEdgeFlagsMap *)((char *)this + 24) )
    v7 = 0LL;
  operator delete(v7);
}

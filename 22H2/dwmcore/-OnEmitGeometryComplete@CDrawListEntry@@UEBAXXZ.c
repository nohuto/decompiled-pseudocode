/*
 * XREFs of ?OnEmitGeometryComplete@CDrawListEntry@@UEBAXXZ @ 0x1801A21D0
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UFrameData@CDrawListEntry@@@2@V?$basic_iterator@$$CBUFrameData@CDrawListEntry@@@2@@Z @ 0x1801A2620 (-erase@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntry@@$00$.c)
 */

void __fastcall CDrawListEntry::OnEmitGeometryComplete(CDrawListEntry *this)
{
  __int64 *v1; // rcx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = (__int64 *)((char *)this + 48);
  v2 = *v1;
  detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::erase(
    v1,
    &v3,
    &v2);
}

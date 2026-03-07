__int64 __fastcall CDesktopTree::CalcOcclusion(__int64 a1, __int64 a2, __int64 a3)
{
  detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear(a1 + 4816);
  return CVisualTree::CalcOcclusion(a1, a2, a3);
}

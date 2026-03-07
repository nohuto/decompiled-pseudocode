void __fastcall CDesktopTree::AddCVIToPreRenderList(CDesktopTree *this, struct CVIRenderList *a2)
{
  __int64 v3; // rax

  v3 = detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::reserve_region(
         (char *)this + 4816,
         0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 603) - *((_QWORD *)this + 602)) >> 3));
  *(_OWORD *)v3 = *(_OWORD *)a2;
  *(_OWORD *)(v3 + 16) = *((_OWORD *)a2 + 1);
  *(_QWORD *)(v3 + 32) = *((_QWORD *)a2 + 4);
}

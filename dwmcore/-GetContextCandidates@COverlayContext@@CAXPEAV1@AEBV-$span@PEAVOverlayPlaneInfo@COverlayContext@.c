_QWORD *__fastcall COverlayContext::GetContextCandidates(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  _QWORD *result; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi

  v3 = *(_QWORD **)(a2 + 8);
  result = *(_QWORD **)a2;
  v7 = &v3[*(_QWORD *)a2];
  while ( v3 != v7 )
  {
    v8 = (_QWORD *)*v3;
    if ( *(_QWORD *)*v3 == a1 )
    {
      result = (_QWORD *)detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                           a3,
                           (__int64)(a3[1] - *a3) >> 3);
      *result = v8;
    }
    ++v3;
  }
  return result;
}

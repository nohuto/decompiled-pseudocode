_QWORD *__fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::erase_unchecked(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v5; // rbx
  _QWORD *result; // rax

  v5 = 0xCCCCCCCCCCCCCCCDuLL * ((*a3 - *a1) >> 3);
  detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v5,
    0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*a4 - *a3) >> 3));
  result = a2;
  *a2 = *a1 + 40 * v5;
  return result;
}

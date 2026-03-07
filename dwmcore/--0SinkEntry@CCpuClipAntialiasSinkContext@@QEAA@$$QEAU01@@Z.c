_QWORD *__fastcall CCpuClipAntialiasSinkContext::SinkEntry::SinkEntry(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 *v4; // rdi

  v2 = *a2;
  v3 = a1 + 1;
  *a2 = 0LL;
  v4 = a2 + 1;
  *a1 = v2;
  a1[1] = a1 + 4;
  a1[2] = a1 + 4;
  a1[3] = a1 + 54;
  if ( a2 + 1 != a1 + 1
    && !detail::expandable_buffer_base<CCpuClipAntialiasSinkContext::SinkRenderParameters,10>::swap<10>(a1 + 1, v4) )
  {
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::swap_generic<detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>>(
      v3,
      v4);
  }
  detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(v4);
  return a1;
}

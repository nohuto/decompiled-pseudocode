__int64 **__fastcall std::move<std::move_iterator<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>,detail::back_insert_iterator_unchecked<detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>>>(
        __int64 **a1,
        __int64 **a2,
        __int64 **a3,
        __int64 *a4)
{
  __int64 *v4; // rbx
  __int64 *v6; // rsi
  __int64 **result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a2;
  v6 = *a3;
  while ( v4 != v6 )
  {
    v9 = a4[1];
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::insert_unchecked<CCpuClipAntialiasSinkContext::SinkRenderParameters>(
      a4,
      &v10,
      &v9,
      v4);
    v4 += 5;
  }
  result = a1;
  *a1 = a4;
  return result;
}

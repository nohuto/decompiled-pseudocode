__int64 __fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::swap_generic<detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v2; // r9
  __int64 *v4; // rcx
  __int64 v6; // rax
  __int64 *v7; // r10
  __int64 *v8; // rdx
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 *v13; // [rsp+50h] [rbp+28h] BYREF
  __int64 *v14; // [rsp+58h] [rbp+30h] BYREF
  __int64 *v15; // [rsp+60h] [rbp+38h] BYREF
  __int64 *v16; // [rsp+68h] [rbp+40h] BYREF

  v2 = (__int64 *)a2[1];
  v4 = (__int64 *)*a2;
  v6 = (__int64)v2 - *a2;
  v7 = (__int64 *)a1[1];
  v8 = (__int64 *)*a1;
  if ( 0xCCCCCCCCCCCCCCCDuLL * (((__int64)v7 - *a1) >> 3) <= 0xCCCCCCCCCCCCCCCDuLL * (v6 >> 3) )
  {
    v13 = v4;
    v15 = v8;
    v14 = v7;
    std::_Swap_ranges_unchecked<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>,detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>(
      &v16,
      &v15,
      &v14,
      (__int64 *)&v13);
    v9 = v16;
    v13 = (__int64 *)a2[1];
    v14 = v16;
    std::move<std::move_iterator<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>,detail::back_insert_iterator_unchecked<detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>>>(
      &v15,
      &v14,
      &v13,
      a1);
    v10 = (__int64 *)a2[1];
    v11 = a2;
  }
  else
  {
    v13 = (__int64 *)*a1;
    v14 = v2;
    v15 = v4;
    std::_Swap_ranges_unchecked<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>,detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>(
      &v16,
      &v15,
      &v14,
      (__int64 *)&v13);
    v9 = v16;
    v13 = (__int64 *)a1[1];
    v14 = v16;
    std::move<std::move_iterator<detail::basic_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters>>,detail::back_insert_iterator_unchecked<detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>>>(
      &v15,
      &v14,
      &v13,
      a2);
    v10 = (__int64 *)a1[1];
    v11 = a1;
  }
  v13 = v10;
  v14 = v9;
  return detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::erase_unchecked(
           v11,
           &v15,
           &v14,
           &v13);
}

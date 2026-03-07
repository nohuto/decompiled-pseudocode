_QWORD *__fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::insert_unchecked<CCpuClipAntialiasSinkContext::SinkRenderParameters>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v5; // rbx
  CCpuClipAntialiasSinkContext::SinkRenderParameters *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *result; // rax

  v5 = 0xCCCCCCCCCCCCCCCDuLL * ((*a3 - *a1) >> 3);
  v8 = detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         v5,
         1uLL);
  v9 = *a4;
  *a4 = 0LL;
  *(_QWORD *)v8 = v9;
  *((_DWORD *)v8 + 2) = *((_DWORD *)a4 + 2);
  *((_DWORD *)v8 + 3) = *((_DWORD *)a4 + 3);
  v10 = a4[2];
  a4[2] = 0LL;
  *((_QWORD *)v8 + 2) = v10;
  v11 = a4[3];
  a4[3] = 0LL;
  *((_QWORD *)v8 + 3) = v11;
  *((_BYTE *)v8 + 32) = *((_BYTE *)a4 + 32);
  *((_BYTE *)v8 + 33) = *((_BYTE *)a4 + 33);
  result = a2;
  *a2 = *a1 + 40 * v5;
  return result;
}

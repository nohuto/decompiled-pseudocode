__int64 __fastcall CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass(
        __int64 a1,
        __int16 a2,
        __int64 **a3,
        __int64 *a4)
{
  __int64 **v4; // rsi
  __int64 v7; // r8
  float v8; // xmm0_4
  unsigned __int64 v9; // rax
  float v10; // xmm1_4
  __int64 *v11; // rbx
  float v12; // r14d
  __int64 v13; // xmm6_8
  float v14; // xmm2_4
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-20h]
  char v19; // [rsp+68h] [rbp+28h]

  v4 = a3;
  LOBYTE(a3) = v19;
  std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___(
    *v4,
    v4[1],
    a3);
  v8 = FLOAT_N3_4028235e38;
  v9 = 0LL;
  v10 = FLOAT_3_4028235e38;
  LOWORD(v18) = a2;
  v11 = *v4;
  v12 = FLOAT_N3_4028235e38;
  *((float *)&v18 + 1) = FLOAT_3_4028235e38;
  v13 = v18;
  while ( 1 )
  {
    v11 = (__int64 *)*v11;
    if ( v11 == *v4 )
      break;
    v14 = *((float *)v11 + 7);
    if ( v14 <= v10 || v8 <= *((float *)v11 + 6) )
    {
      if ( v9 > 1 )
      {
        v16 = detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::reserve_region(
                a4,
                0xAAAAAAAAAAAAAAABuLL * ((a4[1] - *a4) >> 2));
        *(_QWORD *)v16 = v13;
        *(float *)(v16 + 8) = v12;
      }
      v13 = *(__int64 *)((char *)v11 + 20);
      v9 = 1LL;
      v12 = *((float *)v11 + 7);
      LODWORD(v18) = v13;
      v10 = *((float *)&v13 + 1);
      v8 = v12;
    }
    else
    {
      if ( *((float *)v11 + 6) <= v10 )
      {
        HIDWORD(v18) = *((_DWORD *)v11 + 6);
        v10 = *((float *)&v18 + 1);
        v13 = v18;
      }
      if ( v8 <= v14 )
      {
        v8 = *((float *)v11 + 7);
        v12 = v8;
      }
      ++v9;
    }
  }
  if ( v9 > 1 )
  {
    v17 = detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::reserve_region(
            a4,
            0xAAAAAAAAAAAAAAABuLL * ((a4[1] - *a4) >> 2));
    *(_QWORD *)v17 = v13;
    *(float *)(v17 + 8) = v12;
  }
  result = *a4;
  if ( a4[1] != *a4 )
  {
    LOBYTE(v7) = v19;
    return std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
             *v4,
             v4[1],
             v7);
  }
  return result;
}

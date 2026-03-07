_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _WORD *a3,
        unsigned __int16 *a4,
        float *a5,
        unsigned __int16 *a6,
        float *a7)
{
  __int64 v10; // rax
  float v11; // xmm1_4
  float v12; // xmm0_4

  *a1 = a2;
  a1[1] = 0LL;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  a1[1] = v10;
  v11 = (float)*a6 + *a7;
  v12 = (float)*a4 + *a5;
  *(_WORD *)(v10 + 16) = *a3;
  *(float *)(v10 + 24) = v11;
  *(float *)(v10 + 20) = v12;
  return a1;
}

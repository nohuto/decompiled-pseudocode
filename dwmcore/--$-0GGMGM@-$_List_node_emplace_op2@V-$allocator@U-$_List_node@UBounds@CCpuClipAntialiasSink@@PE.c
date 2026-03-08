/*
 * XREFs of ??$?0GGMGM@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@1@$$QEAG1$$QEAM12@Z @ 0x1800DF508
 * Callers:
 *     ?ProcessRenderCommands_OcclusionPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180085C98 (-ProcessRenderCommands_OcclusionPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV-$list@USinkRenderC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

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

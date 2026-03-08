/*
 * XREFs of std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___ @ 0x1800DE9C0
 * Callers:
 *     ?ProcessRenderCommands_OverlapPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEAV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180048CAC (-ProcessRenderCommands_OverlapPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV-$list@USinkRenderCom.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___ @ 0x1800DE9C0 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderComm_ea_1800DE9C0.c)
 * Callees:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___ @ 0x1800DE9C0 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderComm_ea_1800DE9C0.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__lambda_0c3994cbe405861b61e36de8c3dd15dd___ @ 0x1800DEA58 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderComm_ea_1800DEA58.c)
 */

__int64 __fastcall std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  char v3; // bl
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return *(_QWORD *)*a1;
  v7 = a2 >> 1;
  v12 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
          a1,
          a2 >> 1,
          a3);
  LOBYTE(v8) = v3;
  v9 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
         &v12,
         a2 - v7,
         v8);
  LOBYTE(v10) = v3;
  v11 = v9;
  *a1 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
          *a1,
          v12,
          v9,
          v10);
  return v11;
}

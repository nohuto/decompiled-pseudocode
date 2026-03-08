/*
 * XREFs of std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___ @ 0x180048E00
 * Callers:
 *     ?ProcessRenderCommands_OverlapPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEAV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180048CAC (-ProcessRenderCommands_OverlapPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV-$list@USinkRenderCom.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___ @ 0x180048E00 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Sort.c)
 * Callees:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___ @ 0x180048E00 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Sort.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__lambda_894843b827d9c4fe3ec8d7f4d554a50c___ @ 0x180048E90 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Merg.c)
 */

__int64 __fastcall std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  char v3; // bl
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return *(_QWORD *)*a1;
  v7 = a2 >> 1;
  v11 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___(
          a1,
          a2 >> 1,
          a3);
  LOBYTE(v8) = v3;
  v9 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___(
         &v11,
         a2 - v7,
         v8);
  *a1 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__lambda_894843b827d9c4fe3ec8d7f4d554a50c___(
          *a1,
          v11,
          v9);
  return v10;
}

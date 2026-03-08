/*
 * XREFs of _lambda_0c3994cbe405861b61e36de8c3dd15dd_::operator() @ 0x1800DEB08
 * Callers:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__lambda_0c3994cbe405861b61e36de8c3dd15dd___ @ 0x1800DEA58 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderComm_ea_1800DEA58.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_0c3994cbe405861b61e36de8c3dd15dd_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(float *)(a3 + 12) <= *(float *)(a2 + 8) || *(float *)(a2 + 12) <= *(float *)(a3 + 8) )
    return *(float *)(a3 + 8) > *(float *)(a2 + 8);
  else
    return *(_DWORD *)a2 < *(_DWORD *)a3;
}

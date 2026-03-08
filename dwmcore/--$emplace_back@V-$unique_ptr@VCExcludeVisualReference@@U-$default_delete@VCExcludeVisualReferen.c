/*
 * XREFs of ??$emplace_back@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@@Z @ 0x180214A78
 * Callers:
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180214AB4 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     ?AppendVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180214BB4 (-AppendVisuals@CVisualGroup@@QEAAJV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CExcludeVisualReference>>::emplace_back<std::unique_ptr<CExcludeVisualReference>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  _QWORD *result; // rax

  v3 = (__int64 *)a1[1];
  if ( v3 == (__int64 *)a1[2] )
    return std::vector<std::unique_ptr<CExcludeVisualReference>>::_Emplace_reallocate<std::unique_ptr<CExcludeVisualReference>>(
             a1,
             (__int64)v3,
             a2);
  v4 = *a2;
  *a2 = 0LL;
  *v3 = v4;
  result = (_QWORD *)a1[1];
  a1[1] = (__int64)(result + 1);
  return result;
}

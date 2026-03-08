/*
 * XREFs of Simulator_DuplicateObjData @ 0x1C0049150
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0048FB0 (Simulator_CallbackWorker.c)
 * Callees:
 *     DupObjData @ 0x1C004AF04 (DupObjData.c)
 *     FreeObjData @ 0x1C004B544 (FreeObjData.c)
 */

__int64 __fastcall Simulator_DuplicateObjData(__int64 a1)
{
  __int64 v2; // rdi

  if ( !a1 )
    return 3221225485LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return 3221225485LL;
  FreeObjData(*(_QWORD *)(a1 + 16));
  return DupObjData(gpheapGlobal, v2, *(_QWORD *)(a1 + 24));
}

/*
 * XREFs of Simulator_DuplicateObjData @ 0x1C0063AB0
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0063910 (Simulator_CallbackWorker.c)
 * Callees:
 *     FreeObjData @ 0x1C00033D0 (FreeObjData.c)
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
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
  return DupObjData((struct _SLIST_ENTRY *)gpheapGlobal, v2, *(_QWORD *)(a1 + 24));
}

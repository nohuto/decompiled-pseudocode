/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QEAAPEAU1@PEAU1@@Z @ 0x1C01B86FC
 * Callers:
 *     CreateInputContext @ 0x1C00CF480 (CreateInputContext.c)
 *     FreeInputContext @ 0x1C00D7430 (FreeInputContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 2);
  if ( a2 )
    *(_QWORD *)(v2 + 16) = *(_QWORD *)(a2 + 48);
  else
    *(_QWORD *)(v2 + 16) = 0LL;
  *a1 = a2;
  return a2;
}

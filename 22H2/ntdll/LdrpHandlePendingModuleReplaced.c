/*
 * XREFs of LdrpHandlePendingModuleReplaced @ 0x180067C44
 * Callers:
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 *     LdrpFreeLoadContext @ 0x180067BA4 (LdrpFreeLoadContext.c)
 * Callees:
 *     LdrpFreeReplacedModule @ 0x180067AD8 (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x180067C80 (LdrpHandleReplacedModule.c)
 */

void __fastcall LdrpHandlePendingModuleReplaced(__int64 a1)
{
  __int64 v2; // rax
  PVOID *v3; // rcx

  if ( *(_QWORD *)(a1 + 80) )
  {
    v2 = LdrpHandleReplacedModule();
    v3 = *(PVOID **)(a1 + 80);
    if ( (PVOID *)v2 != v3 )
      LdrpFreeReplacedModule(v3);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}

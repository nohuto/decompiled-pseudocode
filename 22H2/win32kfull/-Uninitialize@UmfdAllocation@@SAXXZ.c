/*
 * XREFs of ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C00BA424
 * Callers:
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00A5BB8 (-Initialize@UmfdAllocation@@SA_NXZ.c)
 *     UmfdSessionUninitialize @ 0x1C00BA380 (UmfdSessionUninitialize.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00BA470 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall UmfdAllocation::Uninitialize(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 40);
  if ( *(_QWORD *)v1 )
  {
    NSInstrumentation::CPointerHashTable::Destroy(*(PVOID *)v1);
    *(_QWORD *)v1 = 0LL;
  }
  v2 = *(void **)(v1 + 8);
  if ( v2 )
    EngFreeMem(v2);
}

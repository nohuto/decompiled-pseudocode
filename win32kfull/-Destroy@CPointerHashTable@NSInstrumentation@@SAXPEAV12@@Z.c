/*
 * XREFs of ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0092984
 * Callers:
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C0092938 (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C00E74C4 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPointerHashTable::Destroy(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}

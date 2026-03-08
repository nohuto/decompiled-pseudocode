/*
 * XREFs of PspCompleteHardDereferenceSiloDeferred @ 0x140790620
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PspStorageEmptyArrayNonReadonly @ 0x1402FA300 (PspStorageEmptyArrayNonReadonly.c)
 */

LONG_PTR __fastcall PspCompleteHardDereferenceSiloDeferred(_QWORD *Object)
{
  __int64 v1; // rbx
  ULONG_PTR v3; // rcx

  v1 = Object[190];
  if ( v1 )
  {
    PspStorageEmptyArrayNonReadonly(Object[190], 0x20u);
    v3 = *(_QWORD *)(v1 + 512);
    if ( v3 )
      PspStorageEmptyArrayNonReadonly(v3, 0x100u);
  }
  return ObfDereferenceObject(Object);
}

/*
 * XREFs of PspCompleteHardDereferenceSiloDeferred @ 0x1407F6F10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PspStorageEmptyArrayNonReadonly @ 0x140375248 (PspStorageEmptyArrayNonReadonly.c)
 */

LONG_PTR __fastcall PspCompleteHardDereferenceSiloDeferred(_QWORD *Object)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = Object[187];
  if ( v1 )
  {
    PspStorageEmptyArrayNonReadonly(Object[187], 0x20u);
    v3 = *(_QWORD *)(v1 + 512);
    if ( v3 )
      PspStorageEmptyArrayNonReadonly(v3, 0x100u);
  }
  return ObfDereferenceObject(Object);
}

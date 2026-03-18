/*
 * XREFs of SeCreateAccessStateFromSubjectContext @ 0x1409C6B8C
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x140915DB8 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14091607C (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140347A20 (SepCreateAccessStateFromSubjectContext.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 */

__int64 __fastcall SeCreateAccessStateFromSubjectContext(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        ACCESS_MASK a4,
        GENERIC_MAPPING *a5)
{
  void *v7; // rcx
  int AccessStateFromSubjectContext; // edi

  v7 = *(void **)a1;
  if ( v7 )
    ObfReferenceObject(v7);
  ObfReferenceObject(*(PVOID *)(a1 + 16));
  AccessStateFromSubjectContext = SepCreateAccessStateFromSubjectContext((_OWORD *)a1, a2, a3, a4, a5);
  if ( AccessStateFromSubjectContext < 0 )
  {
    if ( *(_QWORD *)a1 )
      ObfDereferenceObject(*(PVOID *)a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
  }
  return (unsigned int)AccessStateFromSubjectContext;
}

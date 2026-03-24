/*
 * XREFs of SeCreateAccessStateFromSubjectContext @ 0x14091D1CC
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406556B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406A0A00 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F820 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x14086FF9C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14027C800 (SepCreateAccessStateFromSubjectContext.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
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
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)a1);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 16));
  }
  return (unsigned int)AccessStateFromSubjectContext;
}

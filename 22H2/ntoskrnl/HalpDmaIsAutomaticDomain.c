/*
 * XREFs of HalpDmaIsAutomaticDomain @ 0x14038F240
 * Callers:
 *     HalGetAdapterV3 @ 0x140829080 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140829610 (HalGetAdapterV2.c)
 * Callees:
 *     HalpDmaReferenceDomainObject @ 0x14038F4EC (HalpDmaReferenceDomainObject.c)
 *     HalpDmaDereferenceDomainObject @ 0x140512868 (HalpDmaDereferenceDomainObject.c)
 */

bool __fastcall HalpDmaIsAutomaticDomain(ULONG_PTR BugCheckParameter3)
{
  char v2; // di
  __int64 v4; // rbx

  v2 = 0;
  if ( (int)HalpDmaReferenceDomainObject(BugCheckParameter3) >= 0 )
  {
    v4 = *(_QWORD *)(BugCheckParameter3 + 56);
    HalpDmaDereferenceDomainObject(BugCheckParameter3);
    return v4 != 0;
  }
  return v2;
}

/*
 * XREFs of HalpDmaIsAutomaticDomain @ 0x14038CD80
 * Callers:
 *     HalGetAdapterV3 @ 0x140821010 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1408215A0 (HalGetAdapterV2.c)
 * Callees:
 *     HalpDmaReferenceDomainObject @ 0x14038D02C (HalpDmaReferenceDomainObject.c)
 *     HalpDmaDereferenceDomainObject @ 0x140510338 (HalpDmaDereferenceDomainObject.c)
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

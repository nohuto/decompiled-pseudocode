/*
 * XREFs of HalpRestoreDmaControllerState @ 0x140A92288
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A93580 (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpMiscIsLegacyPcType @ 0x140508E18 (HalpMiscIsLegacyPcType.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140A933D0 (HalpRestoreLegacyDmaControllerState.c)
 */

char HalpRestoreDmaControllerState()
{
  __int64 i; // rbx
  void (__fastcall *v1)(__int64); // rax
  __int64 v2; // rcx
  char result; // al

  for ( i = HalpDmaControllers; (__int64 *)i != &HalpDmaControllers; i = *(_QWORD *)i )
  {
    v1 = *(void (__fastcall **)(__int64))(i + 80);
    v2 = *(_QWORD *)(i + 64);
    *(_BYTE *)(i + 216) = 1;
    v1(v2);
  }
  result = HalpMiscIsLegacyPcType();
  if ( result )
    return HalpRestoreLegacyDmaControllerState();
  return result;
}

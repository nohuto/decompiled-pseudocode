/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x14065E63C
 * Callers:
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiDereferenceVad @ 0x1402DC3A4 (MiDereferenceVad.c)
 *     MiUnlockNestedVad @ 0x140A44F98 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  BOOL v2; // ebx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(P);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}

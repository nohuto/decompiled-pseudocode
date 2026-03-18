/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x140660C8C
 * Callers:
 *     MiReserveUserMemory @ 0x14071F450 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiDereferenceVad @ 0x14028A770 (MiDereferenceVad.c)
 *     MiUnlockNestedVad @ 0x140A47C68 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  BOOL v2; // ebx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(P);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}

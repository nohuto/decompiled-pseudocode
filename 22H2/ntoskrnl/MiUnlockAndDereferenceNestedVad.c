/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x14055BD10
 * Callers:
 *     MiFinishVadDeletion @ 0x140297440 (MiFinishVadDeletion.c)
 *     MiReserveUserMemory @ 0x140637BF0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiDereferenceVad @ 0x140297ADC (MiDereferenceVad.c)
 *     MiUnlockNestedVad @ 0x1408D9AE4 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  BOOL v2; // ebx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(P);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}

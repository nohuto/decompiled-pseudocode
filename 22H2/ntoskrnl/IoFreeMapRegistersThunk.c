/*
 * XREFs of IoFreeMapRegistersThunk @ 0x1405011D4
 * Callers:
 *     HalpAllocateMapRegisters @ 0x1409336F0 (HalpAllocateMapRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B91D4 (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV2 @ 0x14045D460 (IoFreeMapRegistersV2.c)
 *     IoFreeMapRegistersV3 @ 0x140510390 (IoFreeMapRegistersV3.c)
 */

void __fastcall IoFreeMapRegistersThunk(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  _QWORD *v3; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    IoFreeMapRegistersV2(v2, v3, v1);
  else
    IoFreeMapRegistersV3(v2, v3);
}

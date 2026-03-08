/*
 * XREFs of IoFreeMapRegistersThunk @ 0x1404FF0F4
 * Callers:
 *     HalpAllocateMapRegisters @ 0x1409307C0 (HalpAllocateMapRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B4514 (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV2 @ 0x1404554C0 (IoFreeMapRegistersV2.c)
 *     IoFreeMapRegistersV3 @ 0x14050DE60 (IoFreeMapRegistersV3.c)
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

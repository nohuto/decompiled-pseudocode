/*
 * XREFs of ExtEnvFreeMemory @ 0x14051F66C
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x14037EF04 (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x14037FF50 (IvtCreateDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x140380150 (HalpIvtCreateReservedDevice.c)
 *     IvtFreeScalableModePasidTables @ 0x14052C888 (IvtFreeScalableModePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052ED60 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x14052F540 (HsaCreateDevice.c)
 *     HsaDeleteDevice @ 0x14052F660 (HsaDeleteDevice.c)
 *     HsaFreeRemappingTableEntry @ 0x14052FEC0 (HsaFreeRemappingTableEntry.c)
 *     IvtDeleteDevice @ 0x140534BE0 (IvtDeleteDevice.c)
 *     DmrFreeRmrrTree @ 0x14053512C (DmrFreeRmrrTree.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403A4F60 (HalpMmAllocCtxFree.c)
 *     HalpMmIsInsideHalVa @ 0x140505794 (HalpMmIsInsideHalVa.c)
 */

__int64 __fastcall ExtEnvFreeMemory(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  LOBYTE(v5) = 0;
  result = HalpMmIsInsideHalVa(a2, (bool *)&v5);
  if ( (int)result >= 0 && !(_BYTE)v5 )
    return HalpMmAllocCtxFree(v3, v4);
  return result;
}

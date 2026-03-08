/*
 * XREFs of ExtEnvFreeMemory @ 0x14051D13C
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x14037B514 (HalpIvtProcessDrhdEntry.c)
 *     IvtCreateDevice @ 0x14037C4C0 (IvtCreateDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x14037C6C0 (HalpIvtCreateReservedDevice.c)
 *     IvtFreeScalableModePasidTables @ 0x14052A358 (IvtFreeScalableModePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052C890 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x14052D070 (HsaCreateDevice.c)
 *     HsaDeleteDevice @ 0x14052D190 (HsaDeleteDevice.c)
 *     HsaFreeRemappingTableEntry @ 0x14052D9F0 (HsaFreeRemappingTableEntry.c)
 *     IvtDeleteDevice @ 0x140532710 (IvtDeleteDevice.c)
 *     DmrFreeRmrrTree @ 0x140532C5C (DmrFreeRmrrTree.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpMmIsInsideHalVa @ 0x1405036B4 (HalpMmIsInsideHalVa.c)
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

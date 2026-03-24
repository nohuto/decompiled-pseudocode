/*
 * XREFs of MmAllocateContiguousNodeMemory @ 0x1402E7FF0
 * Callers:
 *     HalAllocateCommonBufferExV2 @ 0x140380C90 (HalAllocateCommonBufferExV2.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A0AF4 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpAllocateCR3Root @ 0x1403CB3C8 (HalpAllocateCR3Root.c)
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x1403CF0A0 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404C6738 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaControllerInitializeController @ 0x1404CE6E8 (HalpDmaControllerInitializeController.c)
 *     HvlpAllocateOverlayPages @ 0x1404FA8CC (HvlpAllocateOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x140503F50 (IopInitializeInMemoryDumpData.c)
 *     ViAllocateContiguousMemory @ 0x1409CD3BC (ViAllocateContiguousMemory.c)
 *     IommupHvInitializeLibrary @ 0x140A8D764 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14021A9E0 (MiMakeProtectionMask.c)
 *     MiAllocateContiguousMemory @ 0x1402E808C (MiAllocateContiguousMemory.c)
 */

__int64 __fastcall MmAllocateContiguousNodeMemory(int a1, __int64 a2, __int64 a3, __int16 a4, unsigned int a5, int a6)
{
  unsigned int ProtectionMask; // eax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11
  unsigned int v11; // r10d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned int v15; // eax

  if ( (a4 & 0xFFF) != 0 )
    return 0LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  v11 = ProtectionMask;
  if ( (a5 & 0x100) != 0 )
    return 0LL;
  if ( ProtectionMask == -1 )
    return 0LL;
  if ( (ProtectionMask & 5) != 4 )
    return 0LL;
  if ( (ProtectionMask & 2) != 0 )
  {
    v15 = ProtectionMask >> 3;
    if ( v15 == 1 || v15 == 3 && (v11 & 7) != 0 )
      return 0LL;
  }
  v12 = v8 >> 12;
  v13 = v9 >> 12;
  if ( v12 > 0xFFFFFFFFFLL )
    v12 = 0xFFFFFFFFFLL;
  if ( v10 > v12 )
    return 0LL;
  else
    return MiAllocateContiguousMemory(a1, v10, v12, v13, v11, a6);
}

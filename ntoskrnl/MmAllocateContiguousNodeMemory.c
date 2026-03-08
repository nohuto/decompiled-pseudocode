/*
 * XREFs of MmAllocateContiguousNodeMemory @ 0x1403B4900
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x1403A3BE0 (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpAllocateCR3Root @ 0x1403A3C68 (HalpAllocateCR3Root.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x1403A53F8 (MiAllocateZeroCalibrationBuffer.c)
 *     HalAllocateCommonBufferExV2 @ 0x1403ABEB0 (HalAllocateCommonBufferExV2.c)
 *     HalpDmaAllocateContiguousMemory @ 0x14050DFA0 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaControllerInitializeController @ 0x140514330 (HalpDmaControllerInitializeController.c)
 *     HvlpAllocateOverlayPages @ 0x1405473DC (HvlpAllocateOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x140550F70 (IopInitializeInMemoryDumpData.c)
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x14061BD50 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     ViAllocateContiguousMemory @ 0x140AC4A6C (ViAllocateContiguousMemory.c)
 *     IommupHvInitializeLibrary @ 0x140B8F474 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MiAllocateContiguousMemory @ 0x1403B49B4 (MiAllocateContiguousMemory.c)
 *     MiConvertContiguousMemoryParameters @ 0x1403B5118 (MiConvertContiguousMemoryParameters.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall MmAllocateContiguousNodeMemory(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  __int128 v8; // [rsp+50h] [rbp-38h] BYREF
  __int128 v9; // [rsp+60h] [rbp-28h]
  __int64 v10; // [rsp+90h] [rbp+8h] BYREF

  v10 = a1;
  v6 = a6;
  v8 = 0LL;
  v9 = 0LL;
  if ( (int)MiConvertContiguousMemoryParameters(a1, a2, a3, a4, a5, a6, (__int64)&v8) < 0 )
    return 0LL;
  else
    return MiAllocateContiguousMemory(
             (unsigned int)&v10,
             v8,
             DWORD2(v8),
             v9,
             DWORD2(v9),
             v6,
             (__int64)&MiSystemPartition,
             1416523587,
             0);
}

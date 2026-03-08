/*
 * XREFs of KiUnshadowProcessorAllocation @ 0x140A9CC9C
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     MmDeleteShadowMapping @ 0x140A39B58 (MmDeleteShadowMapping.c)
 */

char __fastcall KiUnshadowProcessorAllocation(__int64 a1, __int64 a2)
{
  char result; // al

  if ( KiKvaShadow )
  {
    MmDeleteShadowMapping(*(_QWORD *)(a2 + 88) - 12208LL, 0x5000uLL);
    return MmDeleteShadowMapping(a1 + 40576, 0x1000uLL);
  }
  return result;
}

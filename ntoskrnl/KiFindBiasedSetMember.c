/*
 * XREFs of KiFindBiasedSetMember @ 0x14045780C
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x14022FC90 (KiCheckPreferredHeteroProcessor.c)
 *     KeStartThread @ 0x1402385C4 (KeStartThread.c)
 *     KiSelectIdealProcessorSetForGroup @ 0x140296BAC (KiSelectIdealProcessorSetForGroup.c)
 *     KiSelectIdealProcessorSetForNode @ 0x140296D74 (KiSelectIdealProcessorSetForNode.c)
 *     KiHeteroAttemptPreemptionSwap @ 0x1404591A8 (KiHeteroAttemptPreemptionSwap.c)
 *     KiHeteroSelectIdleProcessor @ 0x140459852 (KiHeteroSelectIdleProcessor.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140574F74 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiFindBiasedSetMember(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  int v3; // r11d
  int i; // edx
  unsigned __int64 v5; // rax

  v2 = a1;
  v3 = 0;
  for ( i = a2
          % ((0x101010101010101LL
            * ((((a1 - ((a1 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((a1 - ((a1 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
              + ((((a1 - ((a1 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                + (((a1 - ((a1 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56)
          + 1; i; --i )
  {
    _BitScanForward64(&v5, v2);
    v3 += v5 + 1;
    v2 >>= (unsigned __int8)v5 + 1;
  }
  return (unsigned int)(v3 - 1);
}

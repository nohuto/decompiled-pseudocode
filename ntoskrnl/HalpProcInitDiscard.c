/*
 * XREFs of HalpProcInitDiscard @ 0x140B723C4
 * Callers:
 *     HalpProcInitSystem @ 0x140A878D0 (HalpProcInitSystem.c)
 * Callees:
 *     HalpProcGetFeatureBits @ 0x14037CB74 (HalpProcGetFeatureBits.c)
 *     HalpMcUpdateInitialize @ 0x14080A96C (HalpMcUpdateInitialize.c)
 */

__int64 __fastcall HalpProcInitDiscard(__int64 a1)
{
  off_140C01A60[0] = (__int64 (__fastcall *)())HalpLoadMicrocode;
  off_140C01A68[0] = HalpUnloadMicrocode;
  off_140C01A70[0] = HalpMcUpdatePostUpdate;
  HalpMcUpdateInitialize(a1, 0LL);
  off_140C01B50[0] = HalpProcessorPrepareForIdle;
  off_140C01B60 = (__int64 (__fastcall *)())HalpProcessorResumeFromIdle;
  HalpFeatureBits = HalpProcGetFeatureBits();
  return 0LL;
}

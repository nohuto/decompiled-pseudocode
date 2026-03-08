/*
 * XREFs of HalpDpInitSystem @ 0x140A8E2D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14028EADC (HalpInterruptModel.c)
 *     HalpDpInitDiscard @ 0x140B67570 (HalpDpInitDiscard.c)
 */

__int64 HalpDpInitSystem()
{
  int v0; // edx
  __int64 v1; // r8

  if ( (unsigned int)HalpInterruptModel() == 1 )
  {
    if ( v0 == 7 )
    {
      HalpDpInitDiscard(v1);
    }
    else if ( v0 == 17 )
    {
      off_140C01A88[0] = (__int64 (__fastcall *)())HalpDpReplaceBegin;
      off_140C01A90[0] = HalpDpReplaceTarget;
      off_140C01A98[0] = HalpDpReplaceControl;
      off_140C01AA0[0] = (__int64 (__fastcall *)())HalpDpReplaceEnd;
      off_140C01AE8[0] = HalpInterruptMaskLevelTriggeredLines;
      off_140C01AF8[0] = HalpDpGetInterruptReplayState;
      off_140C01B00[0] = HalpDpReplayInterrupts;
      off_140C01AF0[0] = HalpInterruptUnmaskLevelTriggeredLines;
    }
  }
  return 0LL;
}

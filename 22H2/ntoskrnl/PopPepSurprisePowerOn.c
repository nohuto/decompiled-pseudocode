/*
 * XREFs of PopPepSurprisePowerOn @ 0x14038B498
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x14038B410 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     PopPepReleaseActivityLink @ 0x140261488 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x1402614FC (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x140261688 (PopPepPromoteActivities.c)
 *     PopPepTriggerActivity @ 0x140261A58 (PopPepTriggerActivity.c)
 */

__int64 __fastcall PopPepSurprisePowerOn(__int64 a1)
{
  KIRQL v2; // si
  unsigned int v4; // ebx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  if ( !*(_DWORD *)(a1 + 140) && !*(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 72) )
  {
    v4 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 0, 0);
    PopPepPromoteActivities(a1, 0LL, 1);
    PopPepRequestWork(v4, *(_DWORD *)(a1 + 120));
  }
  return PopPepReleaseActivityLink(a1, 0LL, 1, v2);
}

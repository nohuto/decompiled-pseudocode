/*
 * XREFs of PopPepSurprisePowerOn @ 0x14059FE50
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x140588040 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     PopPepRequestWork @ 0x1403138C0 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x140313904 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x140313988 (PopPepLockActivityLink.c)
 *     PopPepPromoteActivities @ 0x140313A80 (PopPepPromoteActivities.c)
 *     PopPepTriggerActivity @ 0x140313F1C (PopPepTriggerActivity.c)
 */

void __fastcall PopPepSurprisePowerOn(__int64 a1)
{
  char v2; // si
  unsigned int v3; // ebx
  KIRQL v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v2 = PopPepLockActivityLink(a1, 0LL, 6u, 0, &v4);
  if ( !*(_DWORD *)(a1 + 140) && !*(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 72) )
  {
    v3 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 0, 0);
    PopPepPromoteActivities(a1, 0LL, 1);
    PopPepRequestWork(a1, v3, *(_DWORD *)(a1 + 120));
  }
  PopPepReleaseActivityLink(a1, 0LL, v2, v4);
}

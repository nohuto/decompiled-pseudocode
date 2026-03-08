/*
 * XREFs of PoClearBroadcast @ 0x140988B8C
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x1409804A8 (PopDirectedDripsDestroyBroadcast.c)
 *     PnprWakeDevices @ 0x140A9AF1C (PnprWakeDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x1402B884C (PpmEndHighPerfRequest.c)
 *     PopResumeDeviceIdle @ 0x140585124 (PopResumeDeviceIdle.c)
 *     IoFreePoDeviceNotifyList @ 0x140A9B6D4 (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140C3C9F0;
  if ( qword_140C3C9F0 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140C3C9F0 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}

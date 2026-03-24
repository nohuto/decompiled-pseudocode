/*
 * XREFs of PoClearBroadcast @ 0x1407780E0
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x1408E315C (PopDirectedDripsDestroyBroadcast.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     PnprWakeDevices @ 0x1409AEEDC (PnprWakeDevices.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x14038874C (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x1403A6560 (PpmEndHighPerfRequest.c)
 *     IoFreePoDeviceNotifyList @ 0x1409979EC (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140C23A30;
  if ( qword_140C23A30 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140C23A30 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}

/*
 * XREFs of PoClearBroadcast @ 0x14098BC3C
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x140983558 (PopDirectedDripsDestroyBroadcast.c)
 *     PnprWakeDevices @ 0x140A9E05C (PnprWakeDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14036E4A0 (PpmEndHighPerfRequest.c)
 *     PopResumeDeviceIdle @ 0x140587654 (PopResumeDeviceIdle.c)
 *     IoFreePoDeviceNotifyList @ 0x140A9E814 (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140C3CDB0;
  if ( qword_140C3CDB0 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140C3CDB0 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}

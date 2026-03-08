/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x1C0043D7C
 * Callers:
 *     HUBFDO_UnregisterSleepstudyBlockerReasons @ 0x1C007CE30 (HUBFDO_UnregisterSleepstudyBlockerReasons.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C007DFC0 (HUBPDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 SleepstudyHelper_UnregisterComponent()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax

  v0 = 0;
  if ( qword_1C006DD08 )
    v1 = qword_1C006DD08();
  else
    v1 = -1073741637;
  if ( v1 != -1073741637 )
    return v1;
  return v0;
}

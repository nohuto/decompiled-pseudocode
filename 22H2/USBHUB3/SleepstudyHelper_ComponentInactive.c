/*
 * XREFs of SleepstudyHelper_ComponentInactive @ 0x1C0043CDC
 * Callers:
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000D6A0 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_PowerSettingCallback @ 0x1C000EA80 (HUBFDO_PowerSettingCallback.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0019A70 (HUBPDO_EvtDeviceD0Exit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 */

__int64 SleepstudyHelper_ComponentInactive()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax

  v0 = 0;
  if ( qword_1C006CD38 )
    v1 = qword_1C006CD38();
  else
    v1 = -1073741637;
  if ( v1 != -1073741637 )
    return v1;
  return v0;
}

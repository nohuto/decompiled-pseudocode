/*
 * XREFs of SleepstudyHelper_ComponentActive @ 0x1C0043DB4
 * Callers:
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000D350 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_PowerSettingCallback @ 0x1C000EBB0 (HUBFDO_PowerSettingCallback.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0019930 (HUBPDO_EvtDeviceD0Entry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 SleepstudyHelper_ComponentActive()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax

  v0 = 0;
  if ( qword_1C006DD10 )
    v1 = qword_1C006DD10();
  else
    v1 = -1073741637;
  if ( v1 != -1073741637 )
    return v1;
  return v0;
}

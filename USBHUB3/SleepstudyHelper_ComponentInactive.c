/*
 * XREFs of SleepstudyHelper_ComponentInactive @ 0x1C0043DEC
 * Callers:
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000D7D0 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_PowerSettingCallback @ 0x1C000EBB0 (HUBFDO_PowerSettingCallback.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0019BA0 (HUBPDO_EvtDeviceD0Exit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 SleepstudyHelper_ComponentInactive()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax

  v0 = 0;
  if ( qword_1C006DD18 )
    v1 = qword_1C006DD18();
  else
    v1 = -1073741637;
  if ( v1 != -1073741637 )
    return v1;
  return v0;
}

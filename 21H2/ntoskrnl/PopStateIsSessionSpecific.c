/*
 * XREFs of PopStateIsSessionSpecific @ 0x14066E5B4
 * Callers:
 *     PopGetSettingNotificationName @ 0x14066CF64 (PopGetSettingNotificationName.c)
 *     PopSetNewPolicyValue @ 0x14066DDF0 (PopSetNewPolicyValue.c)
 *     PopSetPowerSettingValue @ 0x14066E018 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x14066E4B8 (PopFindPowerSettingConfiguration.c)
 *     PopGetListHead @ 0x14066E540 (PopGetListHead.c)
 *     PoRegisterPowerSettingCallback @ 0x14066F440 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall PopStateIsSessionSpecific(_QWORD *a1)
{
  char v1; // dl
  GUID **v2; // r10
  unsigned int v3; // r9d
  __int64 v4; // r8

  v1 = 0;
  v2 = PopSessionSpecificGuids;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)&(*v2)->Data1 - *a1;
    if ( !v4 )
      v4 = *(_QWORD *)(*v2)->Data4 - a1[1];
    if ( !v4 )
      break;
    ++v3;
    ++v2;
    if ( v3 >= 2 )
      return v1;
  }
  return 1;
}

/*
 * XREFs of PopStateIsSessionSpecific @ 0x140783498
 * Callers:
 *     PopSetPowerSettingValue @ 0x140782F08 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x14078339C (PopFindPowerSettingConfiguration.c)
 *     PopGetListHead @ 0x140783424 (PopGetListHead.c)
 *     PopGetSettingNotificationName @ 0x140783590 (PopGetSettingNotificationName.c)
 *     PoRegisterPowerSettingCallback @ 0x1407A7570 (PoRegisterPowerSettingCallback.c)
 *     PopSetNewPolicyValue @ 0x14082E04C (PopSetNewPolicyValue.c)
 * Callees:
 *     <none>
 */

char __fastcall PopStateIsSessionSpecific(_QWORD *a1)
{
  char v1; // dl
  char *v2; // r10
  unsigned int v3; // r9d
  __int64 v4; // r8

  v1 = 0;
  v2 = (char *)&PopSessionSpecificGuids;
  v3 = 0;
  while ( 1 )
  {
    v4 = **(_QWORD **)v2 - *a1;
    if ( !v4 )
      v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL) - a1[1];
    if ( !v4 )
      break;
    ++v3;
    v2 += 8;
    if ( v3 >= 2 )
      return v1;
  }
  return 1;
}

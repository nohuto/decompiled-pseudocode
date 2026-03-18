/*
 * XREFs of PopGetListHead @ 0x140751908
 * Callers:
 *     PopSetPowerSettingValue @ 0x14075140C (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x140751880 (PopFindPowerSettingConfiguration.c)
 * Callees:
 *     PopStateIsSessionSpecific @ 0x14075197C (PopStateIsSessionSpecific.c)
 */

PVOID *__fastcall PopGetListHead(_QWORD *a1)
{
  __int64 v2; // rbx
  unsigned int v4; // ecx
  char *i; // r8
  __int64 v6; // rdx

  v2 = 0LL;
  if ( !(unsigned __int8)PopStateIsSessionSpecific(a1) )
    return &PopPowerSettings;
  v4 = 0;
  for ( i = (char *)&PopSessionSpecificGuids; ; i += 8 )
  {
    v6 = **(_QWORD **)i - *a1;
    if ( !v6 )
      v6 = *(_QWORD *)(*(_QWORD *)i + 8LL) - a1[1];
    if ( !v6 )
      break;
    if ( ++v4 >= 2 )
      return (PVOID *)v2;
  }
  return (PVOID *)((char *)&PopSessionSpecificLists + 16 * v4);
}

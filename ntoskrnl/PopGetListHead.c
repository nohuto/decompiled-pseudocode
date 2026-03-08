/*
 * XREFs of PopGetListHead @ 0x14068D4BC
 * Callers:
 *     PopSetPowerSettingValue @ 0x14068CFA0 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x14068D434 (PopFindPowerSettingConfiguration.c)
 * Callees:
 *     PopStateIsSessionSpecific @ 0x14068D530 (PopStateIsSessionSpecific.c)
 */

PVOID *__fastcall PopGetListHead(_QWORD *a1)
{
  __int64 v2; // rbx
  unsigned int v4; // ecx
  GUID **i; // r8
  __int64 v6; // rdx

  v2 = 0LL;
  if ( !(unsigned __int8)PopStateIsSessionSpecific(a1) )
    return &PopPowerSettings;
  v4 = 0;
  for ( i = PopSessionSpecificGuids; ; ++i )
  {
    v6 = *(_QWORD *)&(*i)->Data1 - *a1;
    if ( !v6 )
      v6 = *(_QWORD *)(*i)->Data4 - a1[1];
    if ( !v6 )
      break;
    if ( ++v4 >= 2 )
      return (PVOID *)v2;
  }
  return (PVOID *)((char *)&PopSessionSpecificLists + 16 * v4);
}

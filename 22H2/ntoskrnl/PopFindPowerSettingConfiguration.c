/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x1406F3B68
 * Callers:
 *     PopGetPowerSettingValue @ 0x14034AED4 (PopGetPowerSettingValue.c)
 *     PopInitilizeAcDcSettings @ 0x1403A9224 (PopInitilizeAcDcSettings.c)
 *     PopGetSettingValue @ 0x140685A84 (PopGetSettingValue.c)
 *     PopGetSettingNotificationName @ 0x1406F2614 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x1406F36C8 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x1406F4AF0 (PoRegisterPowerSettingCallback.c)
 *     PopQueryPowerSettingUlong @ 0x140779A64 (PopQueryPowerSettingUlong.c)
 * Callees:
 *     PopGetListHead @ 0x1406F3BF0 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1406F3C64 (PopStateIsSessionSpecific.c)
 */

__int64 *__fastcall PopFindPowerSettingConfiguration(_QWORD *a1, int a2)
{
  __int64 **ListHead; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rcx

  ListHead = (__int64 **)PopGetListHead(a1);
  v5 = *ListHead;
  if ( (unsigned __int8)PopStateIsSessionSpecific(a1) )
  {
    while ( v5 != (__int64 *)ListHead )
    {
      if ( *((_DWORD *)v5 + 12) == a2 && (*((_DWORD *)v5 + 13) & 4) == 0 )
        return v5;
      v5 = (__int64 *)*v5;
    }
  }
  else
  {
    while ( v5 != (__int64 *)ListHead )
    {
      v6 = v5[4] - *a1;
      if ( !v6 )
        v6 = v5[5] - a1[1];
      if ( !v6 )
        return v5;
      v5 = (__int64 *)*v5;
    }
  }
  return 0LL;
}

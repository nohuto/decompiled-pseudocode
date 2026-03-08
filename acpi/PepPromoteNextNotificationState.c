/*
 * XREFs of PepPromoteNextNotificationState @ 0x1C008B150
 * Callers:
 *     ACPIPepPowerSettingChangeCallback @ 0x1C008ADB0 (ACPIPepPowerSettingChangeCallback.c)
 * Callees:
 *     <none>
 */

bool __fastcall PepPromoteNextNotificationState(__int64 a1, int a2, char a3)
{
  int v3; // eax
  bool result; // al

  v3 = *(_DWORD *)(a1 + 252);
  if ( a3 )
    result = a2 > v3;
  else
    result = --a2 < v3;
  if ( result )
    *(_DWORD *)(a1 + 252) = a2;
  return result;
}

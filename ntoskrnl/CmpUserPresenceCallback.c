/*
 * XREFs of CmpUserPresenceCallback @ 0x140302FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpUserPresenceCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  CmpUserPresent = *Value != 2;
  return 0LL;
}

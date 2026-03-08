/*
 * XREFs of HvlpPowerPolicySettingCallback @ 0x140544D90
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlpSetPowerProperty @ 0x140544E50 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlpPowerPolicySettingCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rdx
  __int64 v6; // [rsp+20h] [rbp-1A8h]
  _QWORD v7[52]; // [rsp+28h] [rbp-1A0h] BYREF

  if ( ValueLength != 4 || !Value )
    return 3221225485LL;
  LODWORD(v6) = (_DWORD)Context;
  HIDWORD(v6) = *Value;
  memset(v7, 0, 0x194uLL);
  v7[1] = v6;
  LODWORD(v7[0]) = 5;
  return HvlpSetPowerProperty(v7, v4);
}

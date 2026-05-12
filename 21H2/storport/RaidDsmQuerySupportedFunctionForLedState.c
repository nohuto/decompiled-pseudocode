/*
 * XREFs of RaidDsmQuerySupportedFunctionForLedState @ 0x1C0045114
 * Callers:
 *     RaidSetLedStateByAcpiDsm @ 0x1C0045BD8 (RaidSetLedStateByAcpiDsm.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     RaidEvaluateDsmLedState @ 0x1C0045238 (RaidEvaluateDsmLedState.c)
 */

__int64 __fastcall RaidDsmQuerySupportedFunctionForLedState(struct _DEVICE_OBJECT *a1)
{
  _BYTE *DeviceExtension; // rbx
  __int64 result; // rax
  int v3; // ecx
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  DeviceExtension = a1->DeviceExtension;
  result = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  if ( !DeviceExtension )
    return 3221225473LL;
  if ( (DeviceExtension[110] & 8) == 0 )
  {
    LODWORD(v5) = 24;
    v3 = RaidEvaluateDsmLedState(a1, (__int64)&v5);
    if ( v3 >= 0 )
    {
      if ( (unsigned int)v5 >= 0x14 && (_DWORD)v6 == 1114596673 && DWORD2(v6) && WORD6(v6) == 2 )
      {
        v4 = v7 & 0xF;
        DeviceExtension[110] |= 8u;
        *((_DWORD *)DeviceExtension + 1462) = v4;
      }
      else
      {
        return (unsigned int)-1072431089;
      }
    }
    return (unsigned int)v3;
  }
  return result;
}

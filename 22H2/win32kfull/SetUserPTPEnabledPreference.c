/*
 * XREFs of SetUserPTPEnabledPreference @ 0x1C02207A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetUserPTPEnabledPreference(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = 1;
  if ( grpWinStaList && (unsigned int)AccessPTPEnabledStatus(0LL, 1LL, &v7) )
    gPTPEnabled = v7;
  result = RIMFindConfigDeviceForInput(a3, a2, a1, &v8);
  if ( (_DWORD)result )
  {
    if ( v7 )
      return RIMUnRevokeConfigurationChange(v8, 87LL);
    else
      return RIMRevokeConfigurationChange(v8, 87LL);
  }
  return result;
}

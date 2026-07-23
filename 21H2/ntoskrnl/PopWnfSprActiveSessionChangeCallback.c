/*
 * XREFs of PopWnfSprActiveSessionChangeCallback @ 0x14078EA60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x14061A450 (ExQueryWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x14066D5A8 (PopSetPowerSettingValueAcDc.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopWnfSprActiveSessionChangeCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v6; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-18h]

  v6 = 20;
  v9 = 0;
  v8 = 0LL;
  v2 = ExQueryWnfStateData(a1, (__int64)v7, (__int64)&v8, &v6);
  if ( v2 >= 0 && v6 == 20 )
  {
    PopAcquirePolicyLock(v1);
    PopSetPowerSettingValueAcDc(&GUID_SPR_ACTIVE_SESSION_CHANGE, 20LL, &v8);
    PopReleasePolicyLock(v4, v3);
  }
  return (unsigned int)v2;
}

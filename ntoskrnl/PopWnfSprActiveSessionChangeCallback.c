__int64 __fastcall PopWnfSprActiveSessionChangeCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+40h] [rbp-18h]

  v7 = 20;
  v10 = 0;
  v9 = 0LL;
  v2 = ExQueryWnfStateData(a1, &v8, &v9, &v7);
  if ( v2 >= 0 && v7 == 20 )
  {
    PopAcquirePolicyLock(v1);
    PopSetPowerSettingValueAcDc(&GUID_SPR_ACTIVE_SESSION_CHANGE, 0x14u, &v9);
    PopReleasePolicyLock(v4, v3, v5);
  }
  return (unsigned int)v2;
}

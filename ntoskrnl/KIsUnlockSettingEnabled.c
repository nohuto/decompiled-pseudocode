__int64 __fastcall KIsUnlockSettingEnabled(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v8; // [rsp+40h] [rbp-20h] BYREF
  __int128 v9; // [rsp+50h] [rbp-10h] BYREF

  v7[0] = 9830548LL;
  v6[0] = 7733364LL;
  v6[1] = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  *a2 = 0xFFFF;
  v7[1] = L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock";
  v8 = 0LL;
  v9 = 0LL;
  v4 = KGetAppModelStateSeparatedRegKeyPath(L"AppxPolicies");
  if ( v4 >= 0 )
  {
    v4 = KGetUnlockSetting(&v9, a1, a2);
    if ( v4 >= 0 )
    {
      if ( !CmIsStateSeparationEnabled() || *a2 == 0xFFFF && (v4 = KGetUnlockSetting(v6, a1, a2), v4 >= 0) )
      {
        if ( *a2 == 0xFFFF )
        {
          v4 = KGetAppModelStateSeparatedRegKeyPath(L"AppModelUnlock");
          if ( v4 >= 0 )
          {
            v4 = KGetUnlockSetting(&v8, a1, a2);
            if ( v4 >= 0 && CmIsStateSeparationEnabled() && *a2 == 0xFFFF )
              v4 = KGetUnlockSetting(v7, a1, a2);
          }
        }
      }
    }
  }
  AppModelFreeUnicodeString((__int64)&v8);
  AppModelFreeUnicodeString((__int64)&v9);
  return (unsigned int)v4;
}

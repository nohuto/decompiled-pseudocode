char ExQueryFastCacheDevLicense()
{
  char result; // al
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v1[0] = 4456514LL;
  v1[1] = L"AllowDevelopmentWithoutDevLicense";
  v2 = 0xFFFF;
  if ( (int)KIsUnlockSettingEnabled(v1, &v2) < 0 )
    return 0;
  result = 1;
  if ( v2 != 1 )
    return 0;
  return result;
}

__int64 LoadPointerDevicePenSettings(void)
{
  __int64 result; // rax

  if ( !(unsigned int)GetDWORDSettingValues(4LL, off_1C0357038) )
    return 0LL;
  result = 1LL;
  gPenMonitor = 1;
  return result;
}

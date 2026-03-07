bool __fastcall InputTraceLogging::Enabled(int a1)
{
  char v1; // r8

  v1 = 0;
  if ( dword_1C02CA7E0 )
    return tlgKeywordOn((__int64)&dword_1C02CA7E0, a1);
  return v1;
}

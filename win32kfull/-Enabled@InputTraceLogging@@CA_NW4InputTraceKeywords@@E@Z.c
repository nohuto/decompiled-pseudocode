bool __fastcall InputTraceLogging::Enabled(int a1)
{
  char v1; // r9

  v1 = 0;
  if ( dword_1C035C080 )
    return (unsigned __int8)tlgKeywordOn(&dword_1C035C080, a1) != 0;
  return v1;
}

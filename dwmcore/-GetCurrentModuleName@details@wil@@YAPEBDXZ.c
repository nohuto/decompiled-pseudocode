const char *__fastcall wil::details::GetCurrentModuleName(wil::details *this)
{
  unsigned __int64 v2; // [rsp+20h] [rbp-8h]

  if ( !`wil::details::GetCurrentModuleName'::`2'::s_fModuleValid )
  {
    wil::details::GetModuleInformation(
      (LPCWSTR)wil::details::RecordFailFast,
      0LL,
      &`wil::details::GetCurrentModuleName'::`2'::s_szModule,
      (char *)0x40,
      v2);
    `wil::details::GetCurrentModuleName'::`2'::s_fModuleValid = 1;
  }
  return (const char *)&`wil::details::GetCurrentModuleName'::`2'::s_szModule;
}

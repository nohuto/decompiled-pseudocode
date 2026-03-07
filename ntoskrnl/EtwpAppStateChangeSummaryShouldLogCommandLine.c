char __fastcall EtwpAppStateChangeSummaryShouldLogCommandLine(__int64 a1)
{
  unsigned __int16 *v1; // rax
  char v2; // di
  const wchar_t *v3; // rcx
  unsigned __int64 v4; // rsi
  const wchar_t *v5; // rbx
  const wchar_t *v6; // rax
  size_t v7; // rsi

  v1 = *(unsigned __int16 **)(a1 + 1472);
  v2 = 0;
  if ( v1 && *v1 )
  {
    v3 = (const wchar_t *)*((_QWORD *)v1 + 1);
    v4 = (unsigned __int64)*v1 >> 1;
    v5 = &v3[v4];
    while ( v5 != v3 )
    {
      v6 = v5--;
      if ( *v5 == 92 )
      {
        v5 = v6;
        break;
      }
    }
    v7 = v4 - (v5 - v3);
    if ( !wcsnicmp(v5, L"svchost.exe", v7) || !wcsnicmp(v5, L"oemsvchost.exe", v7) )
      return 1;
  }
  return v2;
}

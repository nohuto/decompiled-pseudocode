__int64 __fastcall CheckNoKmdAccessPrivateData(unsigned int a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // rbx
  const wchar_t *v4; // r9

  if ( a1 )
  {
    if ( a1 < 0x108 )
    {
      v3 = a1;
      WdLogSingleEntry1(2LL, a1);
      v4 = L"Invalid private driver data size for NoKmdAccess: %I64d";
LABEL_4:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v4, v3, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    if ( *a2 != a3 || a2[65] != a3 + 1 )
    {
      v3 = a3;
      WdLogSingleEntry1(2LL, a3);
      v4 = L"Invalid private driver data tag for NoKmdAccess: %I64d";
      goto LABEL_4;
    }
  }
  return 0LL;
}

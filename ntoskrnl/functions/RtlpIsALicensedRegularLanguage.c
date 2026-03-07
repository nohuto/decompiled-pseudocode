__int64 __fastcall RtlpIsALicensedRegularLanguage(_QWORD *a1, wchar_t *a2)
{
  unsigned int v2; // ebx
  wchar_t *v5; // rcx
  wchar_t *v6; // rcx
  wchar_t *v7; // rcx
  int v9; // ecx

  v2 = 0;
  if ( a1 )
  {
    v5 = (wchar_t *)a1[17];
    if ( !v5 || (unsigned __int8)RtlpLangNameInMultiSzString(v5, a2) )
    {
      v6 = (wchar_t *)a1[16];
      if ( v6 )
      {
        v9 = -((unsigned __int8)RtlpLangNameInMultiSzString(v6, a2) == 0);
      }
      else
      {
        v7 = (wchar_t *)a1[19];
        if ( !v7 )
          return v2;
        v9 = -((unsigned __int8)RtlpLangNameInMultiSzString(v7, a2) != 0);
      }
      return v9 & 0xC0000034;
    }
    return (unsigned int)-1073741772;
  }
  return 3221225524LL;
}

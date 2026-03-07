__int64 __fastcall CmValidateDeviceName(__int64 a1, const wchar_t *a2)
{
  const wchar_t *v2; // rbx
  int v3; // edi
  NTSTATUS v4; // r8d
  int v5; // r11d
  wchar_t v6; // ax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 1;
  if ( !a2 )
    return 3221225485LL;
  v4 = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
  if ( v4 >= 0 )
  {
    v6 = *v2;
    if ( *v2 )
    {
      while ( (unsigned __int16)(v6 - 33) <= 0x5Eu && v6 != 44 )
      {
        if ( v6 == 92 )
        {
          if ( !v5 )
            return 3221225523LL;
          v5 = 0;
          ++v3;
        }
        else
        {
          ++v5;
        }
        v6 = v2[1];
        ++v2;
        if ( !v6 )
        {
          if ( v5 && v3 == 3 )
            return (unsigned int)v4;
          return 3221225523LL;
        }
      }
    }
  }
  return 3221225523LL;
}

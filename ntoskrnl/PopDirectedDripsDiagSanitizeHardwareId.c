const UNICODE_STRING *__fastcall PopDirectedDripsDiagSanitizeHardwareId(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // rbx
  __int64 v2; // rdx
  int v3; // ecx
  unsigned int v4; // edi
  unsigned int v5; // ecx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1;
  v2 = 0LL;
  v3 = *a1;
  String2 = 0LL;
  if ( (v3 & 0xFFFFFFFE) != 0 )
  {
    while ( 1 )
    {
      v4 = v2;
      v5 = (unsigned __int16)v3 >> 1;
      if ( (unsigned int)v2 < v5 )
      {
        do
        {
          if ( *(_WORD *)(*((_QWORD *)v1 + 1) + 2LL * v4) == 44 )
            break;
          ++v4;
        }
        while ( v4 < v5 );
      }
      String2.Buffer = (wchar_t *)(*((_QWORD *)v1 + 1) + 2 * v2);
      String2.Length = 2 * (v4 - v2);
      String2.MaximumLength = String2.Length;
      if ( RtlPrefixUnicodeString(&PopBthEnumEnumeratorPrefix, &String2, 1u) )
        break;
      v2 = v4 + 1;
      LOWORD(v3) = *v1;
      if ( (unsigned int)v2 >= *v1 >> 1 )
        return (const UNICODE_STRING *)v1;
    }
    return &PopBthEnumEnumeratorPrefix;
  }
  return (const UNICODE_STRING *)v1;
}

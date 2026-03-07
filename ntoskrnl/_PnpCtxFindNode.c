__int64 __fastcall PnpCtxFindNode(__int64 a1, const WCHAR *a2, int a3, const UNICODE_STRING **a4)
{
  __int64 v5; // rbx
  const UNICODE_STRING **v7; // rsi
  const UNICODE_STRING *i; // rbx
  const UNICODE_STRING **v9; // rsi
  const UNICODE_STRING *j; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  *a4 = 0LL;
  v5 = a3;
  String2 = 0LL;
  RtlInitUnicodeString(&String2, a2);
  if ( (_DWORD)v5 )
  {
    v7 = (const UNICODE_STRING **)(16 * v5 + a1 + 24);
    for ( i = *v7; i != (const UNICODE_STRING *)v7; i = *(const UNICODE_STRING **)&i->Length )
    {
      if ( RtlEqualUnicodeString(i + 1, &String2, 1u) )
      {
        *a4 = i - 1;
        return *a4 == 0LL ? 0xC0000034 : 0;
      }
    }
  }
  else
  {
    v9 = (const UNICODE_STRING **)(a1 + 8);
    for ( j = *v9; j != (const UNICODE_STRING *)v9; j = *(const UNICODE_STRING **)&j->Length )
    {
      if ( RtlEqualUnicodeString(j + 2, &String2, 1u) )
      {
        *a4 = j;
        return *a4 == 0LL ? 0xC0000034 : 0;
      }
    }
  }
  return *a4 == 0LL ? 0xC0000034 : 0;
}

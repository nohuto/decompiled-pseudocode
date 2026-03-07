__int64 __fastcall ParseReserved(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  wchar_t *v2; // rax
  const WCHAR *v3; // rax
  WCHAR *i; // rbx
  WCHAR v5; // di
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG Value; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+5Ch] [rbp+14h]

  v9 = HIDWORD(a2);
  DestinationString = 0LL;
  Value = 0;
  if ( a1 )
  {
    v2 = wcsstr(a1, L"hotkey.");
    if ( v2 )
    {
      v3 = v2 + 7;
      for ( i = (WCHAR *)v3; ; ++i )
      {
        v5 = *i;
        if ( (unsigned __int16)(*i - 48) > 9u )
          break;
      }
      *i = 0;
      RtlInitUnicodeString(&DestinationString, v3);
      *i = v5;
      RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    }
  }
  return Value;
}

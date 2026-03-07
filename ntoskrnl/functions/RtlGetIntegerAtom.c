char __fastcall RtlGetIntegerAtom(unsigned __int64 a1, _WORD *a2)
{
  wchar_t *v4; // rdx
  __int16 v5; // cx
  wchar_t *v6; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  ULONG Value; // [rsp+40h] [rbp+8h] BYREF

  String = 0LL;
  if ( (a1 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (unsigned __int16)a1 < 0xC000u )
    {
      if ( !(_WORD)a1 )
        LOWORD(a1) = -16384;
      if ( a2 )
        *a2 = a1;
      return 1;
    }
    return 0;
  }
  if ( *(_WORD *)a1 != 35 )
    return 0;
  v4 = (wchar_t *)(a1 + 2);
  v5 = *(_WORD *)(a1 + 2);
  v6 = v4;
  while ( v5 )
  {
    if ( (unsigned __int16)(v5 - 48) > 9u )
      return 0;
    v5 = *++v6;
  }
  String.Buffer = v4;
  String.Length = (_WORD)v6 - (_WORD)v4;
  String.MaximumLength = (_WORD)v6 - (_WORD)v4;
  Value = 0;
  if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) < 0 )
    return 0;
  if ( a2 )
  {
    if ( Value - 1 > 0xBFFF )
      *a2 = -16384;
    else
      *a2 = Value;
  }
  return 1;
}

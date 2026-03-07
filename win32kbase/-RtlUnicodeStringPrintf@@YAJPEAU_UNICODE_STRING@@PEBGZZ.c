__int64 RtlUnicodeStringPrintf(struct _UNICODE_STRING *a1, const unsigned __int16 *a2, ...)
{
  USHORT Length; // cx
  USHORT MaximumLength; // ax
  unsigned int v5; // ebx
  size_t v6; // rsi
  int v7; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, a2);
  Length = a1->Length;
  if ( (Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( Length > MaximumLength )
    return (unsigned int)-1073741811;
  if ( MaximumLength == 0xFFFF )
    return (unsigned int)-1073741811;
  v5 = 0;
  if ( !a1->Buffer && (Length || MaximumLength) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v6 = (unsigned __int64)a1->MaximumLength >> 1;
    v7 = vsnwprintf(a1->Buffer, v6, a2, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      LOWORD(v7) = v6;
      v5 = -2147483643;
    }
    a1->Length = 2 * v7;
  }
  return v5;
}

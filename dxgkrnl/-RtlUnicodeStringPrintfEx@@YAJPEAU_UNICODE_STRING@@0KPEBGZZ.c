__int64 RtlUnicodeStringPrintfEx(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        ULONG a3,
        const unsigned __int16 *a4,
        ...)
{
  const wchar_t *v5; // r10
  size_t v6; // r8
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // r13
  size_t v11; // rsi
  size_t v12; // r14
  size_t v13; // rdi
  const unsigned __int16 *v14; // rax
  int v15; // ebx
  int v16; // eax
  wchar_t *v18; // rax
  size_t pcchNewDestLength; // [rsp+40h] [rbp-28h] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-20h] BYREF
  wchar_t *ppszDestEnd; // [rsp+50h] [rbp-18h] BYREF
  va_list Args; // [rsp+D0h] [rbp+68h] BYREF

  va_start(Args, a4);
  v5 = a4;
  v6 = 0LL;
  if ( !a1 && (a3 & 0x100) != 0 )
    goto LABEL_27;
  Length = a1->Length;
  if ( (Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !a1->Buffer && (Length || MaximumLength) )
  {
    return (unsigned int)-1073741811;
  }
  if ( a1 )
  {
    Buffer = a1->Buffer;
    v11 = (unsigned __int64)a1->MaximumLength >> 1;
  }
  else
  {
LABEL_27:
    Buffer = 0LL;
    v11 = 0LL;
  }
  ppszDestEnd = Buffer;
  LOWORD(v12) = v11;
  pcchRemaining = v11;
  LOWORD(v13) = 0;
  pcchNewDestLength = 0LL;
  if ( (a3 & 0x100) != 0 )
  {
    v14 = (const unsigned __int16 *)&unk_1C0093660;
    if ( a4 )
      v14 = a4;
    v5 = v14;
  }
  v15 = 0;
  if ( (a3 & 0xFFFFE000) != 0 )
  {
    v15 = -1073741811;
    goto LABEL_32;
  }
  if ( v11 )
  {
    ppszDestEnd = 0LL;
    v16 = _vsnwprintf(Buffer, v11, v5, Args);
    if ( v16 < 0 || (v13 = v16, v16 > v11) )
    {
      v13 = v11;
      pcchNewDestLength = v11;
      v15 = -2147483643;
    }
    else
    {
      pcchNewDestLength = v16;
    }
    v12 = v11 - v13;
    pcchRemaining = v11 - v13;
    ppszDestEnd = &Buffer[v13];
    if ( v15 >= 0 )
    {
      if ( (a3 & 0x200) != 0 && v12 )
        memset(&Buffer[v13], (unsigned __int8)a3, 2 * v12);
      goto LABEL_20;
    }
LABEL_32:
    if ( (a3 & 0x1C00) != 0 && v11 )
    {
      RtlUnicodeStringExHandleOtherFlags(Buffer, v11, v6, &pcchNewDestLength, &ppszDestEnd, &pcchRemaining, a3);
      LOWORD(v12) = pcchRemaining;
      LOWORD(v13) = pcchNewDestLength;
    }
    goto LABEL_20;
  }
  if ( *v5 )
  {
    v15 = Buffer != 0LL ? -2147483643 : -1073741811;
    goto LABEL_32;
  }
LABEL_20:
  if ( a1 )
    a1->Length = 2 * v13;
  if ( (int)(v15 + 0x80000000) < 0 || v15 == -2147483643 )
  {
    if ( a2 )
    {
      v18 = ppszDestEnd;
      a2->MaximumLength = 2 * v12;
      a2->Buffer = v18;
      a2->Length = 0;
    }
  }
  return (unsigned int)v15;
}

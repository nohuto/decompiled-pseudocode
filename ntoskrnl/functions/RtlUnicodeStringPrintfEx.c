NTSTATUS RtlUnicodeStringPrintfEx(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING RemainingString,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
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
  NTSTATUS v14; // ebx
  int v15; // eax
  wchar_t *v16; // rax
  NTSTRSAFE_PCWSTR v18; // rax
  size_t pcchNewDestLength; // [rsp+40h] [rbp-28h] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-20h] BYREF
  wchar_t *ppszDestEnd; // [rsp+50h] [rbp-18h] BYREF
  va_list Args; // [rsp+D0h] [rbp+68h] BYREF

  va_start(Args, pszFormat);
  v5 = pszFormat;
  v6 = 0LL;
  if ( !DestinationString && (dwFlags & 0x100) != 0 )
    goto LABEL_26;
  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !DestinationString->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  if ( DestinationString )
  {
    Buffer = DestinationString->Buffer;
    v11 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  }
  else
  {
LABEL_26:
    Buffer = 0LL;
    v11 = 0LL;
  }
  ppszDestEnd = Buffer;
  LOWORD(v12) = v11;
  pcchRemaining = v11;
  LOWORD(v13) = 0;
  pcchNewDestLength = 0LL;
  if ( (dwFlags & 0x100) != 0 )
  {
    v18 = (NTSTRSAFE_PCWSTR)&cchOriginalDestLength;
    if ( pszFormat )
      v18 = pszFormat;
    v5 = v18;
  }
  v14 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v14 = -1073741811;
    goto LABEL_34;
  }
  if ( v11 )
  {
    ppszDestEnd = 0LL;
    v15 = vsnwprintf(Buffer, v11, v5, Args);
    if ( v15 < 0 || (v13 = v15, v15 > v11) )
    {
      v13 = v11;
      pcchNewDestLength = v11;
      v14 = -2147483643;
    }
    else
    {
      pcchNewDestLength = v15;
    }
    v12 = v11 - v13;
    pcchRemaining = v11 - v13;
    ppszDestEnd = &Buffer[v13];
    if ( v14 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 && v12 )
        memset(&Buffer[v13], (unsigned __int8)dwFlags, 2 * v12);
      goto LABEL_17;
    }
LABEL_34:
    if ( (dwFlags & 0x1C00) != 0 && v11 )
    {
      RtlUnicodeStringExHandleOtherFlags(Buffer, v11, v6, &pcchNewDestLength, &ppszDestEnd, &pcchRemaining, dwFlags);
      LOWORD(v12) = pcchRemaining;
      LOWORD(v13) = pcchNewDestLength;
    }
    goto LABEL_17;
  }
  if ( *v5 )
  {
    v14 = Buffer != 0LL ? -2147483643 : -1073741811;
    goto LABEL_34;
  }
LABEL_17:
  if ( DestinationString )
    DestinationString->Length = 2 * v13;
  if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147483643 )
  {
    if ( RemainingString )
    {
      v16 = ppszDestEnd;
      RemainingString->MaximumLength = 2 * v12;
      RemainingString->Buffer = v16;
      RemainingString->Length = 0;
    }
  }
  return v14;
}

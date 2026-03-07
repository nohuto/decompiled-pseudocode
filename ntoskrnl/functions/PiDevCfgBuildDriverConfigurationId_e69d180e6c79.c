__int64 __fastcall PiDevCfgBuildDriverConfigurationId(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // r15
  int v3; // ebx
  __int64 v4; // rdi
  unsigned int v6; // ebx
  NTSTATUS v8; // ebx
  unsigned __int16 Length; // di
  wchar_t *Buffer; // r8
  size_t v12; // r9
  unsigned __int64 v13; // rdx
  const wchar_t *v14; // rax
  signed __int64 v15; // r10
  __int64 v16; // rcx
  wchar_t *v17; // r11
  size_t v18; // r14
  wchar_t **ppszDestEnd; // [rsp+20h] [rbp-60h]
  size_t *pcchRemaining; // [rsp+28h] [rbp-58h]
  __int64 dwFlags; // [rsp+30h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-20h] BYREF
  TIME_FIELDS TimeFields; // [rsp+70h] [rbp-10h] BYREF
  wchar_t *v25; // [rsp+C0h] [rbp+40h] BYREF
  size_t v26; // [rsp+D0h] [rbp+50h] BYREF
  size_t pcchNewDestLength; // [rsp+D8h] [rbp+58h] BYREF

  v2 = a1 + 40;
  v3 = *(unsigned __int16 *)(a1 + 40);
  v4 = a1 + 72;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v6 = *(unsigned __int16 *)(a1 + 72) + v3 + 4;
  DestinationString.Buffer = 0LL;
  RemainingString = 0LL;
  TimeFields = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    v6 += *(unsigned __int16 *)(a1 + 88) + 2;
  if ( !PnpIsNullGuid((void *)(a1 + 188)) )
    v6 += 72;
  if ( (unsigned __int64)v6 + 2 > 0xFFFE )
  {
    v8 = -1073741562;
    goto LABEL_13;
  }
  DestinationString.Length = v6;
  DestinationString.MaximumLength = v6 + 2;
  DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(v6 + 2));
  if ( !DestinationString.Buffer )
  {
    v8 = -1073741670;
    goto LABEL_13;
  }
  v8 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"%wZ:%wZ", v2, v4);
  if ( v8 >= 0 )
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      v8 = RtlUnicodeStringPrintfEx(&RemainingString, &RemainingString, 0x800u, L",%wZ", a1 + 88);
      if ( v8 < 0 )
        goto LABEL_13;
      Length = *(_WORD *)(a1 + 88) + 2 + DestinationString.Length;
      DestinationString.Length = Length;
    }
    else
    {
      Length = DestinationString.Length;
    }
    if ( PnpIsNullGuid((void *)(a1 + 188)) )
    {
LABEL_12:
      *a2 = DestinationString;
      DestinationString = 0LL;
      goto LABEL_13;
    }
    if ( *(_QWORD *)(a1 + 96) )
    {
LABEL_43:
      RtlTimeToTimeFields((PLARGE_INTEGER)(a1 + 112), &TimeFields);
      LODWORD(dwFlags) = *(unsigned __int16 *)(a1 + 124);
      LODWORD(pcchRemaining) = (unsigned __int16)HIWORD(*(_DWORD *)(a1 + 124));
      LODWORD(ppszDestEnd) = TimeFields.Year;
      v8 = RtlUnicodeStringPrintf(
             &RemainingString,
             L",%02d/%02d/%04d,%u.%u.%u.%u",
             (unsigned int)TimeFields.Month,
             (unsigned int)TimeFields.Day,
             ppszDestEnd,
             pcchRemaining,
             dwFlags,
             *(unsigned __int16 *)(a1 + 122),
             *(unsigned __int16 *)(a1 + 120));
      if ( v8 < 0 )
        goto LABEL_13;
      DestinationString.Length = RemainingString.Length + Length;
      goto LABEL_12;
    }
    if ( (RemainingString.Length & 1) != 0
      || (RemainingString.MaximumLength & 1) != 0
      || RemainingString.Length > RemainingString.MaximumLength
      || RemainingString.MaximumLength == 0xFFFF
      || (Buffer = RemainingString.Buffer) == 0LL && (RemainingString.Length || RemainingString.MaximumLength) )
    {
      v8 = -1073741811;
      goto LABEL_13;
    }
    v12 = 0LL;
    v13 = (unsigned __int64)RemainingString.MaximumLength >> 1;
    if ( v13 )
    {
      v14 = L",";
      v15 = (char *)RemainingString.Buffer - (char *)L",";
      v16 = 0x7FFFLL;
      v8 = 0;
      v17 = RemainingString.Buffer;
      v18 = (unsigned __int64)RemainingString.MaximumLength >> 1;
      while ( v16 )
      {
        if ( *v14 )
        {
          *(const wchar_t *)((char *)v14 + v15) = *v14;
          --v16;
          ++v14;
          ++v12;
          if ( --v13 )
            continue;
        }
        if ( !v13 && v16 && *v14 )
          v8 = -2147483643;
        break;
      }
      pcchNewDestLength = v12;
      LOWORD(v13) = v18 - v12;
      Buffer = &v17[v12];
      v25 = Buffer;
      v26 = v18 - v12;
      if ( v8 < 0 )
      {
        RtlUnicodeStringExHandleOtherFlags(v17, v18, (size_t)Buffer, &pcchNewDestLength, &v25, &v26, 0x800u);
        Buffer = v25;
        LOWORD(v13) = v26;
        LOWORD(v12) = pcchNewDestLength;
      }
    }
    else
    {
      v8 = RemainingString.Buffer != 0LL ? -2147483643 : -1073741811;
    }
    RemainingString.Length = 2 * v12;
    if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
    {
      RemainingString.Length = 0;
      RemainingString.MaximumLength = 2 * v13;
      RemainingString.Buffer = Buffer;
    }
    if ( v8 >= 0 )
    {
      Length += 2;
      DestinationString.Length = Length;
      goto LABEL_43;
    }
  }
LABEL_13:
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v8;
}

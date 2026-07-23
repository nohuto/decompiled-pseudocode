/*
 * XREFs of RtlUnicodeStringPrintfEx @ 0x14036F210
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x14073B250 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildIndirectString @ 0x14073D36C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14073D628 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiOpenDriverRedirectedStateKey @ 0x14077BD64 (PiOpenDriverRedirectedStateKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407C4FA4 (PiCreateDriverRedirectedStateKey.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x14089EE20 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x14089F628 (PiGetDriverMutableStateDirectory.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D11E0 (_vsnwprintf.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x14050C698 (RtlUnicodeStringExHandleOtherFlags.c)
 */

NTSTATUS RtlUnicodeStringPrintfEx(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING RemainingString,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  size_t v6; // r8
  const wchar_t *v7; // r11
  wchar_t *v8; // rcx
  size_t v9; // r14
  NTSTATUS v10; // ebx
  unsigned __int16 Length; // cx
  unsigned __int64 MaximumLength; // rax
  wchar_t *Buffer; // rdx
  wchar_t *v14; // r15
  size_t v15; // rsi
  size_t v16; // rdi
  int v17; // eax
  NTSTRSAFE_PCWSTR v19; // rax
  size_t pcchNewDestLength; // [rsp+40h] [rbp-28h] BYREF
  wchar_t *v21; // [rsp+48h] [rbp-20h]
  wchar_t *ppszDestEnd; // [rsp+50h] [rbp-18h] BYREF
  size_t pcchRemaining[2]; // [rsp+58h] [rbp-10h] BYREF
  va_list Args; // [rsp+D0h] [rbp+68h] BYREF

  va_start(Args, pszFormat);
  v6 = 0LL;
  v7 = pszFormat;
  v8 = 0LL;
  v9 = 0LL;
  v21 = 0LL;
  v10 = 0;
  if ( DestinationString || (dwFlags & 0x100) == 0 )
  {
    Length = DestinationString->Length;
    if ( (DestinationString->Length & 1) != 0 )
      return -1073741811;
    MaximumLength = DestinationString->MaximumLength;
    if ( (MaximumLength & 1) != 0 || Length > (unsigned __int16)MaximumLength || (_WORD)MaximumLength == 0xFFFF )
      return -1073741811;
    Buffer = DestinationString->Buffer;
    if ( !Buffer && (Length || (_WORD)MaximumLength) )
    {
      v10 = -1073741811;
      v8 = 0LL;
    }
    else
    {
      v21 = DestinationString->Buffer;
      v9 = MaximumLength >> 1;
      v8 = Buffer;
    }
  }
  if ( v10 >= 0 )
  {
    ppszDestEnd = v8;
    v14 = v8;
    pcchRemaining[0] = v9;
    LOWORD(v15) = v9;
    pcchNewDestLength = 0LL;
    LOWORD(v16) = 0;
    if ( (dwFlags & 0x100) != 0 )
    {
      v19 = (NTSTRSAFE_PCWSTR)&cchOriginalDestLength;
      if ( pszFormat )
        v19 = pszFormat;
      v7 = v19;
    }
    v10 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v10 = -1073741811;
    }
    else if ( v9 )
    {
      pcchRemaining[0] = 0LL;
      v17 = vsnwprintf(v8, v9, v7, Args);
      if ( v17 < 0 || (v16 = v17, v17 > v9) )
      {
        v16 = v9;
        pcchNewDestLength = v9;
        v10 = -2147483643;
      }
      else
      {
        pcchNewDestLength = v17;
      }
      v8 = v21;
      v15 = v9 - v16;
      pcchRemaining[0] = v9 - v16;
      v14 = &v21[v16];
      ppszDestEnd = v14;
      if ( v10 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v15 )
          memset(&v21[v16], (unsigned __int8)dwFlags, 2 * v15);
        goto LABEL_17;
      }
    }
    else
    {
      if ( !*v7 )
      {
LABEL_17:
        if ( DestinationString )
          DestinationString->Length = 2 * v16;
        if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
        {
          if ( RemainingString )
          {
            RemainingString->Length = 0;
            RemainingString->MaximumLength = 2 * v15;
            RemainingString->Buffer = v14;
          }
        }
        return v10;
      }
      v10 = v8 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && v9 )
    {
      RtlUnicodeStringExHandleOtherFlags(v8, v9, v6, &pcchNewDestLength, &ppszDestEnd, pcchRemaining, dwFlags);
      v14 = ppszDestEnd;
      LOWORD(v15) = pcchRemaining[0];
      LOWORD(v16) = pcchNewDestLength;
    }
    goto LABEL_17;
  }
  return v10;
}

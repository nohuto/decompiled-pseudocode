/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x1C001D9D4
 * Callers:
 *     HUBID_BuildContainerID @ 0x1C001EA90 (HUBID_BuildContainerID.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCbCatStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cbToAppend)
{
  unsigned __int64 Length; // rdx
  unsigned __int16 MaximumLength; // ax
  NTSTATUS v7; // ecx
  unsigned __int64 v8; // rdx
  size_t v9; // r10
  __int16 v10; // r11
  unsigned __int64 v11; // r8
  char *v12; // rdi

  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( (unsigned __int16)Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  v7 = 0;
  if ( !DestinationString->Buffer && ((_WORD)Length || MaximumLength) )
    return -1073741811;
  v8 = Length >> 1;
  v9 = cbToAppend >> 1;
  if ( cbToAppend >> 1 > 0x7FFF )
    return -1073741811;
  v10 = 0;
  v11 = ((unsigned __int64)DestinationString->MaximumLength >> 1) - v8;
  if ( v11 )
  {
    v12 = (char *)DestinationString->Buffer + 2 * v8 - (_QWORD)pszSrc;
    while ( v9 )
    {
      if ( *pszSrc )
      {
        *(NTSTRSAFE_PCWSTR)((char *)pszSrc + (_QWORD)v12) = *pszSrc;
        --v9;
        ++pszSrc;
        ++v10;
        if ( --v11 )
          continue;
      }
      if ( v11 )
        break;
      goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    if ( v9 && *pszSrc )
      v7 = -2147483643;
  }
  DestinationString->Length = 2 * (v10 + v8);
  return v7;
}

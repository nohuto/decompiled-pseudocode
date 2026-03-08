/*
 * XREFs of AslpPathWildcardMakeLeaves @ 0x140A53CE4
 * Callers:
 *     AslPathWildcardFindFirst @ 0x140A52910 (AslPathWildcardFindFirst.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     wcsncmp @ 0x1403D5ED0 (wcsncmp.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpPathWildcardMakeLeaves(WCHAR *SourceString)
{
  WCHAR *v1; // rdi
  wchar_t *Buffer; // rsi
  unsigned __int16 v3; // ax
  int v4; // ebx
  WCHAR v5; // cx
  int v6; // ebx
  WCHAR *v7; // rax
  _WORD *v8; // rcx
  WCHAR v9; // ax
  __int64 result; // rax
  UNICODE_STRING v11; // [rsp+30h] [rbp-18h] BYREF

  v1 = SourceString;
  if ( !SourceString || !*SourceString )
    return 0LL;
  v11 = 0LL;
  RtlInitUnicodeString(&v11, SourceString);
  if ( v11.Length < 2u || (Buffer = v11.Buffer, !*v11.Buffer) )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v3 = v11.Length >> 1;
  v4 = 4;
  if ( (unsigned __int16)(v11.Length >> 1) < 8u )
  {
    if ( v3 < 4u )
    {
      if ( v3 <= 2u )
        goto LABEL_16;
      goto LABEL_15;
    }
  }
  else if ( !wcsnicmp(v11.Buffer, L"\\??\\UNC\\", 8uLL) )
  {
    goto LABEL_17;
  }
  if ( wcsncmp(Buffer, L"\\??\\", 4uLL) )
  {
    if ( !wcsncmp(Buffer, L"\\\\?\\", 4uLL) || !wcsncmp(Buffer, L"\\\\.\\", 4uLL) )
    {
      v4 = 3;
      goto LABEL_17;
    }
LABEL_15:
    v4 = 3;
    if ( !wcsncmp(Buffer, L"\\\\", 2uLL) )
      goto LABEL_17;
LABEL_16:
    v4 = 0;
    goto LABEL_17;
  }
  v4 = 2;
LABEL_17:
  v5 = *v1;
  v6 = -v4;
  v7 = v1;
  while ( v5 )
  {
    if ( v5 == 92 )
    {
      if ( v6 >= 0 )
        *v7 = 0;
      ++v6;
    }
    v5 = *++v7;
  }
  v7[1] = 0;
  if ( *v1 )
  {
    do
LABEL_25:
      ++v1;
    while ( *v1 );
    v8 = v1 + 1;
    v9 = v1[1];
    if ( v9 )
    {
      while ( v9 != 42 && v9 != 63 )
      {
        v9 = *++v8;
        if ( !*v8 )
        {
          *v1 = 92;
          --v6;
          goto LABEL_25;
        }
      }
    }
  }
  result = (unsigned int)(v6 + 1);
  if ( (int)result < 0 )
    return 0LL;
  return result;
}

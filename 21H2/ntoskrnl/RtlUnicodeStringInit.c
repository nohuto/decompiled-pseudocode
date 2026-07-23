/*
 * XREFs of RtlUnicodeStringInit @ 0x1404ECA10
 * Callers:
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringInit(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS result; // eax
  __int64 v4; // r9
  NTSTRSAFE_PCWSTR v5; // rax
  unsigned __int16 v6; // cx

  result = 0;
  *DestinationString = 0LL;
  if ( pszSrc )
  {
    v4 = 0x7FFFLL;
    v5 = pszSrc;
    do
    {
      if ( !*v5 )
        break;
      ++v5;
      --v4;
    }
    while ( v4 );
    result = v4 == 0 ? 0xC000000D : 0;
    if ( v4 )
    {
      if ( DestinationString )
      {
        v6 = 2 * (v4 != 0 ? 0x7FFF - v4 : 0);
        DestinationString->Buffer = (wchar_t *)pszSrc;
        DestinationString->Length = v6;
        DestinationString->MaximumLength = v6 + 2;
      }
      else
      {
        return -1073741811;
      }
    }
  }
  return result;
}

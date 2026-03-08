/*
 * XREFs of ObpLookupDirectoryUsingHash @ 0x14076174C
 * Callers:
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     ObpLookupDirectoryEntry @ 0x14076161C (ObpLookupDirectoryEntry.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall ObpLookupDirectoryUsingHash(__int64 a1, const UNICODE_STRING *a2, __int64 a3, char a4)
{
  BOOLEAN v5; // bp
  __int64 **v7; // rdi
  __int64 *v8; // rbx
  __int64 result; // rax

  v5 = (a4 & 0x40) != 0;
  v7 = (__int64 **)(a1 + 8LL * *(unsigned __int8 *)(a3 + 20));
  v8 = *v7;
  if ( !*v7 )
    return 0LL;
  do
  {
    if ( *((_DWORD *)v8 + 4) == *(_DWORD *)(a3 + 16)
      && RtlEqualUnicodeString(
           a2,
           (PCUNICODE_STRING)(v8[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v8[1] - 48 + 26) & 3] + 8),
           v5) )
    {
      break;
    }
    v7 = (__int64 **)v8;
    v8 = (__int64 *)*v8;
  }
  while ( v8 );
  if ( !v8 )
    return 0LL;
  result = v8[1];
  *(_QWORD *)(a3 + 8) = v7;
  return result;
}

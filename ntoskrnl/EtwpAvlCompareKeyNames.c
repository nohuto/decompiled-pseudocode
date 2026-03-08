/*
 * XREFs of EtwpAvlCompareKeyNames @ 0x140391230
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x140684CA0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall EtwpAvlCompareKeyNames(
        struct _RTL_AVL_TABLE *Table,
        const WCHAR *FirstStruct,
        const WCHAR *SecondStruct)
{
  SIZE_T v4; // rdx
  SIZE_T v5; // r9
  unsigned int v6; // ebx
  LONG v7; // eax

  v4 = -1LL;
  v5 = -1LL;
  v6 = 0;
  do
    ++v5;
  while ( SecondStruct[v5] );
  do
    ++v4;
  while ( FirstStruct[v4] );
  v7 = RtlCompareUnicodeStrings(FirstStruct, v4, SecondStruct, v5, 1u);
  if ( v7 >= 0 )
  {
    LOBYTE(v6) = v7 <= 0;
    ++v6;
  }
  return v6;
}

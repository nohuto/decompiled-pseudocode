/*
 * XREFs of PiSwBusRelationsCompareInstancePath @ 0x140791080
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PiSwBusRelationsCompareInstancePath(
        struct _RTL_AVL_TABLE *Table,
        const UNICODE_STRING *FirstStruct,
        const UNICODE_STRING *SecondStruct)
{
  LONG v3; // ecx
  __int64 result; // rax

  v3 = RtlCompareUnicodeString(FirstStruct, SecondStruct, 1u);
  result = 0LL;
  if ( v3 >= 0 )
  {
    LOBYTE(result) = v3 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}

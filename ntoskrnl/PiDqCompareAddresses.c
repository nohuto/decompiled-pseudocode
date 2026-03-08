/*
 * XREFs of PiDqCompareAddresses @ 0x14078DDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDqCompareAddresses(struct _RTL_AVL_TABLE *Table, _QWORD *FirstStruct, _QWORD *SecondStruct)
{
  if ( *SecondStruct > *FirstStruct )
    return 0LL;
  else
    return 2 - (unsigned int)(*SecondStruct < *FirstStruct);
}

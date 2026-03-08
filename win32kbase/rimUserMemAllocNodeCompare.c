/*
 * XREFs of rimUserMemAllocNodeCompare @ 0x1C01967D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall rimUserMemAllocNodeCompare(struct _RTL_AVL_TABLE *Table, _QWORD *FirstStruct, _QWORD *SecondStruct)
{
  if ( *FirstStruct <= *SecondStruct )
    return *FirstStruct < *SecondStruct ? 0 : 2;
  else
    return 1LL;
}

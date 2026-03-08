/*
 * XREFs of VfPtComparePoolInfoCallback @ 0x140ADB6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VfPtComparePoolInfoCallback(struct _RTL_AVL_TABLE *Table, _QWORD *FirstStruct, _QWORD *SecondStruct)
{
  if ( *SecondStruct <= *FirstStruct )
    return 2 - (unsigned int)(*SecondStruct < *FirstStruct);
  else
    return 0LL;
}

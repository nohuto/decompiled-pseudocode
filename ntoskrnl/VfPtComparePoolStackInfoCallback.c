/*
 * XREFs of VfPtComparePoolStackInfoCallback @ 0x140ADB710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VfPtComparePoolStackInfoCallback(
        struct _RTL_AVL_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx

  if ( *FirstStruct < *SecondStruct )
    return 0LL;
  if ( *FirstStruct > *SecondStruct )
    return 1LL;
  v4 = FirstStruct[1];
  v5 = SecondStruct[1];
  if ( v5 <= v4 )
    return 2 - (unsigned int)(v5 < v4);
  else
    return 0LL;
}

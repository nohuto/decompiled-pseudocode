/*
 * XREFs of CcWaitForCurrentLazyWriterActivityOnPartition @ 0x1403CE98C
 * Callers:
 *     CcWaitForCurrentLazyWriterActivityHelper @ 0x1403CE960 (CcWaitForCurrentLazyWriterActivityHelper.c)
 *     CcExitPartition @ 0x140536FC8 (CcExitPartition.c)
 * Callees:
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403CEA10 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 */

__int64 __fastcall CcWaitForCurrentLazyWriterActivityOnPartition(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _QWORD **v3; // rsi
  _QWORD *i; // rdi
  int v7; // eax

  v2 = 0;
  v3 = (_QWORD **)(a2 + 48);
  if ( !a2 )
    v3 = (_QWORD **)(a1 + 16);
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
  {
    if ( *((_WORD *)i - 16) == 758 )
    {
      v7 = CcWaitForCurrentLazyWriterActivityOnNode(a1, a2);
      if ( v2 >= 0 && v7 < 0 )
        v2 = v7;
    }
  }
  return (unsigned int)v2;
}

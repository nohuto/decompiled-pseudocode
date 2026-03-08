/*
 * XREFs of MiReleasePrefetchGapPages @ 0x1402EDD24
 * Callers:
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiReturnPfnReferenceCount @ 0x1402EDD4C (MiReturnPfnReferenceCount.c)
 */

__int64 __fastcall MiReleasePrefetchGapPages(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = MiReturnPfnReferenceCount(a1);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}

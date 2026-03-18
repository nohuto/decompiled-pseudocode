/*
 * XREFs of ?IsMessageNonDelegated@CPointerInfoNode@@QEBAHHHH@Z @ 0x1C01CE304
 * Callers:
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C01CDFB0 (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPointerInfoNode::IsMessageNonDelegated(CPointerInfoNode *this, int a2, int a3, int a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 && (!a3 || a4) )
    return 1LL;
  return result;
}

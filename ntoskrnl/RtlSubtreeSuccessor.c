/*
 * XREFs of RtlSubtreeSuccessor @ 0x1405AC0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlSubtreeSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->RightChild;
  if ( result )
  {
    for ( i = result->LeftChild; i; i = i->LeftChild )
      result = i;
  }
  return result;
}

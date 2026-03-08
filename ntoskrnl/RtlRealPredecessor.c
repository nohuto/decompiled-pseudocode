/*
 * XREFs of RtlRealPredecessor @ 0x1405AC050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealPredecessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  RTL_SPLAY_LINKS *v2; // rdx
  _RTL_SPLAY_LINKS *v3; // r8
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->LeftChild;
  v2 = 0LL;
  v3 = Links;
  if ( result )
  {
    for ( i = result->RightChild; i; i = i->RightChild )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      Links = Links->Parent;
      if ( Links->LeftChild != v3 )
        break;
      v3 = Links;
    }
    if ( Links->RightChild == v3 )
      return Links;
    return v2;
  }
  return result;
}

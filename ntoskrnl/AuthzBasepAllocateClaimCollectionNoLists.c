/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x140A57120
 * Callers:
 *     SepCreateClaimAttributes @ 0x140780934 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1409CE654 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140297BFC (AuthzBasepMemAlloc.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall AuthzBasepAllocateClaimCollectionNoLists(__int64 a1, __int64 a2)
{
  void *result; // rax
  void *v3; // rbx

  result = (void *)AuthzBasepMemAlloc(608LL, a2, 1950442835LL);
  v3 = result;
  if ( result )
  {
    memset(result, 0, 0x260uLL);
    return v3;
  }
  return result;
}

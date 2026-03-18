/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x140A59DD4
 * Callers:
 *     SepCreateClaimAttributes @ 0x1407CF994 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1409D14F4 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x1402258AC (AuthzBasepMemAlloc.c)
 *     memset @ 0x140435400 (memset.c)
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

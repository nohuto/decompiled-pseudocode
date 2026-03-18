/*
 * XREFs of VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C029C9F0
 * Callers:
 *     <none>
 * Callees:
 *     BRUSHOBJ_pvAllocRbrush @ 0x1C026B050 (BRUSHOBJ_pvAllocRbrush.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029C964 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PVOID __fastcall VerifierBRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, ULONG cj)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return BRUSHOBJ_pvAllocRbrush(pbo, cj);
}

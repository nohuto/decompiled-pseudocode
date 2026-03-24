/*
 * XREFs of VerifierEngCreatePath @ 0x1C029E550
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x1C0286A10 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029E070 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *VerifierEngCreatePath()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreatePath();
}

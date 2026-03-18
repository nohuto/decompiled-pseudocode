/*
 * XREFs of VerifierEngCreatePath @ 0x1C029CE30
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x1C0283600 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029C964 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *VerifierEngCreatePath()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreatePath();
}

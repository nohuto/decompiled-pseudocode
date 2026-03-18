/*
 * XREFs of VerifierEngCreateClip @ 0x1C029CC80
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029C964 (-VerifierRandomFailure@@YAHK@Z.c)
 */

CLIPOBJ *VerifierEngCreateClip()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateClip();
}

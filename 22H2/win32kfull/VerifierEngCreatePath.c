/*
 * XREFs of VerifierEngCreatePath @ 0x1C029DF20
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x1C02863E0 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029DA40 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *VerifierEngCreatePath()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreatePath();
}

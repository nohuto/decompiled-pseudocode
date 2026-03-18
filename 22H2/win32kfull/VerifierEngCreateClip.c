/*
 * XREFs of VerifierEngCreateClip @ 0x1C02A6EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A6B60 (-VerifierRandomFailure@@YAHK@Z.c)
 */

CLIPOBJ *__fastcall VerifierEngCreateClip(__int64 a1)
{
  if ( (unsigned int)VerifierRandomFailure(a1) )
    return 0LL;
  else
    return EngCreateClip();
}

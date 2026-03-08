/*
 * XREFs of VerifierEngCreatePath @ 0x1C02A9740
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x1C0289A20 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A923C (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *__fastcall VerifierEngCreatePath(__int64 a1)
{
  if ( (unsigned int)VerifierRandomFailure(a1) )
    return 0LL;
  else
    return EngCreatePath();
}

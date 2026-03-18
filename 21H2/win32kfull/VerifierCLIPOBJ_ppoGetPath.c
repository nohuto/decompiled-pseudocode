/*
 * XREFs of VerifierCLIPOBJ_ppoGetPath @ 0x1C029CA30
 * Callers:
 *     <none>
 * Callees:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C026B18C (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029C964 (-VerifierRandomFailure@@YAHK@Z.c)
 */

struct _PATHOBJ *__fastcall VerifierCLIPOBJ_ppoGetPath(XCLIPOBJ *this)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return XCLIPOBJ::ppoGetPath(this);
}

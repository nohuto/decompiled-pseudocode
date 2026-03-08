/*
 * XREFs of ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1C026D7EC
 * Callers:
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C026D16C (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C026D2B0 (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C026D69C (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C026DDD4 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PFTOBJ::bIsPrivatePFT(PFTOBJ *this)
{
  return *(_QWORD *)this == *((_QWORD *)Gre::Base::Globals(this) + 796);
}

/*
 * XREFs of ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1C026AF1C
 * Callers:
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C026A85C (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C026A9A8 (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C026ADB8 (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C026B318 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PFTOBJ::bIsPrivatePFT(PFTOBJ *this)
{
  return *(_QWORD *)this == *((_QWORD *)Gre::Base::Globals(this) + 796);
}

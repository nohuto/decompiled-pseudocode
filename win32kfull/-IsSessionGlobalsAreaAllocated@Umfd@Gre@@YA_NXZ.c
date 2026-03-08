/*
 * XREFs of ?IsSessionGlobalsAreaAllocated@Umfd@Gre@@YA_NXZ @ 0x1C009376C
 * Callers:
 *     zzzCalcStartCursorHide @ 0x1C00612C0 (zzzCalcStartCursorHide.c)
 *     UmfdSessionUninitialize @ 0x1C0092A20 (UmfdSessionUninitialize.c)
 *     GreIsProcessSystemCritical @ 0x1C009373C (GreIsProcessSystemCritical.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::Umfd::IsSessionGlobalsAreaAllocated(Gre::Umfd *this)
{
  return *(_QWORD *)(SGDGetSessionState(this) + 40) != 0LL;
}

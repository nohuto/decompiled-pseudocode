/*
 * XREFs of ?IsSessionGlobalsAreaAllocated@Umfd@Gre@@YA_NXZ @ 0x1C00E5E54
 * Callers:
 *     UmfdSessionUninitialize @ 0x1C00BA380 (UmfdSessionUninitialize.c)
 *     GreIsProcessSystemCritical @ 0x1C00E26AC (GreIsProcessSystemCritical.c)
 *     zzzCalcStartCursorHide @ 0x1C00E5F30 (zzzCalcStartCursorHide.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::Umfd::IsSessionGlobalsAreaAllocated(Gre::Umfd *this)
{
  return *(_QWORD *)(SGDGetSessionState(this) + 40) != 0LL;
}

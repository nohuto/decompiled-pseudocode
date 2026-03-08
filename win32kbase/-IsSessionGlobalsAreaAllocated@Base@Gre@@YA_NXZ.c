/*
 * XREFs of ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x1C009FBB0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C009EFD4 (MultiUserNtGreCleanup.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::Base::IsSessionGlobalsAreaAllocated(Gre::Base *this)
{
  return *(_QWORD *)(SGDGetSessionState(this) + 24) != 0LL;
}

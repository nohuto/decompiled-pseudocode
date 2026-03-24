/*
 * XREFs of EditionCloseDesktopEntryPoint @ 0x1C00D8F30
 * Callers:
 *     <none>
 * Callees:
 *     _CloseDesktop @ 0x1C00D8F78 (_CloseDesktop.c)
 */

__int64 __fastcall EditionCloseDesktopEntryPoint(HANDLE Handle)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 1LL);
  LODWORD(Handle) = (int)CloseDesktop(Handle) >= 0;
  UserSessionSwitchLeaveCrit(v2);
  return (unsigned int)Handle;
}

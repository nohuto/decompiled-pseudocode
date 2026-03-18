/*
 * XREFs of EditionCloseDesktopEntryPoint @ 0x1C006AE20
 * Callers:
 *     <none>
 * Callees:
 *     _CloseDesktop @ 0x1C006AE68 (_CloseDesktop.c)
 */

__int64 __fastcall EditionCloseDesktopEntryPoint(HANDLE Handle)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  EnterCrit(0LL, 0LL);
  LODWORD(Handle) = (int)CloseDesktop(Handle) >= 0;
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return (unsigned int)Handle;
}

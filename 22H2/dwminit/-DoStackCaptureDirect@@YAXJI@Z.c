/*
 * XREFs of ?DoStackCaptureDirect@@YAXJI@Z @ 0x180003BD0
 * Callers:
 *     ?WaitForLsa@@YAJXZ @ 0x180001B38 (-WaitForLsa@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x18000205C (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x180002660 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002AC8 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002E80 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpCreateSessionProcess @ 0x180003360 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogon @ 0x1800034F0 (DwmpNotifyUserLogon.c)
 *     DwmpNotifyUserLogoff @ 0x180003770 (DwmpNotifyUserLogoff.c)
 *     DwmpSignalSessionShutdown @ 0x180003EB0 (DwmpSignalSessionShutdown.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCaptureDirect(int a1, int a2)
{
  PVOID retaddr; // [rsp+0h] [rbp+0h]

  DoStackCapture(a1, a2, retaddr);
}

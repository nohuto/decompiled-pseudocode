/*
 * XREFs of ZwQueryBootEntryOrder @ 0x14041E020
 * Callers:
 *     DifZwQueryBootEntryOrderWrapper @ 0x140623900 (DifZwQueryBootEntryOrderWrapper.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409F7390 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x140A207C4 (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x140A22034 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

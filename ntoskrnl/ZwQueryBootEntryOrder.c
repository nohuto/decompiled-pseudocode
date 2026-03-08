/*
 * XREFs of ZwQueryBootEntryOrder @ 0x140414C10
 * Callers:
 *     DifZwQueryBootEntryOrderWrapper @ 0x1405F1290 (DifZwQueryBootEntryOrderWrapper.c)
 *     BiQueryBootEntryOrder @ 0x14082BC18 (BiQueryBootEntryOrder.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409F43F8 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x140A5D1A4 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

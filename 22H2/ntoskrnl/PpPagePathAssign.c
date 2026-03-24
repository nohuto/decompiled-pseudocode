/*
 * XREFs of PpPagePathAssign @ 0x1408A0FF0
 * Callers:
 *     MiCreatePagingFile @ 0x1407B6DDC (MiCreatePagingFile.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C8D94 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PiPagePathSetState @ 0x1407C9D60 (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathAssign(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 1);
}

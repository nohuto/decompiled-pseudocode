/*
 * XREFs of PpPagePathRelease @ 0x1408A1118
 * Callers:
 *     MiCreatePagingFile @ 0x1407B6B3C (MiCreatePagingFile.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C9194 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     PiPagePathSetState @ 0x1407CA160 (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathRelease(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 0);
}

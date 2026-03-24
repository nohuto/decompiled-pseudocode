/*
 * XREFs of PpPagePathRelease @ 0x1408A0FB8
 * Callers:
 *     MiCreatePagingFile @ 0x1407B661C (MiCreatePagingFile.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C8E74 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     PiPagePathSetState @ 0x1407C9E40 (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathRelease(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 0);
}

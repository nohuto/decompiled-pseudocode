/*
 * XREFs of IoGetRelatedTargetDevice @ 0x1406F3B0C
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x1406F3A30 (FsRtlNotifyVolumeEventEx.c)
 *     PiPagePathSetState @ 0x1408512E8 (PiPagePathSetState.c)
 *     NtSetVolumeInformationFile @ 0x14087CFF0 (NtSetVolumeInformationFile.c)
 *     NtGetDevicePowerState @ 0x140988280 (NtGetDevicePowerState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x140202D04 (PnpGetRelatedTargetDevice.c)
 */

__int64 __fastcall IoGetRelatedTargetDevice(struct _FILE_OBJECT *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  result = PnpGetRelatedTargetDevice(a1, &v4);
  if ( (int)result >= 0 )
  {
    if ( v4 )
      *a2 = *(_QWORD *)(v4 + 32);
  }
  return result;
}

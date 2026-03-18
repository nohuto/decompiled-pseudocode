/*
 * XREFs of IoGetRelatedTargetDevice @ 0x140794AAC
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x1407949D0 (FsRtlNotifyVolumeEventEx.c)
 *     PiPagePathSetState @ 0x140854B58 (PiPagePathSetState.c)
 *     NtSetVolumeInformationFile @ 0x140881DA0 (NtSetVolumeInformationFile.c)
 *     NtGetDevicePowerState @ 0x14098B330 (NtGetDevicePowerState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x1403224B8 (PnpGetRelatedTargetDevice.c)
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

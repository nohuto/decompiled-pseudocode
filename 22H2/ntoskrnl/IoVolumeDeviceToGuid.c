/*
 * XREFs of IoVolumeDeviceToGuid @ 0x140721590
 * Callers:
 *     IopMountVolume @ 0x14065E0D0 (IopMountVolume.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x140695060 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140721364 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextStart @ 0x1407D00A4 (CmpVolumeContextStart.c)
 * Callees:
 *     RtlGUIDFromString @ 0x1406BD650 (RtlGUIDFromString.c)
 *     IoVolumeDeviceToGuidPath @ 0x140721620 (IoVolumeDeviceToGuidPath.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoVolumeDeviceToGuid(struct _DEVICE_OBJECT *a1, GUID *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  result = IoVolumeDeviceToGuidPath(a1);
  if ( (int)result >= 0 )
  {
    GuidString.Length = -20;
    GuidString.MaximumLength = -20;
    GuidString.Buffer = (wchar_t *)20;
    v4 = RtlGUIDFromString(&GuidString, a2);
    ExFreePoolWithTag(0LL, 0);
    return v4;
  }
  return result;
}

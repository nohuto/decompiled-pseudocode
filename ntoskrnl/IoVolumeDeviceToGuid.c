/*
 * XREFs of IoVolumeDeviceToGuid @ 0x14072BB40
 * Callers:
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14072B8A0 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextStart @ 0x14084C4D0 (CmpVolumeContextStart.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x14086AFA0 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CcGetDeviceGuid @ 0x140870B48 (CcGetDeviceGuid.c)
 * Callees:
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     IoVolumeDeviceToGuidPath @ 0x14072BBD0 (IoVolumeDeviceToGuidPath.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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

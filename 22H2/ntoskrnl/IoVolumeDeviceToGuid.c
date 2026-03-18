/*
 * XREFs of IoVolumeDeviceToGuid @ 0x140701F50
 * Callers:
 *     IopMountVolume @ 0x140701598 (IopMountVolume.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140701CB8 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextStart @ 0x14084F880 (CmpVolumeContextStart.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x14086D4C0 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CcGetDeviceGuid @ 0x140873A00 (CcGetDeviceGuid.c)
 * Callees:
 *     RtlGUIDFromString @ 0x1406CF770 (RtlGUIDFromString.c)
 *     IoVolumeDeviceToGuidPath @ 0x140701FE0 (IoVolumeDeviceToGuidPath.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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

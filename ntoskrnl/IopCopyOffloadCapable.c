/*
 * XREFs of IopCopyOffloadCapable @ 0x140873058
 * Callers:
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 * Callees:
 *     FsRtlGetSupportedFeatures @ 0x1402CBB70 (FsRtlGetSupportedFeatures.c)
 *     IoGetAttachedDevice @ 0x14030EE00 (IoGetAttachedDevice.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 */

__int64 __fastcall IopCopyOffloadCapable(struct _FILE_OBJECT *a1, int a2)
{
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  if ( (a1->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(a1->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(a1);
  result = FsRtlGetSupportedFeatures((__int64)AttachedDevice, &v5);
  if ( (int)result >= 0 )
  {
    if ( a2 == 606820 )
    {
      if ( (v5 & 1) == 0 )
        return 3221267105LL;
    }
    else if ( (v5 & 2) == 0 )
    {
      return 3221267106LL;
    }
  }
  return result;
}

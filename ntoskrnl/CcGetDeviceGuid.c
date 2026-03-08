/*
 * XREFs of CcGetDeviceGuid @ 0x140870B48
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x14036D0F0 (CcInitializeVolumeCacheMap.c)
 *     CcGetDeviceGuidAsync @ 0x1403A75C0 (CcGetDeviceGuidAsync.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x14034C170 (KeAreAllApcsDisabled.c)
 *     IoVolumeDeviceToGuid @ 0x14072BB40 (IoVolumeDeviceToGuid.c)
 */

__int64 __fastcall CcGetDeviceGuid(__int64 a1, GUID *a2)
{
  __int64 v4; // rcx
  struct _DEVICE_OBJECT *v5; // rcx

  if ( KeAreAllApcsDisabled() )
    return 3221225473LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = v4 ? *(struct _DEVICE_OBJECT **)(v4 + 16) : *(struct _DEVICE_OBJECT **)(a1 + 8);
  if ( !v5 )
    return 3221225473LL;
  else
    return IoVolumeDeviceToGuid(v5, a2);
}

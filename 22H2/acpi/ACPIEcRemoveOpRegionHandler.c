/*
 * XREFs of ACPIEcRemoveOpRegionHandler @ 0x1C0083744
 * Callers:
 *     ACPIEcStopRemoveDeviceCommon @ 0x1C00258B0 (ACPIEcStopRemoveDeviceCommon.c)
 * Callees:
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C000ABBC (OSConvertDeviceHandleToNSHANDLE.c)
 *     UnRegisterOperationRegionHandler @ 0x1C008BE00 (UnRegisterOperationRegionHandler.c)
 */

__int64 __fastcall ACPIEcRemoveOpRegionHandler(ULONG_PTR *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  v3 = OSConvertDeviceHandleToNSHANDLE(*a1);
  if ( v3 )
    return (unsigned int)UnRegisterOperationRegionHandler(v3, a1[10]);
  return v2;
}

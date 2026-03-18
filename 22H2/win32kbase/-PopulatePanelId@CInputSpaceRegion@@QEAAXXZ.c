/*
 * XREFs of ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1C006D25C
 * Callers:
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C0063720 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00BC644 (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     DrvDxgkGetMonitorDeviceObject @ 0x1C006D2C0 (DrvDxgkGetMonitorDeviceObject.c)
 *     RIMGetPanelId @ 0x1C006D320 (RIMGetPanelId.c)
 */

void __fastcall CInputSpaceRegion::PopulatePanelId(CInputSpaceRegion *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  v2 = 0LL;
  if ( (int)DrvDxgkGetMonitorDeviceObject((char *)this + 36, *((unsigned int *)this + 11), &Object, &v2) >= 0 )
  {
    RIMGetPanelId(v2, (char *)this + 48);
    ObfDereferenceObject(Object);
  }
}

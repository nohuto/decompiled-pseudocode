/*
 * XREFs of ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C001459C
 * Callers:
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C0010184 (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C0013E98 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C0014408 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CInputSpaceRegion *__fastcall CInputSpace::Iter::ModifiableRegion(CInputSpace::Iter *this)
{
  __int64 v2; // rbx
  __int64 v3; // r8

  v2 = 0LL;
  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 140LL);
  v3 = *((_QWORD *)this + 2);
  if ( v3 != *((_QWORD *)this + 1) )
    return (struct CInputSpaceRegion *)(v3 + 16);
  return (struct CInputSpaceRegion *)v2;
}

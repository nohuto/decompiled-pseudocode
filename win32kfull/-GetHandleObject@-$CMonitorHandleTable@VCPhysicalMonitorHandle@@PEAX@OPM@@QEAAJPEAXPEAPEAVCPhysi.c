/*
 * XREFs of ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C026C760
 * Callers:
 *     ?DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z @ 0x1C026B7A0 (-DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z.c)
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x1C026BEB4 (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z.c)
 *     ?DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z @ 0x1C026BFCC (-DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z.c)
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z @ 0x1C026C12C (-DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z.c)
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x1C026C6B0 (-DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z.c)
 *     ?GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z @ 0x1C026C7DC (-GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z.c)
 *     NtGdiDDCCISaveCurrentSettings @ 0x1C026CDD0 (NtGdiDDCCISaveCurrentSettings.c)
 *     NtGdiDDCCISetVCPFeature @ 0x1C026CE60 (NtGdiDDCCISetVCPFeature.c)
 * Callees:
 *     ?GetElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C026C738 (-GetElement@-$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z.c)
 */

__int64 __fastcall OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(
        __int64 a1,
        void *a2,
        OPM::CMonitorPDO **a3)
{
  OPM::CMonitorPDO *v6; // rdi
  OPM::CMonitorPDO *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( OPM::INVALID_MONITOR_HANDLE == a2 || (unsigned __int64)a2 > 0xFFFFFFFF )
    return *(unsigned int *)(a1 + 16);
  v7 = 0LL;
  if ( (int)OPM::CList<CPhysicalMonitorHandle>::GetElement(a1, (unsigned int)a2, &v7) < 0 )
    return *(unsigned int *)(a1 + 16);
  v6 = v7;
  if ( !OPM::CMonitorPDO::DoesCurrentProcessOwnProtectedOutput(v7) )
    return *(unsigned int *)(a1 + 16);
  *a3 = v6;
  return 0LL;
}

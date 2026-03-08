/*
 * XREFs of ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C026C2D0
 * Callers:
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C026B94C (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z @ 0x1C026C050 (-DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z.c)
 *     ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z @ 0x1C026C1CC (-DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z.c)
 * Callees:
 *     ?DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z @ 0x1C026C404 (-DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AEAAJK_JPEAXK1K@Z.c)
 *     ?VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEPEBEK@Z @ 0x1C026C9C4 (-VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEPEBEK@Z.c)
 */

int __fastcall CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(
        CPhysicalMonitorHandle *this,
        __int64 a2,
        void *a3,
        unsigned int a4)
{
  int result; // eax
  unsigned __int8 v7; // cl
  _DWORD v8[6]; // [rsp+40h] [rbp-18h] BYREF

  v8[1] = 0;
  v8[0] = 111;
  result = CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(this, 0x232447u, a2, v8, 8u, a3, a4);
  if ( result >= 0 )
    return CPhysicalMonitorHandle::VerifyDDCCIMessageChecksum(v7, (const unsigned __int8 *)a3, a4);
  return result;
}

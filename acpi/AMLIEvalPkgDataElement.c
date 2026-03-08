/*
 * XREFs of AMLIEvalPkgDataElement @ 0x1C0047F38
 * Callers:
 *     ACPIFanFSTCallback @ 0x1C0026F60 (ACPIFanFSTCallback.c)
 *     LinkNodeCrackPrt @ 0x1C005CE9C (LinkNodeCrackPrt.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x1C0084960 (ACPIFanPrepareImpactZoneSupport.c)
 *     ACPIThermalBuildConstraints @ 0x1C0095638 (ACPIThermalBuildConstraints.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0098134 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C00984B0 (ACPIProcessPhysicalDeviceLocationPackage.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C004BD50 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1C004D630 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     EvalPackageElement @ 0x1C004F6E4 (EvalPackageElement.c)
 */

__int64 __fastcall AMLIEvalPkgDataElement(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx
  int ObjectTypeName; // eax

  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  if ( (gDebugger & 8) != 0 )
    PrintDebugMessage(49, (unsigned int)KeGetCurrentThread(), a1, a2, 0LL);
  if ( *(_WORD *)(a1 + 2) == 4 )
  {
    v6 = EvalPackageElement(*(_QWORD *)(a1 + 32), a2, a3);
    if ( v6 == 32772 )
      return 259;
  }
  else
  {
    v6 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
    PrintDebugMessage(50, ObjectTypeName, 0, 0, 0LL);
  }
  return v6;
}

/*
 * XREFs of WheapGetErrorSource @ 0x1405BBA0C
 * Callers:
 *     HalpMcaReportError @ 0x1404BA9E0 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x1404BD690 (HalHandleNMI.c)
 *     WheapReportBootError @ 0x1405BAE04 (WheapReportBootError.c)
 *     WheaGetErrorSource @ 0x1405BB040 (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x1405BB070 (WheaReportHwError.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x1405BB718 (WheapAttemptArchitecturalErrorRecovery.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x1405BBBF0 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1405BBEC0 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x1405BC2AC (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x1405BC310 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1405BC3C0 (WheapInitErrorReportDeviceDriver.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x1405BD8D8 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheaRemoveErrorSource @ 0x14095CF90 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall WheapGetErrorSource(__int64 a1, int a2)
{
  int v2; // r9d
  int v3; // r8d
  __int64 *result; // rax

  if ( *(_DWORD *)a1 != 1279410516 )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  result = *(__int64 **)(a1 + 16);
  if ( v2 <= 0 )
    return 0LL;
  while ( *((_DWORD *)result + 31) != a2 || *((_BYTE *)result + 88) || *((_DWORD *)result + 27) != 2 )
  {
    result = (__int64 *)*result;
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return result;
}

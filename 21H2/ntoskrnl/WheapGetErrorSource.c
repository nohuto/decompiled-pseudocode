/*
 * XREFs of WheapGetErrorSource @ 0x1405BBCFC
 * Callers:
 *     HalpMcaReportError @ 0x1404BACD0 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x1404BD980 (HalHandleNMI.c)
 *     WheapReportBootError @ 0x1405BB0F4 (WheapReportBootError.c)
 *     WheaGetErrorSource @ 0x1405BB330 (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x1405BB360 (WheaReportHwError.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x1405BBA08 (WheapAttemptArchitecturalErrorRecovery.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x1405BBEE0 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1405BC1B0 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x1405BC59C (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x1405BC600 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1405BC6B0 (WheapInitErrorReportDeviceDriver.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x1405BDBC8 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheaRemoveErrorSource @ 0x14095D100 (WheaRemoveErrorSource.c)
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

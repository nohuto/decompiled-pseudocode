/*
 * XREFs of WheapGetErrorSource @ 0x14060EAE8
 * Callers:
 *     HalpMcaReportError @ 0x140501778 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x140504300 (HalHandleNMI.c)
 *     KiMcheckAlternateReturn @ 0x14057DEF0 (KiMcheckAlternateReturn.c)
 *     WheapReportBootError @ 0x14060E01C (WheapReportBootError.c)
 *     WheaErrorSourceGetState @ 0x14060E190 (WheaErrorSourceGetState.c)
 *     WheaGetErrorSource @ 0x14060E1E0 (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x14060E280 (WheaReportHwError.c)
 *     WheapAttemptErrorRecovery @ 0x14060E8B4 (WheapAttemptErrorRecovery.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x14060ED50 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x14060F030 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x14060F444 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x14060F4C0 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x14060F578 (WheapInitErrorReportDeviceDriver.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x140611798 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheaRemoveErrorSource @ 0x140A04C80 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall WheapGetErrorSource(__int64 a1, unsigned int a2)
{
  int v2; // r10d
  int v3; // r9d
  __int64 *v4; // r8

  if ( *(_DWORD *)a1 != 1279410516 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( a2 >= *(_DWORD *)(a1 + 8) )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  v4 = *(__int64 **)(a1 + 16);
  if ( v2 <= 0 )
    return 0LL;
  while ( *((_DWORD *)v4 + 31) != a2 || *((_BYTE *)v4 + 88) || (unsigned int)(*((_DWORD *)v4 + 27) - 1) > 1 )
  {
    v4 = (__int64 *)*v4;
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return v4;
}

/*
 * XREFs of WheapGetErrorSource @ 0x140610F08
 * Callers:
 *     HalpMcaReportError @ 0x140503858 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x1405063E0 (HalHandleNMI.c)
 *     KiMcheckAlternateReturn @ 0x140580420 (KiMcheckAlternateReturn.c)
 *     WheapReportBootError @ 0x140610438 (WheapReportBootError.c)
 *     WheaErrorSourceGetState @ 0x1406105B0 (WheaErrorSourceGetState.c)
 *     WheaGetErrorSource @ 0x140610600 (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x1406106A0 (WheaReportHwError.c)
 *     WheapAttemptErrorRecovery @ 0x140610CD4 (WheapAttemptErrorRecovery.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140611170 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x140611450 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x140611864 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x1406118E0 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x140611998 (WheapInitErrorReportDeviceDriver.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x140613BB8 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheaRemoveErrorSource @ 0x140A07970 (WheaRemoveErrorSource.c)
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

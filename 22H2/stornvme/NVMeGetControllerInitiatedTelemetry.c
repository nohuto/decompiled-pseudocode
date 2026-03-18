/*
 * XREFs of NVMeGetControllerInitiatedTelemetry @ 0x1C001D9D8
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DD8C (NVMeControllerInitPart3.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C000C26C (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EEA4 (NVMeFreeDmaBuffer.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1C001DBD0 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DCC4 (NVMeGetControllerInitiatedTelemetryLog.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetry(__int64 a1)
{
  unsigned int DmaBuffer; // ebx
  void *v4; // rax
  __int64 v5; // r8
  void *v6; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v7; // [rsp+C8h] [rbp+10h]

  v6 = 0LL;
  v7 = 0LL;
  if ( *(_BYTE *)(a1 + 20) )
    return 3238002697LL;
  DmaBuffer = NVMeAllocateDmaBuffer(a1, 0x200u);
  if ( DmaBuffer )
    goto LABEL_12;
  if ( v6 )
  {
    DmaBuffer = NVMeGetControllerInitiatedTelemetryHeader(a1, v6);
    if ( DmaBuffer )
      goto LABEL_12;
    v4 = v6;
    if ( v6 )
    {
      if ( !*((_WORD *)v6 + 6) )
      {
        DmaBuffer = -1056964599;
        goto LABEL_13;
      }
      DmaBuffer = NVMeGetControllerInitiatedTelemetryLog(a1);
      if ( !DmaBuffer )
      {
        v4 = v6;
        if ( *((_BYTE *)v6 + 383) != *(_BYTE *)(*(_QWORD *)(a1 + 4248) + 383LL) )
          DmaBuffer = -1056964607;
        goto LABEL_13;
      }
LABEL_12:
      v4 = v6;
LABEL_13:
      if ( v4 )
        NVMeFreeDmaBuffer(a1, 512LL, (__int64 *)&v6, v7);
    }
  }
  if ( DmaBuffer )
  {
    v5 = *(_QWORD *)(a1 + 4248);
    if ( v5 )
      StorPortExtendedFunction(1LL, a1, v5);
    *(_OWORD *)(a1 + 4248) = 0LL;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(86LL, a1, 0LL);
  }
  return DmaBuffer;
}

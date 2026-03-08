/*
 * XREFs of NVMeGetControllerInitiatedTelemetry @ 0x1C001D968
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DCDC (NVMeControllerInitPart3.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1C001DB60 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DC54 (NVMeGetControllerInitiatedTelemetryLog.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetry(__int64 a1)
{
  unsigned int DmaBuffer; // ebx
  __int64 v4; // r9
  void *v5; // rax
  __int64 v6; // r8
  void *v7; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v8; // [rsp+C8h] [rbp+10h]

  v7 = 0LL;
  v8 = 0LL;
  if ( *(_BYTE *)(a1 + 20) )
    return 3238002697LL;
  DmaBuffer = NVMeAllocateDmaBuffer(a1, 0x200u);
  if ( DmaBuffer )
    goto LABEL_12;
  if ( v7 )
  {
    DmaBuffer = NVMeGetControllerInitiatedTelemetryHeader(a1, v7);
    if ( DmaBuffer )
      goto LABEL_12;
    v5 = v7;
    if ( v7 )
    {
      if ( !*((_WORD *)v7 + 6) )
      {
        DmaBuffer = -1056964599;
        goto LABEL_13;
      }
      DmaBuffer = NVMeGetControllerInitiatedTelemetryLog(a1);
      if ( !DmaBuffer )
      {
        v5 = v7;
        if ( *((_BYTE *)v7 + 383) != *(_BYTE *)(*(_QWORD *)(a1 + 4248) + 383LL) )
          DmaBuffer = -1056964607;
        goto LABEL_13;
      }
LABEL_12:
      v5 = v7;
LABEL_13:
      if ( v5 )
        NVMeFreeDmaBuffer(a1, 512LL, (__int64 *)&v7, v8);
    }
  }
  if ( DmaBuffer )
  {
    v6 = *(_QWORD *)(a1 + 4248);
    if ( v6 )
      StorPortExtendedFunction(1LL, a1, v6, v4);
    *(_OWORD *)(a1 + 4248) = 0LL;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
  }
  return DmaBuffer;
}

/*
 * XREFs of NVMeHwPassiveInitialize @ 0x1C0005F00
 * Callers:
 *     <none>
 * Callees:
 *     NVMeLogEtwControllerInfo @ 0x1C0005BE0 (NVMeLogEtwControllerInfo.c)
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 *     NVMeLogTelemetryControllerInfo @ 0x1C0009604 (NVMeLogTelemetryControllerInfo.c)
 *     NVMePowerInitialize @ 0x1C0009B20 (NVMePowerInitialize.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0017B68 (NVMeControllerStartFailureEventLog.c)
 */

char __fastcall NVMeHwPassiveInitialize(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // di
  unsigned __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 1640);
  v3 = 1;
  StorPortExtendedFunction(55LL, a1, 0LL, &unk_1C00271B0);
  if ( *(_DWORD *)(v1 + 516) )
  {
    if ( (unsigned int)NVMeControllerInitPart2(a1) )
    {
LABEL_9:
      NVMeControllerStartFailureEventLog(a1);
      NVMeLogEtwControllerInfo(a1);
      return 0;
    }
    v4 = *(unsigned __int16 *)(a1 + 302) * (unsigned __int64)*(unsigned __int16 *)(a1 + 304);
    if ( !v4 )
      LODWORD(v4) = 128;
    StorPortExtendedFunction(84LL, a1, (unsigned int)v4, (unsigned int)v4);
  }
  if ( !(unsigned __int8)NVMeControllerInitPart3(a1) )
    goto LABEL_9;
  NVMePowerInitialize(a1);
  NVMeLogEtwControllerInfo(a1);
  NVMeLogTelemetryControllerInfo(a1);
  return v3;
}

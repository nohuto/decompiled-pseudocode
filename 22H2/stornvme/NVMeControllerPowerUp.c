/*
 * XREFs of NVMeControllerPowerUp @ 0x1C000E398
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0006080 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeControllerPostPowerUp @ 0x1C0006760 (NVMeControllerPostPowerUp.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C000A6FC (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C000B3DC (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000DC0C (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000DDD0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000E014 (NVMeControllerInitPart3.c)
 *     NVMeQueuesReInit @ 0x1C0010990 (NVMeQueuesReInit.c)
 */

__int64 __fastcall NVMeControllerPowerUp(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char inited; // al
  __int64 v6; // r8
  __int64 v7; // r9

  *(_DWORD *)(a1 + 24) &= ~4u;
  StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
  NVMeQueuesReInit(a1);
  inited = ControllerReset(a1, v2, v3, v4);
  if ( inited == 1 )
  {
    inited = NVMeControllerInitPart1(a1, 0);
    if ( inited == 1 )
    {
      LOBYTE(v6) = 1;
      inited = NVMeControllerInitPart2(a1, 0LL, v6, v7);
      if ( inited == 1 )
        inited = NVMeControllerInitPart3(a1);
    }
  }
  if ( inited )
    NVMeControllerPostPowerUp(a1);
  else
    NVMeControllerStartFailureEventLog(a1);
  return StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
}

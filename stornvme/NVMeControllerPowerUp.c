/*
 * XREFs of NVMeControllerPowerUp @ 0x1C000E0F4
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0003050 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0007C08 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C0009668 (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000D7A8 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000D9F0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000DCDC (NVMeControllerInitPart3.c)
 *     NVMeQueuesReInit @ 0x1C0010588 (NVMeQueuesReInit.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C0023ED4 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 */

__int64 __fastcall NVMeControllerPowerUp(__int64 a1)
{
  unsigned int inited; // edi
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // eax

  *(_DWORD *)(a1 + 32) &= ~4u;
  NVMeQueuesReInit();
  inited = ControllerReset(a1, 1);
  if ( inited || (inited = NVMeControllerInitPart1(a1, 0)) != 0 || (inited = NVMeControllerInitPart2(a1, 0, 1)) != 0 )
  {
    NVMeControllerStartFailureEventLog(a1);
  }
  else
  {
    NVMeControllerInitPart3(a1);
    v4 = *(_DWORD *)(a1 + 4336);
    if ( (v4 & 2) != 0 )
    {
      v5 = v4 & 0xFFFFFFFD;
      *(_DWORD *)(a1 + 4336) = v5;
      LOBYTE(v3) = (v5 & 4) != 0;
      NVMeSetNonOperationalPowerStatePermissiveMode(a1, v3);
    }
  }
  return inited;
}

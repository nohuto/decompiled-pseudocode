/*
 * XREFs of HUBDSM_DisarmingDeviceForWakeOnPortResumed @ 0x1C0023FA0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C002A82C (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_DisarmingDeviceForWakeOnPortResumed(__int64 a1)
{
  HUBDTX_DisarmDeviceForWakeUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}

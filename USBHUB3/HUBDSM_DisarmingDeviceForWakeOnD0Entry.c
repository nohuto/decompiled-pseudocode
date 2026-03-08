/*
 * XREFs of HUBDSM_DisarmingDeviceForWakeOnD0Entry @ 0x1C0023F70
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteWaitWake @ 0x1C001C3F0 (HUBPDO_CompleteWaitWake.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C002A82C (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_DisarmingDeviceForWakeOnD0Entry(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBPDO_CompleteWaitWake(v1);
  HUBDTX_DisarmDeviceForWakeUsingControlTransfer(v1);
  return 1000LL;
}

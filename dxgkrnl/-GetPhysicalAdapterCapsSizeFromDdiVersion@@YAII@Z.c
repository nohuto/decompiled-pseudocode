/*
 * XREFs of ?GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z @ 0x1C021AA70
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0377EA0 (-VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPhysicalAdapterCapsSizeFromDdiVersion(unsigned int a1)
{
  if ( a1 < 0xC003 )
    return a1 < 0x6000 ? 20 : 24;
  else
    return 32LL;
}

/*
 * XREFs of ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x1C005B54C
 * Callers:
 *     ??1DXGK_VIRTUAL_GPU_PARAV@@EEAA@XZ @ 0x1C036EA90 (--1DXGK_VIRTUAL_GPU_PARAV@@EEAA@XZ.c)
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037F390 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1CDriverStoreCopy@@QEAA@XZ @ 0x1C030AAAC (--1CDriverStoreCopy@@QEAA@XZ.c)
 */

CDriverStoreCopy *__fastcall CDriverStoreCopy::`scalar deleting destructor'(CDriverStoreCopy *P)
{
  CDriverStoreCopy::~CDriverStoreCopy(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}

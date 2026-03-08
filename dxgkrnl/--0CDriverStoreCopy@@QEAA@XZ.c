/*
 * XREFs of ??0CDriverStoreCopy@@QEAA@XZ @ 0x1C0305C28
 * Callers:
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AAA0 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AF50 (-VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

CDriverStoreCopy *__fastcall CDriverStoreCopy::CDriverStoreCopy(CDriverStoreCopy *this)
{
  CDriverStoreCopy *result; // rax

  *((_QWORD *)this + 2) = -1LL;
  *((_DWORD *)this + 2) = 536;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 396) = 0;
  *((_QWORD *)this + 200) = 0LL;
  *((_QWORD *)this + 202) = 0LL;
  *((_QWORD *)this + 200) = (char *)this + 1592;
  *((_QWORD *)this + 199) = (char *)this + 1592;
  result = this;
  *((_QWORD *)this + 202) = (char *)this + 1608;
  *((_QWORD *)this + 201) = (char *)this + 1608;
  return result;
}

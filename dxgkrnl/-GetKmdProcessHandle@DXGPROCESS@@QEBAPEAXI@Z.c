/*
 * XREFs of ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x1C000A020
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C01B57FC (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037D460 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C01A5238 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 */

void *__fastcall DXGPROCESS::GetKmdProcessHandle(DXGPROCESS *this, unsigned int a2)
{
  __int64 v2; // rdi
  DXGGLOBAL *Global; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  if ( (unsigned int)v2 >= DXGGLOBAL::GetMaximumGlobalAdapterCount(Global)
    || !*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v2) )
  {
    return 0LL;
  }
  _mm_lfence();
  return *(void **)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v2) + 48LL);
}

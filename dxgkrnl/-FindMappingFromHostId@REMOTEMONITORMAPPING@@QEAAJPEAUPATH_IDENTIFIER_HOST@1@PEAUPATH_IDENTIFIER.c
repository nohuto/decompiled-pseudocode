/*
 * XREFs of ?FindMappingFromHostId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1C0347E38
 * Callers:
 *     ?VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037B8A0 (-VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 */

__int64 __fastcall REMOTEMONITORMAPPING::FindMappingFromHostId(
        struct _KTHREAD **this,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *a2,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *a3)
{
  struct _KTHREAD *v6; // r9
  unsigned int v7; // ebx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v10);
  v6 = *this;
  v11 = 1;
  if ( v6 == (struct _KTHREAD *)this )
  {
LABEL_6:
    v7 = -1073741275;
  }
  else
  {
    while ( *((_DWORD *)v6 + 4) != *(_DWORD *)a2
         || *((_DWORD *)v6 + 5) != *((_DWORD *)a2 + 1)
         || *((_DWORD *)v6 + 6) != *((_DWORD *)a2 + 2) )
    {
      v6 = *(struct _KTHREAD **)v6;
      if ( v6 == (struct _KTHREAD *)this )
        goto LABEL_6;
    }
    v7 = 0;
    *(_OWORD *)a3 = *(_OWORD *)((char *)v6 + 28);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return v7;
}

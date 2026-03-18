/*
 * XREFs of ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1C01E2A18
 * Callers:
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01E2850 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C0016674 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1C01E2A90 (-IsClientHandleValid@DispBrokerClient@@AEAA_NXZ.c)
 */

DispBrokerClientHandle **__fastcall DispBrokerClient::ReferencePort(struct _KTHREAD **a1, DispBrokerClientHandle **a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  *a2 = 0LL;
  DispBrokerClientReference::Assign(a2, 0LL);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, a1 + 2, 0);
  DXGPUSHLOCK::AcquireShared(v6);
  v7 = 1;
  if ( DispBrokerClient::IsClientHandleValid((DispBrokerClient *)a1) )
    DispBrokerClientReference::Assign(a2, a1[6]);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
  return a2;
}

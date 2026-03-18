/*
 * XREFs of ??1DispBrokerClient@@QEAA@XZ @ 0x1C00162E4
 * Callers:
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C01E64A0 (--1DXGSESSIONDATA@@QEAA@XZ.c)
 * Callees:
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C001632C (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C0016674 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 */

void __fastcall DispBrokerClient::~DispBrokerClient(DispBrokerClient *this)
{
  DispBrokerClient::DisableDisplayBroker(this);
  DispBrokerClientReference::Assign((DispBrokerClient *)((char *)this + 48), 0LL);
}

/*
 * XREFs of ??1DispBrokerClient@@QEAA@XZ @ 0x1C0016204
 * Callers:
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C01D9450 (--1DXGSESSIONDATA@@QEAA@XZ.c)
 * Callees:
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C001624C (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C0016524 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 */

void __fastcall DispBrokerClient::~DispBrokerClient(DispBrokerClient *this)
{
  DispBrokerClient::DisableDisplayBroker(this);
  DispBrokerClientReference::Assign((DispBrokerClient *)((char *)this + 48), 0LL);
}

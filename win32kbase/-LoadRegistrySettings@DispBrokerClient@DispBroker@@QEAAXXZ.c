/*
 * XREFs of ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C001085C
 * Callers:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C001077C (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     Win32UserInitialize @ 0x1C031E444 (Win32UserInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DispBroker::DispBrokerClient::LoadRegistrySettings(DispBroker::DispBrokerClient *this)
{
  int v1; // ebx

  v1 = 0;
  if ( qword_1C02D7190 && (int)qword_1C02D7190() >= 0 && qword_1C02D7198 )
    v1 = qword_1C02D7198();
  *(_DWORD *)this = v1;
}

/*
 * XREFs of ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C0099FA0
 * Callers:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C0099EF4 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     Win32UserInitialize @ 0x1C0298BBC (Win32UserInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DispBroker::DispBrokerClient::LoadRegistrySettings(DispBroker::DispBrokerClient *this)
{
  int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C0257C08 )
    v3 = qword_1C0257C08();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0257C10 )
    v1 = qword_1C0257C10();
  *(_DWORD *)this = v1;
}

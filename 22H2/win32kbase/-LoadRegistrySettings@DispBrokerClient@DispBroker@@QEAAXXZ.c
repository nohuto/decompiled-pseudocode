/*
 * XREFs of ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C009AD60
 * Callers:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C009ACB4 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     Win32UserInitialize @ 0x1C0297BBC (Win32UserInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DispBroker::DispBrokerClient::LoadRegistrySettings(DispBroker::DispBrokerClient *this)
{
  int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C0256C08 )
    v3 = qword_1C0256C08();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0256C10 )
    v1 = qword_1C0256C10();
  *(_DWORD *)this = v1;
}

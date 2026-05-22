/*
 * XREFs of ?RemoveOwner@SipcEndpoint@@QEAAXXZ @ 0x1800C1B10
 * Callers:
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x1800BF4DC (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SipcEndpoint::RemoveOwner(SipcEndpoint *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx

  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 5);
  if ( v2 )
  {
    (**v2)(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
}

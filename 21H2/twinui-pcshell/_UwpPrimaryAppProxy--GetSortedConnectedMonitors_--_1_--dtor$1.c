/*
 * XREFs of _UwpPrimaryAppProxy::GetSortedConnectedMonitors_::_1_::dtor$1 @ 0x18044B514
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180449E30 (--1-$list@V-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$com_.c)
 */

void __fastcall UwpPrimaryAppProxy::GetSortedConnectedMonitors_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::~list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>(*(void ***)(a2 + 152));
  }
}

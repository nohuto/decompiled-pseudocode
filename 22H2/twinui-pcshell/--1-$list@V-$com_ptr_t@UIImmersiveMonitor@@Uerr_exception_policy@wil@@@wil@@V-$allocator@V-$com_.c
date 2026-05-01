/*
 * XREFs of ??1?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180449AA0
 * Callers:
 *     _UwpPrimaryAppProxy::GetSortedConnectedMonitors_::_1_::dtor$1 @ 0x18044B184 (_UwpPrimaryAppProxy--GetSortedConnectedMonitors_--_1_--dtor$1.c)
 *     _UwpPrimaryAppProxy::RelayoutAppViewsInternal_::_1_::dtor$1 @ 0x18044C450 (_UwpPrimaryAppProxy--RelayoutAppViewsInternal_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::~list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v3 + 2);
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x18);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x18);
}

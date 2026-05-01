/*
 * XREFs of ??$?4V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@1@PEAUHWND__@@$0A@@?$tuple@AEAV?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@AEAPEAUHWND__@@@std@@QEAAAEAV01@$$QEAV?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@1@@Z @ 0x1804D00EC
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800E1500 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800E1500.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_QWORD **__fastcall std::tuple<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy> &,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> &,HWND__ * &>::operator=<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy>,wil::com_ptr_t<IDropTarget,wil::err_exception_policy>,HWND__ *,0>(
        _QWORD **a1,
        _QWORD *a2)
{
  __int64 *v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx

  v4 = a1[2];
  v5 = a2[2];
  a2[2] = 0LL;
  v6 = *v4;
  *v4 = v5;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = a1[1];
  v8 = a2[1];
  a2[1] = 0LL;
  v9 = *v7;
  *v7 = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  **a1 = *a2;
  return a1;
}

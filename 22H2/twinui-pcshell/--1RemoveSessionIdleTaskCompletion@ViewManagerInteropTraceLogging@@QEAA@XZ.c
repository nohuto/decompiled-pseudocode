/*
 * XREFs of ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18033D00C
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x180023440 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$3 @ 0x1801730C1 (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$3.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_510cad20d9eb6c2bd86c1fc700d863e9___::_scalar_deleting_destructor_ @ 0x18033D7A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_510cad20d9eb6c2bd86c1fc700d863e9___--_scala.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x180342974 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     _lambda_d5a2e35645378a0caf28c8561966fc73_::__lambda_d5a2e35645378a0caf28c8561966fc73_ @ 0x18034D10C (_lambda_d5a2e35645378a0caf28c8561966fc73_--__lambda_d5a2e35645378a0caf28c8561966fc73_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a2e35645378a0caf28c8561966fc73___::_scalar_deleting_destructor_ @ 0x18034E3B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d5a2e35645378a0caf28c8561966fc73___--_scala.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007CCFC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion(
        ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

/*
 * XREFs of _lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_ @ 0x180391D30
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_beeaa99da247ec9f188a411312d86a25___ @ 0x180391938 (CreationThreadDispatcher--RunAsync__lambda_beeaa99da247ec9f188a411312d86a25___.c)
 *     CreationThreadDispatcher::RunSync__lambda_beeaa99da247ec9f188a411312d86a25___ @ 0x180391A18 (CreationThreadDispatcher--RunSync__lambda_beeaa99da247ec9f188a411312d86a25___.c)
 *     CAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___::_scalar_deleting_destructor_ @ 0x180391E60 (CAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___--_scalar_deleting_destructo.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b___::_scalar_deleting_destructor_ @ 0x180391EB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b___--_scala.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180391F2C (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAU.c)
 *     _XamlSnapAssistViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$2 @ 0x180392061 (_XamlSnapAssistViewController--[IXamlMultitaskingViewController]--InvokeSwitchItem_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[2];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = a1[1];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}

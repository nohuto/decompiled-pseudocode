/*
 * XREFs of _dynamic_atexit_destructor_for__ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak__ @ 0x1800DAE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak__()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak;
  if ( ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak )
  {
    ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
  return result;
}

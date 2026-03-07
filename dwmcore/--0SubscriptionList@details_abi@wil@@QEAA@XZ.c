struct _RTL_CRITICAL_SECTION *__fastcall wil::details_abi::SubscriptionList::SubscriptionList(
        struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSectionEx(this, 0, 0);
  this[1].DebugInfo = 0LL;
  *(_QWORD *)&this[1].LockCount = 0LL;
  this[1].OwningThread = 0LL;
  this[1].LockSemaphore = 0LL;
  return this;
}

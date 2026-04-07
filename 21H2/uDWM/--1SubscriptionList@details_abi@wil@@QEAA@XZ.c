/*
 * XREFs of ??1SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18007DEC4
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18007DDBC (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180042ED4 (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::~SubscriptionList(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE LockSemaphore; // rcx

  LockSemaphore = this[1].LockSemaphore;
  this[1].LockSemaphore = 0LL;
  if ( LockSemaphore )
    MemoryFree(LockSemaphore);
  DeleteCriticalSection(this);
}

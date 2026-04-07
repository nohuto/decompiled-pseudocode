/*
 * XREFs of ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1800428AC
 * Callers:
 *     ??0FeatureStateManager@details@wil@@QEAA@XZ @ 0x18004280C (--0FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??0?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x18007DA08 (--0-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV-$u.c)
 * Callees:
 *     <none>
 */

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

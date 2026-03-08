/*
 * XREFs of ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x1801948EC
 * Callers:
 *     ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180194700 (--1-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180103C70 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180195DC8 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details_abi::FeatureStateData::~FeatureStateData(struct _RTL_CRITICAL_SECTION *this)
{
  void *v2; // rdx
  wil::details *LockSemaphore; // rcx

  wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)this);
  LockSemaphore = (wil::details *)this[6].LockSemaphore;
  this[6].LockSemaphore = 0LL;
  if ( LockSemaphore )
    wil::details::FreeProcessHeap(LockSemaphore, v2);
  DeleteCriticalSection(this + 5);
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)&this->LockCount);
}

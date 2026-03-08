/*
 * XREFs of ??0?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x14000B130
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x14000B534 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1400017A4 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x140003364 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 *     memset_0 @ 0x1400063A8 (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 24) = a3[1];
  a3[1] = 0LL;
  memset_0((void *)(a1 + 40), 0, 0x108uLL);
  *(_QWORD *)(a1 + 32) = 0LL;
  wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(a1 + 40), v4, v5, v6);
  wil::details_abi::SubscriptionList::SubscriptionList((struct _RTL_CRITICAL_SECTION *)(a1 + 232));
  return a1;
}

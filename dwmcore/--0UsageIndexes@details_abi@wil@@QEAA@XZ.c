/*
 * XREFs of ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180194624
 * Callers:
 *     ??0?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x180194530 (--0-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV-$u.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180195DC8 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180196414 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x1801945A0 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 */

__int64 __fastcall wil::details_abi::UsageIndexes::UsageIndexes(wil::details_abi::UsageIndexes *this)
{
  __int64 v1; // r11
  __int16 v2; // r8
  char v3; // r9
  __int64 v4; // r11
  __int16 v5; // r8
  char v6; // r9
  __int64 v7; // r11

  wil::details_abi::RawUsageIndex::RawUsageIndex((__int64)this, 0, 4, 1, 4, 0);
  wil::details_abi::RawUsageIndex::RawUsageIndex(v1 + 64, 0, v2, v3, v2, 2);
  wil::details_abi::RawUsageIndex::RawUsageIndex(v4 + 128, 0, v5, v6, 0, v6);
  return v7;
}

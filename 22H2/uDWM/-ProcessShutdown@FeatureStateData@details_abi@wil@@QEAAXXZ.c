/*
 * XREFs of ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18007EC70
 * Callers:
 *     ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x18007DDB8 (--_G-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18007F1A0 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18002CD70 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18002CDD0 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x18002CE60 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18002CEB0 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details_abi::FeatureStateData::ProcessShutdown(
        wil::details_abi::FeatureStateData *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  const struct wil::details_abi::RawUsageIndex *v7; // r9
  _BYTE v8[200]; // [rsp+20h] [rbp-C8h] BYREF

  wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)v8, a2, a3, a4);
  wil::details_abi::FeatureStateData::RetrieveUsageUnderLock(this, (struct wil::details_abi::UsageIndexes *)v8);
  wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)v8, v5, v6, v7);
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)v8);
}

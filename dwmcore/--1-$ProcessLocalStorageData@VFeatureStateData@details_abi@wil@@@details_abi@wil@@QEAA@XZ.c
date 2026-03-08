/*
 * XREFs of ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180194700
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180196A20 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800FF340 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x1801948EC (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::~ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
        _QWORD *a1)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  wil::details *v5; // rcx

  wil::details_abi::FeatureStateData::~FeatureStateData((wil::details_abi::FeatureStateData *)(a1 + 4));
  v3 = (wil::details *)a1[3];
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  v4 = (wil::details *)a1[2];
  if ( v4 )
    wil::details::CloseHandle(v4, v2);
  v5 = (wil::details *)a1[1];
  if ( v5 )
    wil::details::CloseHandle(v5, v2);
}

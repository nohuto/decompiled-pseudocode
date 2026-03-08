/*
 * XREFs of ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180194AD0
 * Callers:
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x1801948EC (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180195DC8 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180196414 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180103C70 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::UsageIndexes::~UsageIndexes(wil::details_abi::UsageIndexes *this, void *a2)
{
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  wil::details *v5; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v3 )
    wil::details::FreeProcessHeap(v3, a2);
  v4 = (wil::details *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v4 )
    wil::details::FreeProcessHeap(v4, a2);
  v5 = (wil::details *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v5 )
    wil::details::FreeProcessHeap(v5, a2);
}

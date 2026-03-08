/*
 * XREFs of ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0168368
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C0168194 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     DxgkSetPostDeviceCandidateTarget @ 0x1C0001E1C (DxgkSetPostDeviceCandidateTarget.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPrimaryPath(__int64 a1, int a2, int a3, int a4)
{
  __int64 v8; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    WdLogSingleEntry1(1LL, 8303LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"this->GetAdapter()->IsCoreResourceExclusiveOwner()",
      8303LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 136) = a2;
  *(_DWORD *)(a1 + 140) = a3;
  *(_DWORD *)(a1 + 144) = a4;
  if ( (*(_DWORD *)(v8 + 436) & 1) != 0 && a3 != -1 )
    DxgkSetPostDeviceCandidateTarget(a3);
}

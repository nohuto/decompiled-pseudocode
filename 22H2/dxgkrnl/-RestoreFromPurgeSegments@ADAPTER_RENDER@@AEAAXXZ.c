/*
 * XREFs of ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01F3AE0
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0198544 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C1C28 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::RestoreFromPurgeSegments(PERESOURCE **this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3121LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3121LL, 0LL, 0LL, 0LL, 0LL);
  }
  ((void (__fastcall *)(PERESOURCE *))this[95][1]->Reserved2)(this[96]);
}

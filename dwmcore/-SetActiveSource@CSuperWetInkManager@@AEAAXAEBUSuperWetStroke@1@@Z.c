/*
 * XREFs of ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z @ 0x1801C9544
 * Callers:
 *     ?OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801C9018 (-OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x18012A432 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     McTemplateU0pp_EventWriteTransfer @ 0x18019F3C8 (McTemplateU0pp_EventWriteTransfer.c)
 *     ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z @ 0x1801C9EE8 (-TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z.c)
 */

void __fastcall CSuperWetInkManager::SetActiveSource(CSuperWetInkManager *this, struct IMonitorTarget **a2)
{
  struct CSuperWetSource *v4; // rdx
  struct IMonitorTarget *v5; // rdx
  struct IMonitorTarget *v6; // rcx

  v4 = (struct CSuperWetSource *)*((_QWORD *)this + 1);
  if ( *a2 != v4 )
  {
    if ( v4 )
    {
      v5 = (struct IMonitorTarget *)*((_QWORD *)CSuperWetInkManager::TryLookupDataForSource(this, v4) + 1);
      if ( v5 )
      {
        if ( v5 != a2[1] )
          CSuperWetInkManager::TurnOffScribblingForTarget(this, v5);
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0pp_EventWriteTransfer(
        (__int64)this,
        &EVTDESC_COMPUTESCRIBBLE_SOURCEACTIVE,
        *a2,
        *((_QWORD *)this + 1));
    v6 = *a2;
    *((_QWORD *)this + 1) = *a2;
    (*(void (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v6 + 312LL))(v6);
  }
}

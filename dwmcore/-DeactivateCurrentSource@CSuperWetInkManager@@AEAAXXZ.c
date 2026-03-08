/*
 * XREFs of ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801C8A90
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008B8BC (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x1801C9170 (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801C92AC (-RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801C9334 (-RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801C9388 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801C9A58 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C9BD4 (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C9D58 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x18012A432 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x18019F364 (McTemplateU0p_EventWriteTransfer.c)
 *     IsSuperWetInkCompatibleVailContainer @ 0x1801C8FA8 (IsSuperWetInkCompatibleVailContainer.c)
 *     ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z @ 0x1801C9EE8 (-TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z.c)
 */

void __fastcall CSuperWetInkManager::DeactivateCurrentSource(struct CSuperWetSource **this)
{
  CSuperWetInkManager *v2; // rcx
  struct CSuperWetInkManager::SuperWetStroke *v3; // rdi
  struct IMonitorTarget *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( this[1] )
  {
    if ( !(unsigned __int8)IsSuperWetInkCompatibleVailContainer() )
    {
      v3 = CSuperWetInkManager::TryLookupDataForSource((CSuperWetInkManager *)this, this[1]);
      v4 = (struct IMonitorTarget *)*((_QWORD *)v3 + 1);
      if ( v4 )
      {
        CSuperWetInkManager::TurnOffScribblingForTarget(v2, v4);
        v5 = *((_QWORD *)v3 + 1);
        *((_QWORD *)v3 + 1) = 0LL;
        if ( v5 )
        {
          v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0p_EventWriteTransfer((__int64)v2, &EVTDESC_COMPUTESCRIBBLE_DROPSOURCE, (__int64)this[1]);
    (*(void (__fastcall **)(struct CSuperWetSource *))(*(_QWORD *)this[1] + 320LL))(this[1]);
    this[1] = 0LL;
  }
}

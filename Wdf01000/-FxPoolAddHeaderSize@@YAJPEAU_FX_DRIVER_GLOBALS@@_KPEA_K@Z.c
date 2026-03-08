/*
 * XREFs of ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x1C003E0C8
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C003E20C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0041AF0 (-Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0042F1C (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxPoolAddHeaderSize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 AllocationSize,
        unsigned __int64 *NewSize)
{
  unsigned __int64 v3; // rax
  unsigned __int16 v5; // r9

  v3 = AllocationSize + 16;
  if ( AllocationSize + 16 < AllocationSize )
  {
    v5 = 10;
  }
  else
  {
    if ( !FxDriverGlobals->FxPoolTrackingOn )
    {
LABEL_5:
      *NewSize = v3;
      return 0LL;
    }
    if ( AllocationSize + 80 >= AllocationSize + 16 )
    {
      v3 = AllocationSize + 80;
      goto LABEL_5;
    }
    v5 = 11;
  }
  WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, v5, WPP_FxPoolInlines_hpp_Traceguids, 0xC0000095);
  return 3221225621LL;
}

/*
 * XREFs of ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1802132B8
 * Callers:
 *     ??$GetAsString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x18012A2F4 (--$GetAsString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpro.c)
 *     ??$GetUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x18012A3B4 (--$GetUInt32@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x18013A33C (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ?GetUnpackagedAppPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18013A55C (-GetUnpackagedAppPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@.c)
 *     ??$GetAsInt32@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAJ@Z @ 0x18021318C (--$GetAsInt32@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropert.c)
 *     ??$GetBoolean@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEA_N@Z @ 0x180213228 (--$GetBoolean@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropert.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1804D62EC (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ??$GetAsUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x1804DC588 (--$GetAsUInt32@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpro.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(
        _QWORD *a1,
        __int64 a2,
        _WORD *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 40LL))(*a1);
  if ( (int)result >= 0 && !*a3 )
    return 2147943568LL;
  return result;
}

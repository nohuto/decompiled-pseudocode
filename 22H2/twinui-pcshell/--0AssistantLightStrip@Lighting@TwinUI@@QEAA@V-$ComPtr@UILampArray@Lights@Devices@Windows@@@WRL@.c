/*
 * XREFs of ??0AssistantLightStrip@Lighting@TwinUI@@QEAA@V?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@V?$vector@HV?$allocator@H@std@@@std@@1@Z @ 0x1804C05A8
 * Callers:
 *     ??$?0AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV34@@?$_Ref_count_obj@VAssistantLightStrip@Lighting@TwinUI@@@std@@QEAA@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@1@1@Z @ 0x1804BEDD0 (--$-0AEAV-$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV-$vector@HV-$allocator.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18008EEF8 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180210840 (--0-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V-$a.c)
 *     ?_Buy_nonzero@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1804C0124 (-_Buy_nonzero@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rcx
  void **v9; // rdi
  unsigned __int64 v10; // rsi
  char *v11; // rbx
  char *v12; // r12
  __int64 v13; // rcx
  void *v15[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  *a1 = &TwinUI::Lighting::AssistantLightStrip::`vftable';
  v8 = *a2;
  a1[1] = *a2;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
    a1 + 2,
    a3);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
    a1 + 5,
    a4);
  v9 = (void **)(a1 + 8);
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  v10 = (__int64)(a1[3] - a1[2]) >> 2;
  *(_OWORD *)v15 = 0LL;
  v16 = 0LL;
  v11 = 0LL;
  if ( v10 )
  {
    std::vector<Windows::UI::Color>::_Buy_nonzero((__int64)v15, v10);
    v12 = (char *)v15[0];
    memset_0(v15[0], 0, 4 * v10);
    v11 = &v12[4 * v10];
    v15[1] = &v12[4 * v10];
  }
  else
  {
    v12 = (char *)v15[0];
  }
  if ( v9 != v15 )
  {
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v9);
    *v9 = v12;
    a1[9] = v11;
    a1[10] = v16;
    *(_OWORD *)v15 = 0LL;
    v16 = 0LL;
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v15);
  v13 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(a3);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(a4);
  return a1;
}

/*
 * XREFs of ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x1800D68E0
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x1800D67A8 (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801FF000 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDI.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A3990 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 __fastcall std::_Get_size_of_n<64>(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return a1 << 6;
}

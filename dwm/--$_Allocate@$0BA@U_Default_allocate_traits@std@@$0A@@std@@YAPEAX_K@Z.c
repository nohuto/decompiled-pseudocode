/*
 * XREFs of ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14000C41C
 * Callers:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x14000C4C8 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000C890 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ?_Buy_nonzero@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x14000D744 (-_Buy_nonzero@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@s.c)
 *     ?_Buy_nonzero@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_K@Z @ 0x14000D7A4 (-_Buy_nonzero@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@s.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::_Allocate<16,std::_Default_allocate_traits,0>(size_t a1)
{
  if ( a1 >= 0x1000 )
    return (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>();
  if ( a1 )
    return operator new(a1);
  return 0LL;
}

/*
 * XREFs of ?ClearRegCampaignSettings@ShellFeedsAvailabilityHelpers@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180108F54
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1801081B8 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 *     ?IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAE1@Z @ 0x18011545C (-IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@DU-$char_traits@D.c)
 * Callees:
 *     ??$ShellFeedsLauncher_ClearFeedsCampaignSettings@PEBG@ShellFeedsTelemetry@@SAX$$QEAPEBG@Z @ 0x18010866C (--$ShellFeedsLauncher_ClearFeedsCampaignSettings@PEBG@ShellFeedsTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?DeleteShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBG@Z @ 0x1801091F0 (-DeleteShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBG@Z.c)
 */

__int64 __fastcall ShellFeedsAvailabilityHelpers::ClearRegCampaignSettings(__int64 *a1, const unsigned __int16 *a2)
{
  const unsigned __int16 *v3; // rdx
  __int64 v4; // rax
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  ShellFeedsRegistryHelper::DeleteShellFeedsRegKey(L"Campaign", a2);
  ShellFeedsRegistryHelper::DeleteShellFeedsRegKey(L"CampaignState", v3);
  if ( a1[2] )
  {
    v4 = (__int64)a1;
    if ( (unsigned __int64)a1[3] >= 8 )
      v4 = *a1;
    v6[0] = v4;
    ShellFeedsTelemetry::ShellFeedsLauncher_ClearFeedsCampaignSettings<unsigned short const *>(v6);
  }
  return std::wstring::_Tidy_deallocate(a1);
}

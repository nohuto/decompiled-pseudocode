/*
 * XREFs of ??$check_pointer@X@winrt@@YAPEAXPEAX@Z @ 0x180260C28
 * Callers:
 *     ??$wait_for_completed@U?$IAsyncOperation@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800A0700 (--$wait_for_completed@U-$IAsyncOperation@U-$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@w.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800E6E48 (--$wait_for_completed@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@F.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800F3E80 (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@w.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800F3F5C (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Win.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1801348FC (--$wait_for_completed@U-$IAsyncOperation@U-$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shel.c)
 * Callees:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x180264468 (-throw_last_error@winrt@@YAXXZ.c)
 */

__int64 __fastcall winrt::check_pointer<void>(__int64 a1)
{
  if ( !a1 )
    winrt::throw_last_error(0LL);
  return a1;
}

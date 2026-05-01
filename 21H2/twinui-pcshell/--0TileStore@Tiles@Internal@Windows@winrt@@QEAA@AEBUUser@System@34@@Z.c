/*
 * XREFs of ??0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z @ 0x1800E7800
 * Callers:
 *     ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800EFA40 (-subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 *     ?Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800F0CFC (-Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 * Callees:
 *     ??$call@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?AUTileStore@Tiles@Internal@Windows@2@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@Z @ 0x1800E5CEC (--$call@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@-$factory_cache_entry@UTileStore@Tiles@I.c)
 */

winrt::Windows::Internal::Tiles::TileStore *__fastcall winrt::Windows::Internal::Tiles::TileStore::TileStore(
        winrt::Windows::Internal::Tiles::TileStore *this,
        const struct winrt::Windows::System::User *a2)
{
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  winrt::impl::factory_cache_entry<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::ITileStoreFactory>::call<_lambda_31f126833dad2da04de7641ee9fe3453_ &>(
    (__int64)this,
    this,
    &v4);
  return this;
}

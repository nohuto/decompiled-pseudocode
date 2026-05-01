/*
 * XREFs of ?QueryInterface@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180026690
 * Callers:
 *     ?QueryInterface@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024D20 (-QueryInterface@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GU.c)
 *     ?QueryInterface@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024F90 (-QueryInterface@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::QueryInterface(
           this,
           a2,
           a3);
}

/*
 * XREFs of ?OnChannelAttached@CSpatialRemarshaler@@MEAAJXZ @ 0x18024E740
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801BA17C (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

__int64 __fastcall CSpatialRemarshaler::OnChannelAttached(CSpatialRemarshaler *this)
{
  CSceneResourceManager::RegisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
    (struct ISceneNotificationListener *)(((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  return 0LL;
}

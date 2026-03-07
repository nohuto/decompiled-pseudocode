void __fastcall CSpatialRemarshaler::DetachFromChannel(CSpatialRemarshaler *this, struct CChannelContext *a2)
{
  CSceneResourceManager::UnregisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
    (struct ISceneNotificationListener *)(((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
}

/*
 * XREFs of ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180014E98
 * Callers:
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000D990 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000E33C (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18000E5C0 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18000E604 (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180010F60 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001116C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x1800115D4 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x180093E8C (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x180093FE8 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180014F08 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CThumbnailVisual::_IsImmersiveIconic(CThumbnailVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v5; // rdx

  v2 = 0;
  v3 = *((_QWORD *)this + 46);
  if ( v3 && CWindowData::IsImmersiveWindow(*(CWindowData **)(v3 + 24)) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 46) + 36LL) & 0x800000) != 0 )
    {
      return 1;
    }
    else
    {
      v5 = *((_QWORD *)this + 47);
      if ( v5 )
        return *(_DWORD *)(v5 + 72) == 3;
    }
  }
  return v2;
}

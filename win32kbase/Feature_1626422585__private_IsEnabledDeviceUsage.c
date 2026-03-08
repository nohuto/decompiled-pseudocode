/*
 * XREFs of Feature_1626422585__private_IsEnabledDeviceUsage @ 0x1C00DDF7C
 * Callers:
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C006D528 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C006F238 (-vGarbageCollectObjects@@YAXXZ.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00DEF60 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     HmgIsGarbageCollectibleType @ 0x1C0185FA4 (HmgIsGarbageCollectibleType.c)
 * Callees:
 *     Feature_1626422585__private_IsEnabledFallback @ 0x1C00DDFB4 (Feature_1626422585__private_IsEnabledFallback.c)
 */

__int64 Feature_1626422585__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1626422585__private_featureState & 0x10) != 0 )
    return Feature_1626422585__private_featureState & 1;
  else
    return Feature_1626422585__private_IsEnabledFallback((unsigned int)Feature_1626422585__private_featureState, 3LL);
}

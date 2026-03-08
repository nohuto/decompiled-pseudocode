/*
 * XREFs of Feature_503751999__private_IsEnabledDeviceUsage @ 0x1C00E15EC
 * Callers:
 *     ?ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0267C70 (-ReleaseAllReferences@CInteractionTrackerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0268A90 (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 *     ?HasBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEBA_NXZ @ 0x1C0268E1C (-HasBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEBA_NXZ.c)
 *     ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0268F70 (-SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCAppli.c)
 * Callees:
 *     Feature_503751999__private_IsEnabledFallback @ 0x1C00E1624 (Feature_503751999__private_IsEnabledFallback.c)
 */

__int64 Feature_503751999__private_IsEnabledDeviceUsage()
{
  if ( (Feature_503751999__private_featureState & 0x10) != 0 )
    return Feature_503751999__private_featureState & 1;
  else
    return Feature_503751999__private_IsEnabledFallback((unsigned int)Feature_503751999__private_featureState, 3LL);
}

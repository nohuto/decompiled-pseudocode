/*
 * XREFs of DxgkGetSharedSyncObjectType @ 0x1C01ED110
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z @ 0x1C000F540 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z.c)
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0018EE0 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C0078E90 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x1C0084170 (-Initialize@CFlipManager@@IEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

POBJECT_TYPE DxgkGetSharedSyncObjectType()
{
  return g_pDxgkSharedSyncObjectType;
}

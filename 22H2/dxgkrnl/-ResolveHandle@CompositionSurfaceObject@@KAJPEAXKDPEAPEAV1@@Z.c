/*
 * XREFs of ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0012F7C
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C000E650 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x1C000ED80 (NtBindCompositionSurface.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C0010F80 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     NtQueryCompositionSurfaceFrameRate @ 0x1C002B7A0 (NtQueryCompositionSurfaceFrameRate.c)
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C007755C (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0078AB8 (-CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@.c)
 *     ?DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z @ 0x1C007A678 (-DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007A94C (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007ACC4 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C007ADA0 (NtNotifyPresentToCompositionSurface.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C007B1D0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C007B3D0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C007B750 (NtQueryCompositionSurfaceStatistics.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C007B8A0 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C007B9B0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C007BB50 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C007BCC0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C007BFA0 (NtSetCompositionSurfaceStatistics.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C00884DC (-Initialize@CContentResource@@IEAAJXZ.c)
 *     ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02E1814 (-CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0365210 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        struct CompositionSurfaceObject **a4)
{
  NTSTATUS v5; // eax
  struct CompositionSurfaceObject *v6; // rdi
  unsigned int v7; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v6 = (struct CompositionSurfaceObject *)Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 1 )
    {
      *a4 = v6;
    }
    else
    {
      ObfDereferenceObject(v6);
      return (unsigned int)-1073741788;
    }
  }
  return v7;
}

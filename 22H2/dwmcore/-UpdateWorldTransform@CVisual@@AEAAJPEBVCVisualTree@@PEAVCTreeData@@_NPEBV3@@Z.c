/*
 * XREFs of ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800A0248
 * Callers:
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180003C30 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180022010 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007BE10 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18008C5A0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009E540 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B71D0 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18019A790 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180062AE8 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x1800818F0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18008D638 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800A0360 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB254 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x1802251C0 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CVisual::UpdateWorldTransform(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        char a4,
        const struct CTreeData *a5)
{
  __int128 *v8; // rsi
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  CComposition *v14; // rbx
  int ManipulationManager; // eax
  float v16[20]; // [rsp+40h] [rbp-61h] BYREF
  _BYTE v17[64]; // [rsp+90h] [rbp-11h] BYREF
  int v18; // [rsp+D0h] [rbp+2Fh]
  char v19; // [rsp+118h] [rbp+77h] BYREF

  v16[16] = 0.0;
  v18 = 0;
  v8 = (__int128 *)(((unsigned __int64)a5 + 40) & -(__int64)(a5 != 0LL));
  CVisual::CalcCpuClippingTransform(
    (__int64)this,
    5,
    (__int64)a2,
    v8,
    &v19,
    (CMILMatrix *)v16,
    (unsigned __int64)v17 & -(__int64)(*((_QWORD *)this + 30) != 0LL));
  if ( a4 || !v8 )
  {
    LOBYTE(v9) = 1;
  }
  else if ( v19 )
  {
    LOBYTE(v9) = !CMILMatrix::IsEqualTo<0>((float *)v8, v16);
  }
  else
  {
    LOBYTE(v9) = 0;
  }
  v10 = (*(__int64 (__fastcall **)(struct CTreeData *, float *, __int64, unsigned __int64))(*(_QWORD *)a3 + 48LL))(
          a3,
          v16,
          v9,
          (unsigned __int64)v17 & -(__int64)(*((_QWORD *)this + 30) != 0LL));
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x7EFu, 0LL);
  }
  else if ( CVisual::GetInteractionInternal(this) && (*((_BYTE *)this + 94) & 1) != 0 )
  {
    a5 = 0LL;
    v14 = (CComposition *)*((_QWORD *)this + 2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
    ManipulationManager = CComposition::GetManipulationManager(v14, &a5);
    if ( ManipulationManager >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(a5, this, (const struct CMILMatrix *)v16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
  }
  return v12;
}

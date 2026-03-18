/*
 * XREFs of ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1C0092E6C
 * Callers:
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1C0092B5C (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C003033C (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x1C0092E30 (--0-$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@P.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00944BC (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCompositionLightMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C00945FC (--0CCompositionLightMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CVisualSurfaceMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0094624 (--0CVisualSurfaceMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00ADB7C (--0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CContentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C00B0674 (--0CContentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B2D4 (--0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B524 (--0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CLegacyAnimationTriggerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B62C (--0CLegacyAnimationTriggerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CPrimitiveColorMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B6F8 (--0CPrimitiveColorMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CRemoteAppRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B758 (--0CRemoteAppRenderTargetMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall DirectComposition::GeneratedCreateSharedWriteMarshaler(
        DirectComposition *this,
        unsigned __int64 a2,
        const struct DirectComposition::CSharedSystemResource *a3,
        struct DirectComposition::CResourceMarshaler **a4)
{
  DirectComposition::CVisualMarshaler *v6; // rax
  DirectComposition::CVisualMarshaler *v7; // rbx
  void **v8; // rax
  DirectComposition::CInteractionMarshaler *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  NSInstrumentation::CLeakTrackingAllocator *v14; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v15; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v16; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v17; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v18; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v19; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v20; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v21; // rcx
  DirectComposition::CVisualSurfaceMarshaler *v22; // rax
  DirectComposition::CLegacyAnimationTriggerMarshaler *v23; // rax
  DirectComposition::CHolographicInteropTextureMarshaler *v24; // rax
  __int64 v25; // rax
  DirectComposition::CCaptureControllerMarshaler *v26; // rax
  DirectComposition::CVisualMarshaler *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  DirectComposition::CVisualMarshaler *v30; // rax
  DirectComposition::CRemoteAppRenderTargetMarshaler *v31; // rax
  DirectComposition::CRegionGeometryMarshaler *v32; // rax
  DirectComposition::CVisualMarshaler *v33; // rax
  DirectComposition::CPrimitiveColorMarshaler *QuotaZInit; // rax
  DirectComposition::CVisualMarshaler *v35; // rax

  if ( (unsigned int)this > 0x6D )
  {
    v14 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 110);
    if ( (_DWORD)v14 )
    {
      v15 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v14 - 18);
      if ( !(_DWORD)v15 )
      {
        QuotaZInit = (DirectComposition::CPrimitiveColorMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                      v15,
                                                                      a2,
                                                                      0x50uLL,
                                                                      0x30734344u);
        v7 = QuotaZInit;
        if ( QuotaZInit )
        {
          DirectComposition::CPrimitiveColorMarshaler::CPrimitiveColorMarshaler(QuotaZInit);
          v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CPrimitiveColorMarshaler,2>::`vftable';
          *((_QWORD *)v7 + 9) = a2;
          goto LABEL_14;
        }
        goto LABEL_38;
      }
      v16 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v15 - 3);
      if ( (_DWORD)v16 )
      {
        v17 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v16 - 11);
        if ( !(_DWORD)v17 )
        {
          v32 = (DirectComposition::CRegionGeometryMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                 v17,
                                                                 a2,
                                                                 0x80uLL,
                                                                 0x30734344u);
          v7 = v32;
          if ( !v32 )
            goto LABEL_38;
          DirectComposition::CRegionGeometryMarshaler::CRegionGeometryMarshaler(v32);
          v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRegionGeometryMarshaler,2>::`vftable';
          goto LABEL_25;
        }
        v18 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v17 - 1);
        if ( (_DWORD)v18 )
        {
          v19 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v18 - 53);
          if ( !(_DWORD)v19 )
          {
            v30 = (DirectComposition::CVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                           v19,
                                                           a2,
                                                           0x180uLL,
                                                           0x30734344u);
            if ( v30 )
            {
              v7 = DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>(
                     v30,
                     a2);
              goto LABEL_15;
            }
            goto LABEL_38;
          }
          v20 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v19 - 1);
          if ( !(_DWORD)v20 )
          {
            v29 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v20, a2, 0x48uLL, 0x30734344u);
            v7 = (DirectComposition::CVisualMarshaler *)v29;
            if ( !v29 )
              goto LABEL_38;
            DirectComposition::CContentMarshaler::CContentMarshaler(v29, 197LL);
            v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualBitmapMarshaler,2>::`vftable';
            goto LABEL_41;
          }
          v21 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v20 - 4);
          if ( !(_DWORD)v21 )
          {
            v28 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v21, a2, 0x48uLL, 0x30734344u);
            v7 = (DirectComposition::CVisualMarshaler *)v28;
            if ( !v28 )
              goto LABEL_38;
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v28, 201LL);
            v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualReferenceControllerMarshaler,2>::`vftable';
            goto LABEL_41;
          }
          if ( (_DWORD)v21 != 1 )
            return 3221225485LL;
          v22 = (DirectComposition::CVisualSurfaceMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                v21,
                                                                a2,
                                                                0x68uLL,
                                                                0x30734344u);
          v7 = v22;
          if ( !v22 )
            goto LABEL_38;
          DirectComposition::CVisualSurfaceMarshaler::CVisualSurfaceMarshaler(v22);
          v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualSurfaceMarshaler,2>::`vftable';
LABEL_37:
          *((_QWORD *)v7 + 12) = a2;
          goto LABEL_14;
        }
        v31 = (DirectComposition::CRemoteAppRenderTargetMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                      v18,
                                                                      a2,
                                                                      0x70uLL,
                                                                      0x30734344u);
        v7 = v31;
        if ( !v31 )
          goto LABEL_38;
        DirectComposition::CRemoteAppRenderTargetMarshaler::CRemoteAppRenderTargetMarshaler(v31);
        v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRemoteAppRenderTargetMarshaler,2>::`vftable';
      }
      else
      {
        v33 = (DirectComposition::CVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                       v16,
                                                       a2,
                                                       0x70uLL,
                                                       0x30734344u);
        v7 = v33;
        if ( !v33 )
          goto LABEL_38;
        DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v33, 131LL);
        v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CProjectedShadowCasterMarshaler,2>::`vftable';
      }
      *((_QWORD *)v7 + 13) = a2;
      goto LABEL_14;
    }
    v35 = (DirectComposition::CVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                   v14,
                                                   a2,
                                                   0x90uLL,
                                                   0x30734344u);
    v7 = v35;
    if ( !v35 )
      goto LABEL_38;
    DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v35, 110LL);
    v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransform3DMarshaler,2>::`vftable';
LABEL_22:
    *((_QWORD *)v7 + 17) = a2;
    goto LABEL_14;
  }
  switch ( (_DWORD)this )
  {
    case 0x6D:
      v27 = (DirectComposition::CVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                     this,
                                                     a2,
                                                     0x68uLL,
                                                     0x30734344u);
      v7 = v27;
      if ( !v27 )
        goto LABEL_38;
      DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v27, 109LL);
      v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransformMarshaler,2>::`vftable';
      goto LABEL_37;
    case 0x59:
      v10 = (DirectComposition::CInteractionMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                          this,
                                                          a2,
                                                          0x158uLL,
                                                          0x30734344u);
      v7 = v10;
      if ( v10 )
      {
        DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v10);
        v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CInteractionMarshaler,2>::`vftable';
        *((_QWORD *)v7 + 42) = a2;
        goto LABEL_14;
      }
LABEL_38:
      v7 = 0LL;
      goto LABEL_15;
    case 0x22:
      v12 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x90uLL, 0x30734344u);
      v7 = (DirectComposition::CVisualMarshaler *)v12;
      if ( !v12 )
        goto LABEL_38;
      DirectComposition::CCompositionLightMarshaler::CCompositionLightMarshaler(v12, 34LL);
      v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionDistantLightMarshaler,2>::`vftable';
      goto LABEL_22;
    case 0x29:
      v11 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0xD0uLL, 0x30734344u);
      v7 = (DirectComposition::CVisualMarshaler *)v11;
      if ( v11 )
      {
        DirectComposition::CCompositionLightMarshaler::CCompositionLightMarshaler(v11, 41LL);
        v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionSpotLightMarshaler,2>::`vftable';
        *((_QWORD *)v7 + 25) = a2;
        goto LABEL_14;
      }
      goto LABEL_38;
    case 0x20:
      v13 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x80uLL, 0x30734344u);
      v7 = (DirectComposition::CVisualMarshaler *)v13;
      if ( !v13 )
        goto LABEL_38;
      DirectComposition::CCompositionLightMarshaler::CCompositionLightMarshaler(v13, 32LL);
      v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionAmbientLightMarshaler,2>::`vftable';
LABEL_25:
      *((_QWORD *)v7 + 15) = a2;
      goto LABEL_14;
    case 0x13:
      v26 = (DirectComposition::CCaptureControllerMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                this,
                                                                a2,
                                                                0x68uLL,
                                                                0x30734344u);
      v7 = v26;
      if ( !v26 )
        goto LABEL_38;
      DirectComposition::CCaptureControllerMarshaler::CCaptureControllerMarshaler(v26);
      v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCaptureControllerMarshaler,2>::`vftable';
      goto LABEL_37;
    case 0x26:
      v25 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0xA8uLL, 0x30734344u);
      v7 = (DirectComposition::CVisualMarshaler *)v25;
      if ( v25 )
      {
        DirectComposition::CCompositionLightMarshaler::CCompositionLightMarshaler(v25, 38LL);
        v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionPointLightMarshaler,2>::`vftable';
        *((_QWORD *)v7 + 20) = a2;
        goto LABEL_14;
      }
      goto LABEL_38;
    case 0x50:
      v24 = (DirectComposition::CHolographicInteropTextureMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                        this,
                                                                        a2,
                                                                        0x68uLL,
                                                                        0x30734344u);
      v7 = v24;
      if ( !v24 )
        goto LABEL_38;
      DirectComposition::CHolographicInteropTextureMarshaler::CHolographicInteropTextureMarshaler(v24);
      v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CHolographicInteropTextureMarshaler,2>::`vftable';
      goto LABEL_37;
    case 0x5E:
      v23 = (DirectComposition::CLegacyAnimationTriggerMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                     this,
                                                                     a2,
                                                                     0x48uLL,
                                                                     0x30734344u);
      v7 = v23;
      if ( !v23 )
        goto LABEL_38;
      DirectComposition::CLegacyAnimationTriggerMarshaler::CLegacyAnimationTriggerMarshaler(v23);
      v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CLegacyAnimationTriggerMarshaler,2>::`vftable';
LABEL_41:
      *((_QWORD *)v7 + 8) = a2;
      goto LABEL_14;
    case 0x6A:
      v6 = (DirectComposition::CVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                    this,
                                                    a2,
                                                    0x88uLL,
                                                    0x30734344u);
      v7 = v6;
      if ( v6 )
      {
        DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v6, 106LL);
        v8 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CManipulationTransformMarshaler,2>::`vftable';
        *((_QWORD *)v7 + 16) = a2;
LABEL_14:
        *(_QWORD *)v7 = v8;
LABEL_15:
        *(_QWORD *)a3 = v7;
        return 0LL;
      }
      goto LABEL_38;
  }
  return 3221225485LL;
}

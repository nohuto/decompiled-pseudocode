/*
 * XREFs of ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1C00A1B7C
 * Callers:
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1C00A1820 (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ??0?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x1C00A1AF0 (--0-$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@P.c)
 *     ??0?$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x1C00A1D94 (--0-$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@Q.c)
 */

__int64 __fastcall DirectComposition::GeneratedCreateSharedWriteMarshaler(
        DirectComposition *this,
        unsigned __int64 a2,
        const struct DirectComposition::CSharedSystemResource *a3,
        struct DirectComposition::CResourceMarshaler **a4)
{
  __int64 QuotaZInit; // rax
  void **v7; // rcx
  __int64 v9; // rax
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v11; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v12; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v13; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v14; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v15; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v16; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v17; // rcx
  DirectComposition::CVisualMarshaler *v18; // rax

  if ( (unsigned int)this > 0x6D )
  {
    v10 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 110);
    if ( (_DWORD)v10 )
    {
      v11 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v10 - 18);
      if ( !(_DWORD)v11 )
      {
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v11, a2, 0x50uLL, 0x30734344u);
        if ( QuotaZInit )
        {
          *(_DWORD *)(QuotaZInit + 32) = 0;
          v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CPrimitiveColorMarshaler,2>::`vftable';
          *(_QWORD *)(QuotaZInit + 72) = a2;
          *(_DWORD *)(QuotaZInit + 36) = 128;
          goto LABEL_14;
        }
        goto LABEL_37;
      }
      v12 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v11 - 3);
      if ( (_DWORD)v12 )
      {
        v13 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v12 - 11);
        if ( !(_DWORD)v13 )
        {
          QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v13, a2, 0x80uLL, 0x30734344u);
          if ( QuotaZInit )
          {
            *(_DWORD *)(QuotaZInit + 32) = 0;
            *(_QWORD *)(QuotaZInit + 48) = 0LL;
            *(_QWORD *)(QuotaZInit + 24) = 1LL;
            *(_DWORD *)(QuotaZInit + 36) = 142;
            *(_QWORD *)(QuotaZInit + 96) = 0LL;
            *(_QWORD *)(QuotaZInit + 104) = 0LL;
            *(_QWORD *)(QuotaZInit + 112) = 0LL;
            *(_QWORD *)QuotaZInit = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRegionGeometryMarshaler,2>::`vftable';
            *(_QWORD *)(QuotaZInit + 120) = a2;
            goto LABEL_15;
          }
          goto LABEL_37;
        }
        v14 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v13 - 1);
        if ( (_DWORD)v14 )
        {
          v15 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v14 - 53);
          if ( !(_DWORD)v15 )
          {
            v18 = (DirectComposition::CVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                           v15,
                                                           a2,
                                                           0x180uLL,
                                                           0x30734344u);
            if ( v18 )
            {
              QuotaZInit = (__int64)DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>(v18);
              goto LABEL_15;
            }
            goto LABEL_37;
          }
          v16 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v15 - 1);
          if ( !(_DWORD)v16 )
          {
            QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v16, a2, 0x48uLL, 0x30734344u);
            if ( !QuotaZInit )
              goto LABEL_37;
            *(_DWORD *)(QuotaZInit + 36) = 197;
            v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualBitmapMarshaler,2>::`vftable';
            goto LABEL_40;
          }
          v17 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v16 - 4);
          if ( !(_DWORD)v17 )
          {
            QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v17, a2, 0x48uLL, 0x30734344u);
            if ( !QuotaZInit )
              goto LABEL_37;
            *(_DWORD *)(QuotaZInit + 36) = 201;
            v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualReferenceControllerMarshaler,2>::`vftable';
            goto LABEL_40;
          }
          if ( (_DWORD)v17 != 1 )
            return 3221225485LL;
          QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v17, a2, 0x68uLL, 0x30734344u);
          if ( !QuotaZInit )
            goto LABEL_37;
          *(_DWORD *)(QuotaZInit + 36) = 202;
          v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualSurfaceMarshaler,2>::`vftable';
LABEL_36:
          *(_DWORD *)(QuotaZInit + 32) = 0;
          *(_QWORD *)(QuotaZInit + 96) = a2;
          goto LABEL_14;
        }
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v14, a2, 0x70uLL, 0x30734344u);
        if ( !QuotaZInit )
          goto LABEL_37;
        *(_DWORD *)(QuotaZInit + 36) = 143;
        v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRemoteAppRenderTargetMarshaler,2>::`vftable';
        *(_DWORD *)(QuotaZInit + 56) = 3;
      }
      else
      {
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v12, a2, 0x70uLL, 0x30734344u);
        if ( !QuotaZInit )
          goto LABEL_37;
        *(_DWORD *)(QuotaZInit + 36) = 131;
        v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CProjectedShadowCasterMarshaler,2>::`vftable';
      }
      *(_DWORD *)(QuotaZInit + 32) = 0;
      *(_QWORD *)(QuotaZInit + 104) = a2;
      goto LABEL_14;
    }
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v10, a2, 0x90uLL, 0x30734344u);
    if ( !QuotaZInit )
      goto LABEL_37;
    *(_DWORD *)(QuotaZInit + 36) = 110;
    v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransform3DMarshaler,2>::`vftable';
LABEL_22:
    *(_DWORD *)(QuotaZInit + 32) = 0;
    *(_QWORD *)(QuotaZInit + 136) = a2;
    goto LABEL_14;
  }
  switch ( (_DWORD)this )
  {
    case 0x6D:
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x68uLL, 0x30734344u);
      if ( !QuotaZInit )
        goto LABEL_37;
      *(_DWORD *)(QuotaZInit + 36) = 109;
      v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransformMarshaler,2>::`vftable';
      goto LABEL_36;
    case 0x59:
      v9 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x158uLL, 0x30734344u);
      if ( v9 )
      {
        QuotaZInit = DirectComposition::CSharedResourceMarshaler<DirectComposition::CInteractionMarshaler,2>::CSharedResourceMarshaler<DirectComposition::CInteractionMarshaler,2>(
                       v9,
                       a2);
        goto LABEL_15;
      }
      goto LABEL_37;
    case 0x22:
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x90uLL, 0x30734344u);
      if ( !QuotaZInit )
        goto LABEL_37;
      *(_DWORD *)(QuotaZInit + 36) = 34;
      v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionDistantLightMarshaler,2>::`vftable';
      goto LABEL_22;
    case 0x29:
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0xD0uLL, 0x30734344u);
      if ( QuotaZInit )
      {
        *(_DWORD *)(QuotaZInit + 32) = 0;
        v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionSpotLightMarshaler,2>::`vftable';
        *(_QWORD *)(QuotaZInit + 200) = a2;
        *(_DWORD *)(QuotaZInit + 36) = 41;
        goto LABEL_14;
      }
LABEL_37:
      QuotaZInit = 0LL;
      goto LABEL_15;
    case 0x20:
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x80uLL, 0x30734344u);
      if ( QuotaZInit )
      {
        *(_DWORD *)(QuotaZInit + 32) = 0;
        v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionAmbientLightMarshaler,2>::`vftable';
        *(_QWORD *)(QuotaZInit + 120) = a2;
        *(_DWORD *)(QuotaZInit + 36) = 32;
        goto LABEL_14;
      }
      goto LABEL_37;
    case 0x13:
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x68uLL, 0x30734344u);
      if ( !QuotaZInit )
        goto LABEL_37;
      *(_DWORD *)(QuotaZInit + 36) = 19;
      v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCaptureControllerMarshaler,2>::`vftable';
      *(_WORD *)(QuotaZInit + 72) = 257;
      *(_DWORD *)(QuotaZInit + 88) = 0x40000000;
      goto LABEL_36;
    case 0x26:
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0xA8uLL, 0x30734344u);
      if ( QuotaZInit )
      {
        *(_DWORD *)(QuotaZInit + 32) = 0;
        v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionPointLightMarshaler,2>::`vftable';
        *(_QWORD *)(QuotaZInit + 160) = a2;
        *(_DWORD *)(QuotaZInit + 36) = 38;
        goto LABEL_14;
      }
      goto LABEL_37;
    case 0x50:
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x68uLL, 0x30734344u);
      if ( QuotaZInit )
      {
        *(_DWORD *)(QuotaZInit + 32) = 0;
        *(_QWORD *)(QuotaZInit + 48) = 0LL;
        *(_DWORD *)(QuotaZInit + 16) |= 0x20u;
        *(_QWORD *)QuotaZInit = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CHolographicInteropTextureMarshaler,2>::`vftable';
        *(_QWORD *)(QuotaZInit + 24) = 1LL;
        *(_DWORD *)(QuotaZInit + 36) = 80;
        *(_QWORD *)(QuotaZInit + 96) = a2;
        goto LABEL_15;
      }
      goto LABEL_37;
    case 0x5E:
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x48uLL, 0x30734344u);
      if ( !QuotaZInit )
        goto LABEL_37;
      *(_DWORD *)(QuotaZInit + 36) = 94;
      v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CLegacyAnimationTriggerMarshaler,2>::`vftable';
LABEL_40:
      *(_DWORD *)(QuotaZInit + 32) = 0;
      *(_QWORD *)(QuotaZInit + 64) = a2;
      goto LABEL_14;
    case 0x6A:
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x88uLL, 0x30734344u);
      if ( QuotaZInit )
      {
        *(_DWORD *)(QuotaZInit + 32) = 0;
        v7 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CManipulationTransformMarshaler,2>::`vftable';
        *(_QWORD *)(QuotaZInit + 128) = a2;
        *(_DWORD *)(QuotaZInit + 36) = 106;
LABEL_14:
        *(_QWORD *)QuotaZInit = v7;
        *(_QWORD *)(QuotaZInit + 24) = 1LL;
        *(_QWORD *)(QuotaZInit + 48) = 0LL;
LABEL_15:
        *(_QWORD *)a3 = QuotaZInit;
        return 0LL;
      }
      goto LABEL_37;
  }
  return 3221225485LL;
}

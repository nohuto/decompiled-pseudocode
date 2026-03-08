/*
 * XREFs of ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802A6564
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1802A6068 (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?GetFrameContainsMonitorSpecificContent@CDrawingContext@@QEBA_NXZ @ 0x18003B380 (-GetFrameContainsMonitorSpecificContent@CDrawingContext@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18008C4A8 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18008CA84 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800C1DCC (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800FE6F4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEBAXXZ @ 0x180103494 (-InternalAddRef@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA?BVCMILMatrix@@PEBVCVisualTree@@IIHH@Z @ 0x1802A3594 (-CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA-BVCMILMatrix@@PEBVCVisual.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802A62FC (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 *     ?BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z @ 0x1802A71DC (-BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@II@Z.c)
 *     ?EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z @ 0x1802A743C (-EndFrame@CHolographicInteropTexture@@QEAAXII_N@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x1802A74D0 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderTexture(
        struct CD3DDevice **this,
        struct CDrawingContext *a2,
        struct CHolographicInteropTexture *a3,
        int a4,
        unsigned int a5)
{
  RTL_SRWLOCK *v5; // rbx
  bool v9; // r12
  const struct CDirtyRegion *v10; // r13
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned int v15; // r15d
  struct IRenderTargetBitmap *v16; // rax
  struct IRenderTargetBitmap *v17; // r14
  unsigned int v18; // edx
  struct CD3DDevice **v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  struct CMILMatrix *v25; // rax
  struct IDeviceTarget *v26; // rax
  int v27; // eax
  CHolographicInteropTarget *v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v32; // [rsp+28h] [rbp-E0h]
  struct CVisualTree *v33; // [rsp+48h] [rbp-C0h]
  struct IRenderTargetBitmap *v34; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v35[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+98h] [rbp-70h]
  _BYTE v37[64]; // [rsp+A8h] [rbp-60h] BYREF
  int v38; // [rsp+E8h] [rbp-20h]
  _BYTE v39[128]; // [rsp+F8h] [rbp-10h] BYREF
  struct CMILMatrix *v41; // [rsp+188h] [rbp+80h]
  struct IRenderTargetBitmap *v42; // [rsp+198h] [rbp+90h] BYREF
  int v43; // [rsp+1A0h] [rbp+98h]

  v43 = a4;
  v5 = (RTL_SRWLOCK *)((char *)a3 + 408);
  v34 = 0LL;
  LOBYTE(v43) = 0;
  v9 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)a3 + 51);
  v10 = (const struct CDirtyRegion *)*((_QWORD *)a3 + 14);
  ReleaseSRWLockExclusive(v5);
  v11 = CHolographicInteropTexture::EnsureRenderBuffers(a3, this[23], (enum DXGI_FORMAT)*((_DWORD *)this + 58));
  v14 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v11, 0x169u, 0LL);
  }
  else
  {
    v33 = (struct CVisualTree *)*((_QWORD *)a3 + 12);
    if ( (*((_BYTE *)a3 + 236) & 1) == 0 )
    {
      if ( *((_QWORD *)a3 + 12) )
      {
        if ( v10 )
        {
          v15 = a5;
          v16 = CHolographicInteropTexture::BeginFrame(a3, v12, a5);
          v17 = v16;
          if ( v16 )
          {
            v42 = v16;
            Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalAddRef((__int64)&v42);
            v42 = 0LL;
            v34 = v17;
            Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease((__int64 *)&v42);
            if ( !CDirtyRegion::IsEmpty(v10) )
            {
              v38 = 0;
              v19 = this;
              v20 = *((_QWORD *)this[2] + 34);
              if ( v20 )
              {
                v21 = CStereoscopicContentManager::CalculateViewTransformForVisualTree(
                        v20,
                        (__int64)v39,
                        (__int64)v33,
                        v15,
                        *((_DWORD *)a3 + 56));
                v22 = *(_OWORD *)(v21 + 16);
                v35[0] = *(_OWORD *)v21;
                v23 = *(_OWORD *)(v21 + 32);
                v35[1] = v22;
                v24 = *(_OWORD *)(v21 + 48);
                LODWORD(v21) = *(_DWORD *)(v21 + 64);
                v35[2] = v23;
                v35[3] = v24;
                v36 = v21;
                CMILMatrix::Multiply(
                  (const struct CMILMatrix *)v35,
                  (struct CHolographicInteropTexture *)((char *)a3 + 268),
                  (struct CMILMatrix *)v37);
                v25 = (struct CMILMatrix *)v37;
              }
              else
              {
                v25 = (struct CHolographicInteropTexture *)((char *)a3 + 268);
              }
              v41 = v25;
              v26 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v17 + 64LL))(v17);
              v27 = CDrawingContext::BeginFrame(a2, v26, v41, (const struct _D3DCOLORVALUE *)((char *)v19 + 236), 0LL);
              v14 = v27;
              if ( v27 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast((__int64)v28, 0LL, 0, v27, 0x196u, 0LL);
              }
              else
              {
                LOBYTE(v43) = 1;
                v29 = CHolographicInteropTarget::RenderDirtyRegion(v28, a3, v33, v10, v32, v15, v17, a2);
                v14 = v29;
                if ( v29 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x1AAu, 0LL);
                }
                else if ( *((_BYTE *)a2 + 8092) || CDrawingContext::GetFrameContainsMonitorSpecificContent(a2) )
                {
                  v9 = 1;
                }
              }
            }
            CHolographicInteropTexture::EndFrame(a3, v18, v15, v9);
            if ( (_BYTE)v43 )
              CDrawingContext::EndFrame(a2);
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease((__int64 *)&v34);
  return v14;
}

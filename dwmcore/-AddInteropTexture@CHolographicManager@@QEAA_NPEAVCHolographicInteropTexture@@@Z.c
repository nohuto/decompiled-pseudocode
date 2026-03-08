/*
 * XREFs of ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1802A1580
 * Callers:
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x1802A7C74 (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINT.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800FACA4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800FACE4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCHolographicInteropTexture@@@?$vector@PEAVCHolographicInteropTexture@@V?$allocator@PEAVCHolographicInteropTexture@@@std@@@std@@QEAAPEAPEAVCHolographicInteropTexture@@QEAPEAV2@AEBQEAV2@@Z @ 0x1802A0C80 (--$_Emplace_reallocate@AEBQEAVCHolographicInteropTexture@@@-$vector@PEAVCHolographicInteropTextu.c)
 *     ?DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z @ 0x1802A1AA0 (-DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z.c)
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1802A1FA4 (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802A3C14 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddInteropTexture(RTL_SRWLOCK *this, struct CHolographicInteropTexture *a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int *v4; // rbp
  bool v5; // r15
  struct CHolographicInteropTexture *InteropTextureByBindId; // rdi
  bool v7; // r14
  _BYTE *Ptr; // rdx
  CHolographicInteropTaskQueue *v9; // rcx
  struct IUnknown *v10; // r8
  CStereoscopicContentManager *v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rcx
  CompositorTracing *v14; // rcx
  struct CHolographicInteropTexture *v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = a2;
  v2 = this + 13;
  v4 = (unsigned int *)a2;
  v5 = 0;
  AcquireSRWLockShared(this + 13);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId((CHolographicManager *)this, v4[56]);
  ReleaseSRWLockShared(v2);
  if ( !InteropTextureByBindId )
  {
    v7 = 0;
    AcquireSRWLockExclusive(v2);
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 2));
    Ptr = this[19].Ptr;
    if ( Ptr == this[20].Ptr )
    {
      std::vector<CHolographicInteropTexture *>::_Emplace_reallocate<CHolographicInteropTexture * const &>(
        (const void **)&this[18].Ptr,
        Ptr,
        &v16);
      v4 = (unsigned int *)v16;
    }
    else
    {
      *(_QWORD *)Ptr = v4;
      this[19].Ptr = (char *)this[19].Ptr + 8;
    }
    v9 = (CHolographicInteropTaskQueue *)this[6].Ptr;
    if ( v9 && LOBYTE(this[30].Ptr) )
    {
      if ( v4 )
        v10 = (struct IUnknown *)(v4 + 20);
      else
        v10 = 0LL;
      v5 = CHolographicInteropTaskQueue::PostMessageW(v9, 2u, v10, 0LL, 0LL, 0LL, 0LL);
    }
    v11 = (CStereoscopicContentManager *)*((_QWORD *)this[3].Ptr + 34);
    if ( v11 )
    {
      CStereoscopicContentManager::RegisterStereoscopicContentConsumer(v11, (struct CHolographicInteropTexture *)v4);
      v7 = 1;
    }
    v12 = v4[56];
    if ( CompositorTracing::IsEnabled((__int64)v11) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v13,
        (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicInteropTextureAdd_(v14, v12, v7);
    }
    ReleaseSRWLockExclusive(v2);
  }
  return v5;
}

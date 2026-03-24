/*
 * XREFs of ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802541DC
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180258A20 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005DBFC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800DB20C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800DB230 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     memmove_0 @ 0x1800F4017 (memmove_0.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x180155714 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ?DwmHolographicInteropTextureRemove_@CompositorTracing@@QEAAXI@Z @ 0x1802531B0 (-DwmHolographicInteropTextureRemove_@CompositorTracing@@QEAAXI@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180255BE4 (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator_ea_180255BE4.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180255D48 (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicViewData@@U-$less@I@std@@V-$allocator@_ea_180255D48.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x18025A660 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveInteropTexture(
        CHolographicManager *this,
        struct CHolographicInteropTexture *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct CHolographicInteropTexture **v5; // rcx
  struct CHolographicInteropTexture **v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  CHolographicInteropTaskQueue *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct IStereoscopicContentManager *StereoscopicContentManager; // rdi
  int v14; // edi
  __int64 v15; // rcx
  CompositorTracing *v16; // rcx
  int v17; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+60h] [rbp+18h] BYREF

  v2 = (RTL_SRWLOCK *)((char *)this + 104);
  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  v5 = (struct CHolographicInteropTexture **)*((_QWORD *)this + 18);
  v6 = (struct CHolographicInteropTexture **)*((_QWORD *)this + 19);
  while ( v5 != v6 )
  {
    if ( *v5 == a2 )
    {
      memmove_0(v5, v5 + 1, (char *)v6 - (char *)(v5 + 1));
      *((_QWORD *)this + 19) -= 8LL;
      v9 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
      if ( v9 && *((_BYTE *)this + 240) )
        CHolographicInteropTaskQueue::PostMessageW(
          v9,
          3u,
          (struct IUnknown *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL);
      if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this + 3), v7, v8) )
      {
        StereoscopicContentManager = CComposition::GetStereoscopicContentManager(*((CComposition **)this + 3), v10, v12);
        v17 = *((_DWORD *)a2 + 52);
        v18 = (struct _RTL_CRITICAL_SECTION *)((char *)StereoscopicContentManager + 96);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)StereoscopicContentManager + 96));
        std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::erase(
          (char *)StereoscopicContentManager + 328,
          &v17);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v18);
        v18 = (struct _RTL_CRITICAL_SECTION *)((char *)StereoscopicContentManager + 40);
        EnterCriticalSection((LPCRITICAL_SECTION)StereoscopicContentManager + 1);
        std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::erase(
          (char *)StereoscopicContentManager + 80,
          &v17);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v18);
      }
      v14 = *((_DWORD *)a2 + 52);
      if ( CompositorTracing::IsEnabled(v11) )
      {
        wil::details::static_lazy<CompositorTracing>::get(
          v15,
          _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
        CompositorTracing::DwmHolographicInteropTextureRemove_(v16, v14);
      }
      CRenderTargetBitmap::Release(a2);
      break;
    }
    ++v5;
  }
  ReleaseSRWLockExclusive(v2);
}

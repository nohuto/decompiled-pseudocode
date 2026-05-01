/*
 * XREFs of ?PerformDelayedInitialization@TabletModePositioner@@UEAAJXZ @ 0x180469B60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180022A98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3f9052a0d1dbb0256cecc8375556e01f__&_ @ 0x1800D7060 (Windows--Internal--ComTaskPool--QueueTask__lambda_3f9052a0d1dbb0256cecc8375556e01f__-_.c)
 *     _lambda_3f9052a0d1dbb0256cecc8375556e01f_::__lambda_3f9052a0d1dbb0256cecc8375556e01f_ @ 0x1800D7110 (_lambda_3f9052a0d1dbb0256cecc8375556e01f_--__lambda_3f9052a0d1dbb0256cecc8375556e01f_.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::PerformDelayedInitialization(
        TabletModePositioner *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  char *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v14; // [rsp+38h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u,
    a3);
  v4 = *((_QWORD *)this + 53);
  if ( v4 )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, 2LL, &v14);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 536LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      return v6;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 48LL))(v14, 3LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 537LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  v9 = (char *)this - 24;
  v14 = (__int64)this - 24;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  v14 = (__int64)this - 24;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_3f9052a0d1dbb0256cecc8375556e01f____(v10, &v14);
  v12 = v11;
  if ( v11 >= 0 )
    v12 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x224,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v11);
  lambda_3f9052a0d1dbb0256cecc8375556e01f_::__lambda_3f9052a0d1dbb0256cecc8375556e01f_(&v14);
  if ( v9 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
  return v12;
}

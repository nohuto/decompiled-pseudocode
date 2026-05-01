/*
 * XREFs of ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x180284F50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     IsOleInitializePresent @ 0x180092718 (IsOleInitializePresent.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800974E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_N.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?SHCreateDUIThreadRef@@YAJPEAJPEAPEAUIUnknown@@@Z @ 0x18028596C (-SHCreateDUIThreadRef@@YAJPEAJPEAPEAUIUnknown@@@Z.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x180285B38 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveShellCreationBehavior::OnImmersiveShellThreadStart(CImmersiveShellCreationBehavior *this)
{
  HRESULT v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rdx
  void *v6; // rsi
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  if ( v2 < 0 )
  {
    v4 = 537LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( !*((_BYTE *)this + 16) && IsOleInitializePresent() )
  {
    v2 = OleInitialize(0LL);
    if ( v2 < 0 )
    {
      v4 = 544LL;
      goto LABEL_3;
    }
    *((_BYTE *)this + 16) = 1;
  }
  if ( !*((_QWORD *)this + 3) )
  {
    v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
    {
      *(_QWORD *)v6 = &CThreadRefHost::`vftable';
      *((_DWORD *)v6 + 2) = 0;
      *((_QWORD *)v6 + 2) = 0LL;
      SHCreateDUIThreadRef((int *)v6 + 2, (struct IUnknown **)v6 + 2);
      SHSetThreadRef(*((IUnknown **)v6 + 2));
    }
    else
    {
      v6 = 0LL;
    }
    v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v7 )
      (**v7)(v7, 1LL);
    *((_QWORD *)this + 3) = v6;
    if ( !v6 )
    {
      v2 = -2147024882;
      v4 = 556LL;
      goto LABEL_3;
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::GetImpl'::`2'::impl,
    0,
    v3);
  return 0LL;
}

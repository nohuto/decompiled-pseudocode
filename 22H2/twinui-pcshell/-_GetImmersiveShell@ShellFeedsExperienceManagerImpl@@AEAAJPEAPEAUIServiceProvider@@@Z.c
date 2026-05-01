/*
 * XREFs of ?_GetImmersiveShell@ShellFeedsExperienceManagerImpl@@AEAAJPEAPEAUIServiceProvider@@@Z @ 0x1800B8510
 * Callers:
 *     ?_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800B8774 (-_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_GetImmersiveShell(
        ShellFeedsExperienceManagerImpl *this,
        struct IServiceProvider **a2)
{
  __int64 *ppv; // rbx
  HRESULT Instance; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  ppv = (__int64 *)((char *)this + 48);
  if ( *((_QWORD *)this + 6)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6),
        Instance = CoCreateInstance(
                     &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                     0LL,
                     0x404u,
                     &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                     (LPVOID *)ppv),
        v5 = Instance,
        Instance >= 0) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(ppv);
    *a2 = (struct IServiceProvider *)*ppv;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    return v5;
  }
}

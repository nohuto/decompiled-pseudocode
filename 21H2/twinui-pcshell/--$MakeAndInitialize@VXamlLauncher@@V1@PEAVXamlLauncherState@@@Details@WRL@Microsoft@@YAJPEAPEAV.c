/*
 * XREFs of ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x18039A4B8
 * Callers:
 *     XamlLauncher_CreateInstance @ 0x18039FB18 (XamlLauncher_CreateInstance.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowSizeConversionLogicalClientToWindow@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801CD244 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiv.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x1801E9CA8 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x18039AD54 (--0XamlLauncher@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ @ 0x18039C514 (-InternalRelease@-$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlLauncher,XamlLauncher,XamlLauncherState *>(
        XamlLauncher **a1,
        _QWORD *a2)
{
  unsigned int v4; // ebx
  XamlLauncher *v5; // rax
  XamlLauncher *v6; // rdi
  volatile int *v7; // rdx
  XamlLauncher *v9; // [rsp+40h] [rbp+8h] BYREF
  XamlLauncher *v10; // [rsp+50h] [rbp+18h]
  XamlLauncher *v11; // [rsp+58h] [rbp+20h]

  v4 = 0;
  *a1 = 0LL;
  v5 = (XamlLauncher *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v5;
  v10 = v5;
  if ( v5 )
  {
    v11 = v5;
    v6 = XamlLauncher::XamlLauncher(v5);
    v9 = v6;
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=(
      (__int64 *)v6 + 34,
      (*a2 + 24LL) & -(__int64)(*a2 != 0LL));
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IWindowSizeConversionLogicalClientToWindow,IImmersiveMonitorNotification>::InternalAddRef(
        (__int64)v6,
        v7);
    *a1 = v6;
    Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}

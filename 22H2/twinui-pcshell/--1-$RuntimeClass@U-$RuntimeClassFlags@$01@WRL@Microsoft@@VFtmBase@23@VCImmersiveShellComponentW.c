/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@WRL@Microsoft@@UEAA@XZ @ 0x1803538EC
 * Callers:
 *     _WindowingEnvironmentManager::WindowingEnvironmentManager_::_1_::dtor$0 @ 0x1803538B6 (_WindowingEnvironmentManager--WindowingEnvironmentManager_--_1_--dtor$0.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801AFB8C (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1801AFBC8 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 156) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponent *)(a1 + 72));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CWRLObjectWithGITSite *)(a1 + 32));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 24));
}

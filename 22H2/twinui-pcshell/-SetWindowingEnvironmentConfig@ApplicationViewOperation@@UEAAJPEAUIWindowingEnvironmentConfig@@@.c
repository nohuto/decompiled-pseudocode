/*
 * XREFs of ?SetWindowingEnvironmentConfig@ApplicationViewOperation@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z @ 0x180216E50
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18007CE74 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 */

__int64 __fastcall ApplicationViewOperation::SetWindowingEnvironmentConfig(
        ApplicationViewOperation *this,
        struct IWindowingEnvironmentConfig *a2)
{
  Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)this + 23, (__int64)a2);
  return 0LL;
}

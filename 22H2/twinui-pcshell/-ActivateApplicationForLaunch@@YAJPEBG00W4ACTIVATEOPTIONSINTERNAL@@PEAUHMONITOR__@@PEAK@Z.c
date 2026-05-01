/*
 * XREFs of ?ActivateApplicationForLaunch@@YAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAK@Z @ 0x1804E1AB8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___::Run @ 0x18028BAE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1804E1B6C (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 */

__int64 __fastcall ActivateApplicationForLaunch(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  HRESULT v6; // ebx
  LPVOID ppv; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = a4;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v6 = CoCreateInstance(&CLSID_ApplicationActivationManager, 0LL, 1u, &GUID_54e4c428_d1d4_47d4_ade6_46c829114a7d, &ppv);
  if ( v6 >= 0 )
    v6 = ActivateApplicationForLaunchWithManager(ppv, a1, &szAgent, a3, 0, 0LL, 0LL, &v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v6;
}

/*
 * XREFs of _lambda_89023de2c692254e9855fc87aa845524_::operator() @ 0x180053460
 * Callers:
 *     ?GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1800533B0 (-GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_89023de2c692254e9855fc87aa845524_::operator()(__int64 **a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 792LL);
  v3 = v7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v7);
  v4 = *a1;
  v7 = 0LL;
  v5 = *v4;
  *v4 = v3;
  v8 = v5;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v8);
  return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v7);
}

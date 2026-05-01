/*
 * XREFs of ?InternalRelease@?$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x180384C08
 * Callers:
 *     ??$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180383A7C (--$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 *     ??1?$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x180384058 (--1-$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlViewHost@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180085660 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultitaskingV.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlSnapAssistViewHost>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IXamlViewHost>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}

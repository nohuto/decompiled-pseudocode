/*
 * XREFs of ?Attach@?$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@QEAAXPEAVXamlSnapAssistViewHost@@@Z @ 0x18038435C
 * Callers:
 *     ??$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803837AC (--$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlViewHost@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180085660 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultitaskingV.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlSnapAssistViewHost>::Attach(__int64 *a1, volatile int *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IXamlViewHost>::Release(
               v4,
               a2);
  *a1 = (__int64)a2;
  return result;
}

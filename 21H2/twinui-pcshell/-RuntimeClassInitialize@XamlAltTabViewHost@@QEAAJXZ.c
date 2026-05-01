/*
 * XREFs of ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJXZ @ 0x180381FDC
 * Callers:
 *     ??$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18037ED0C (--$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1801BD1B4 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 */

__int64 __fastcall XamlAltTabViewHost::RuntimeClassInitialize(XamlAltTabViewHost *this)
{
  int inited; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  inited = CObjectWithThreadUseDetection::InitApartmentId((XamlAltTabViewHost *)((char *)this + 24));
  v2 = inited;
  if ( inited >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5D,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
    (const char *)(unsigned int)inited);
  return v2;
}

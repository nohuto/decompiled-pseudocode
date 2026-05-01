/*
 * XREFs of ?RuntimeClassInitialize@XamlAllUpViewHost@@QEAAJXZ @ 0x18037615C
 * Callers:
 *     ??$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180368250 (--$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknow.c)
 *     ??$MakeAndInitialize@VXamlAllUpViewHost@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlAllUpViewHost@@@Z @ 0x180368344 (--$MakeAndInitialize@VXamlAllUpViewHost@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlAllUpViewHo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1801BD1B4 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 */

__int64 __fastcall XamlAllUpViewHost::RuntimeClassInitialize(XamlAllUpViewHost *this)
{
  int inited; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  inited = CObjectWithThreadUseDetection::InitApartmentId((XamlAllUpViewHost *)((char *)this + 24));
  v2 = inited;
  if ( inited >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x89,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
    (const char *)(unsigned int)inited);
  return v2;
}

/*
 * XREFs of _lambda_688f7da27bd069ce265bc30902a9ac85_::operator() @ 0x1804B21D0
 * Callers:
 *     ??$LambdaCustomPaintProc@V_lambda_688f7da27bd069ce265bc30902a9ac85_@@PEAUHDC__@@@@YAXPEAUHDC__@@AEBUtagSIZE@@_J@Z @ 0x1804B15F0 (--$LambdaCustomPaintProc@V_lambda_688f7da27bd069ce265bc30902a9ac85_@@PEAUHDC__@@@@YAXPEAUHDC__@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@Z$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x1804B444C (-SelectObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_resu.c)
 *     ?close@select_result@wil@@SAXU12@@Z @ 0x1804B52E0 (-close@select_result@wil@@SAXU12@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_688f7da27bd069ce265bc30902a9ac85_::operator()(__int64 a1, HDC a2, int *a3)
{
  HDC hdcSrc; // rbx
  unsigned int v7; // edi
  __int128 v9; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  hdcSrc = CreateCompatibleDC(a2);
  if ( hdcSrc )
  {
    wil::SelectObject(&v9, hdcSrc, *(_QWORD *)(*(_QWORD *)a1 + 16LL));
    BitBlt(a2, 0, 0, *a3, a3[1], hdcSrc, 0, 0, 0xCC0020u);
    v7 = 0;
    if ( (_QWORD)v9 )
      wil::select_result::close(&v9);
  }
  else
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF8,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007000ELL);
  }
  if ( hdcSrc )
    DeleteDC(hdcSrc);
  return v7;
}

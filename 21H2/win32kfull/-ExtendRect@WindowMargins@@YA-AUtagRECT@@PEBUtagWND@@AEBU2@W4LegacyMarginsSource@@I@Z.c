/*
 * XREFs of ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B29D0
 * Callers:
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0048C48 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00B2264 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     _lambda_89d8f36525411427859098b7e7b99cc4_::operator() @ 0x1C0209408 (_lambda_89d8f36525411427859098b7e7b99cc4_--operator().c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x1C020B360 (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     ?xxxGetArrangeRectFromHitTarget@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020CCA4 (-xxxGetArrangeRectFromHitTarget@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTI.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C024B6D4 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 * Callees:
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C00B2AB0 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 */

_DWORD *__fastcall WindowMargins::ExtendRect(_DWORD *a1, struct tagWND *a2, _DWORD *a3)
{
  __int64 WindowMargins; // rax
  int v6; // edx
  int v7; // ecx
  _DWORD *result; // rax

  WindowMargins = WindowMargins::_anonymous_namespace_::GetWindowMargins(a2);
  *a1 = *a3 - (__int16)WindowMargins;
  a1[1] = a3[1] - SWORD2(WindowMargins);
  v6 = a3[2] + SWORD1(WindowMargins);
  v7 = SHIWORD(WindowMargins);
  result = a1;
  a1[3] = a3[3] + v7;
  a1[2] = v6;
  return result;
}

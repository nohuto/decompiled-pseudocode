/*
 * XREFs of ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C00FB30C
 * Callers:
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0067EB8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00FB938 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     _lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator() @ 0x1C01E9FC4 (_lambda_55b845ca2123bba9cc6e2775260ddcb2_--operator().c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x1C01EBF14 (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     ?xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01EE2EC (-xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindow.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C023F6F0 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 * Callees:
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C01015A4 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 */

struct tagRECT *__fastcall WindowMargins::ExtendRect(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3,
        const struct tagRECT *a4)
{
  __int64 WindowMargins; // rax
  int v7; // edx
  int v8; // ecx
  struct tagRECT *result; // rax

  WindowMargins = WindowMargins::_anonymous_namespace_::GetWindowMargins(retstr, (unsigned int)a4);
  this->left = *(_DWORD *)a3 - (__int16)WindowMargins;
  this->top = *((_DWORD *)a3 + 1) - SWORD2(WindowMargins);
  v7 = *((_DWORD *)a3 + 2) + SWORD1(WindowMargins);
  v8 = SHIWORD(WindowMargins);
  result = this;
  this->bottom = *((_DWORD *)a3 + 3) + v8;
  this->right = v7;
  return result;
}

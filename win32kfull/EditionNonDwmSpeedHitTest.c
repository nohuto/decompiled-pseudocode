/*
 * XREFs of EditionNonDwmSpeedHitTest @ 0x1C00E69C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C001664C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00E6A40 (INPUTDEST_FROM_PWND.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00E6A88 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

__int64 __fastcall EditionNonDwmSpeedHitTest(__int64 a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3, _DWORD *a4)
{
  struct tagWND *v7; // rax
  struct tagWND *v8; // rdx
  struct tagWND *v10; // rax

  *a4 = 0;
  v7 = TopLevelSpeedHitTest(grpdeskRitInput, a2, a3);
  if ( v7 && (v10 = ClassicChildTreeSpeedHitTest(v7, *a2)) != 0LL )
  {
    *a4 = 1;
    v8 = v10;
  }
  else
  {
    v8 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
  }
  INPUTDEST_FROM_PWND(a1, v8);
  return a1;
}

/*
 * XREFs of ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00AE548
 * Callers:
 *     EditionNonDwmSpeedHitTest @ 0x1C00AE480 (EditionNonDwmSpeedHitTest.c)
 *     EditionPostDwmSpeedHitTest @ 0x1C00D0570 (EditionPostDwmSpeedHitTest.c)
 *     EditionNonDwmTouchHitTest @ 0x1C01E6560 (EditionNonDwmTouchHitTest.c)
 * Callees:
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0012708 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00D04DC (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

struct tagWND *__fastcall TopLevelSpeedHitTest(struct tagDESKTOP *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  _QWORD *v3; // r10
  __int64 v4; // rdi
  struct tagWND *i; // rbx

  v3 = (_QWORD *)*((_QWORD *)a1 + 1);
  v4 = 0LL;
  if ( (*(_DWORD *)(*v3 + 64LL) & 1) != 0 )
    return DCETopLevelSpeedHitTest(a1, a2, a3);
  for ( i = *(struct tagWND **)(v3[3] + 112LL); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( (unsigned int)ClassicIsWindowHit(i, *a2) )
      return i;
  }
  return (struct tagWND *)v4;
}

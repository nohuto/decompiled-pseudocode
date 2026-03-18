/*
 * XREFs of ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0004C98
 * Callers:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0004C98 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     EditionPostDwmSpeedHitTest @ 0x1C0077400 (EditionPostDwmSpeedHitTest.c)
 *     EditionNonDwmSpeedHitTest @ 0x1C010AFB0 (EditionNonDwmSpeedHitTest.c)
 *     EditionNonDwmTouchHitTest @ 0x1C0206E40 (EditionNonDwmTouchHitTest.c)
 *     TouchTargetChildTree @ 0x1C020718C (TouchTargetChildTree.c)
 * Callees:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0004C98 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C010B0A0 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 */

struct tagWND *__fastcall ClassicChildTreeSpeedHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  struct tagWND *i; // rdi
  struct tagWND *result; // rax

  for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); ; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( !i )
      return a1;
    if ( (unsigned int)ClassicIsWindowHit(i, a2) )
      break;
  }
  if ( !*((_QWORD *)i + 14) )
    return i;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*((_QWORD *)i + 5) + 104LL, a2) )
    return i;
  result = ClassicChildTreeSpeedHitTest(i, a2);
  if ( !result || result == i )
    return i;
  return result;
}

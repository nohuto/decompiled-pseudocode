/*
 * XREFs of ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x18022F8EC
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18022E664 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x180230098 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::HasRunningDefaultPositionAnimation(CInteractionTracker *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 58);
  result = 0;
  if ( v1 )
    return *(char *)(v1 + 580) < 0;
  return result;
}

/*
 * XREFs of ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x180233020
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180231D44 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1802337D8 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
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

/*
 * XREFs of ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x180233040
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180231D44 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1802337D8 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::HasRunningDefaultScaleAnimation(CInteractionTracker *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 59);
  result = 0;
  if ( v1 )
    return *(char *)(v1 + 580) < 0;
  return result;
}

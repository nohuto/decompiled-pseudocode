/*
 * XREFs of ?IsGestureActive@MultitaskingViewGestureState@@UEAAHXZ @ 0x1803F2C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MultitaskingViewGestureState::IsGestureActive(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  BOOL v3; // ebx

  v1 = this + 7;
  AcquireSRWLockShared(this + 7);
  v3 = (unsigned int)(LODWORD(this[8].Ptr) - 1) <= 1;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}

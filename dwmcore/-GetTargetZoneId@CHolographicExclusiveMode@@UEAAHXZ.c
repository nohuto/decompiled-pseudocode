/*
 * XREFs of ?GetTargetZoneId@CHolographicExclusiveMode@@UEAAHXZ @ 0x1802A4A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusiveMode::GetTargetZoneId(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  unsigned int Ptr; // ebx

  v1 = this + 2;
  AcquireSRWLockShared(this + 2);
  Ptr = (unsigned int)this[4].Ptr;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return Ptr;
}

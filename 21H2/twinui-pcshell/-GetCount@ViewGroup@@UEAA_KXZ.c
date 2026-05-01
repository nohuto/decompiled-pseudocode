/*
 * XREFs of ?GetCount@ViewGroup@@UEAA_KXZ @ 0x180306940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall ViewGroup::GetCount(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  PVOID Ptr; // rbx

  v2 = this + 21;
  AcquireSRWLockShared(this + 21);
  Ptr = this[23].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return Ptr;
}

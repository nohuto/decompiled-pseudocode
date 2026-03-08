/*
 * XREFs of UserScreenAccessCheck @ 0x1C00A3900
 * Callers:
 *     <none>
 * Callees:
 *     UserSurfaceAccessCheck @ 0x1C00A3930 (UserSurfaceAccessCheck.c)
 */

__int64 UserScreenAccessCheck()
{
  __int64 v0; // rcx

  v0 = 0LL;
  if ( grpdeskRitInput )
    v0 = ***((_QWORD ***)grpdeskRitInput + 1);
  return UserSurfaceAccessCheck(v0);
}

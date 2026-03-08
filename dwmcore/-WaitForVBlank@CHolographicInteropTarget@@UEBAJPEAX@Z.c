/*
 * XREFs of ?WaitForVBlank@CHolographicInteropTarget@@UEBAJPEAX@Z @ 0x1802A6830
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForVBlank@CHolographicManager@@QEAAJXZ @ 0x1802A2EC8 (-WaitForVBlank@CHolographicManager@@QEAAJXZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::WaitForVBlank(CHolographicInteropTarget *this, void *a2)
{
  CHolographicManager *v2; // rcx
  __int64 result; // rax

  v2 = (CHolographicManager *)*((_QWORD *)this + 3);
  result = 0LL;
  if ( v2 )
    return CHolographicManager::WaitForVBlank(v2);
  return result;
}

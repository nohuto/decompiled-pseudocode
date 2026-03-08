/*
 * XREFs of NtQueryIntervalProfile @ 0x140A01910
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryIntervalProfile @ 0x140972060 (KeQueryIntervalProfile.c)
 */

__int64 __fastcall NtQueryIntervalProfile(int a1, _DWORD *a2)
{
  __int64 v2; // r8

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v2 = (__int64)a2;
    *(_DWORD *)v2 = *(_DWORD *)v2;
  }
  *a2 = KeQueryIntervalProfile(a1);
  return 0LL;
}

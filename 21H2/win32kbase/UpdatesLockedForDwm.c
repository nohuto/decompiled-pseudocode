/*
 * XREFs of UpdatesLockedForDwm @ 0x1C0085390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatesLockedForDwm(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( g_bLockUpdatesForDwm )
    return PsGetCurrentProcess(a1, a2) != (_QWORD)g_pepDwm;
  return v2;
}

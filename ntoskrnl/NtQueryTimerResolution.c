/*
 * XREFs of NtQueryTimerResolution @ 0x140794470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtQueryTimerResolution(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a2;
    *(_DWORD *)v7 = *(_DWORD *)v7;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a3;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    *a1 = KeMaximumIncrement;
    *a2 = KeMinimumIncrement;
    *a3 = KePseudoHrTimeIncrement;
  }
  else
  {
    *a1 = KeMaximumIncrement;
    *a2 = KeMinimumIncrement;
    *a3 = KePseudoHrTimeIncrement;
  }
  return 0LL;
}

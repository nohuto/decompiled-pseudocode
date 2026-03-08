/*
 * XREFs of KiSanitizeProfileInterval @ 0x1405770C8
 * Callers:
 *     KeSetIntervalProfile @ 0x140972128 (KeSetIntervalProfile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSanitizeProfileInterval(int *a1)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // r8d

  result = KiCacheErrataMonitor;
  v2 = *a1;
  v3 = *(_DWORD *)KiCacheErrataMonitor;
  if ( (unsigned int)*a1 > *(_DWORD *)KiCacheErrataMonitor )
  {
    *a1 = v3;
    v2 = v3;
  }
  KiSanitizedProfileInterval = v2;
  return result;
}

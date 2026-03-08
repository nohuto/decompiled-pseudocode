/*
 * XREFs of WheaErrorSourceGetState @ 0x14060E190
 * Callers:
 *     <none>
 * Callees:
 *     WheapGetErrorSource @ 0x14060EAE8 (WheapGetErrorSource.c)
 */

__int64 __fastcall WheaErrorSourceGetState(unsigned int a1)
{
  __int64 ErrorSource; // rax
  __int64 v2; // rcx
  bool v3; // cf
  __int64 result; // rax
  unsigned int v5; // ecx

  ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, a1);
  v2 = ErrorSource + 96;
  v3 = ErrorSource != 0;
  result = 3LL;
  if ( (v2 & -(__int64)v3) != 0 )
  {
    v5 = *(_DWORD *)((v2 & -(__int64)v3) + 0xC);
    if ( v5 != 4 )
      return v5;
  }
  return result;
}

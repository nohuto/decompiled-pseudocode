/*
 * XREFs of PspConvertJobToMixed @ 0x140908E14
 * Callers:
 *     PspBindProcessSessionToJob @ 0x1406F5DFC (PspBindProcessSessionToJob.c)
 *     PspSetJobMemoryPartition @ 0x14090969C (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspConvertJobToMixed(__int64 a1, int a2)
{
  int v3; // eax

  if ( *(_DWORD *)(a1 + 480) == -2 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 1320);
  if ( (v3 & 0x10) == 0
    && ((v3 & 0x40000000) != 0 || ((*(_QWORD *)(a1 + 1560) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 || a2) )
  {
    *(_DWORD *)(a1 + 480) = -2;
    return 0LL;
  }
  return 3221225506LL;
}

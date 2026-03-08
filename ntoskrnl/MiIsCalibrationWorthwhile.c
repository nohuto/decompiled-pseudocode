/*
 * XREFs of MiIsCalibrationWorthwhile @ 0x140360984
 * Callers:
 *     MiScheduleZeroPageThreads @ 0x14036072C (MiScheduleZeroPageThreads.c)
 *     MiZeroPageCalibrate @ 0x1403A50D0 (MiZeroPageCalibrate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsCalibrationWorthwhile(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_BYTE *)(a1 + 5)
    || (!*(_BYTE *)(a1 + 6) || !*(_BYTE *)(a1 + 7))
    && (!*(_DWORD *)(a1 + 16) || !*(_DWORD *)(a1 + 20) || a2 > *(_DWORD *)a1) )
  {
    return 1LL;
  }
  return result;
}

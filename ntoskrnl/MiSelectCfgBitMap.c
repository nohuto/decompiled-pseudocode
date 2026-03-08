/*
 * XREFs of MiSelectCfgBitMap @ 0x1407D2C08
 * Callers:
 *     MiCfgMarkValidEntries @ 0x14075C3DC (MiCfgMarkValidEntries.c)
 *     MiCommitVadCfgBits @ 0x1407D2AEC (MiCommitVadCfgBits.c)
 *     MiProcessPatchImageCfg @ 0x140A383A8 (MiProcessPatchImageCfg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSelectCfgBitMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int16 v4; // ax

  if ( *(_QWORD *)(a1 + 1408)
    && ((v4 = *(_WORD *)(a1 + 2412), v4 == 332) || v4 == 452)
    && a2 < 0x100000000LL
    && (!a3 || (*(_BYTE *)(*(_QWORD *)a3 + 14LL) & 0x40) != 0) )
  {
    return *(_QWORD *)(a1 + 1680) + 456LL;
  }
  else
  {
    return *(_QWORD *)(a1 + 1680) + 424LL;
  }
}

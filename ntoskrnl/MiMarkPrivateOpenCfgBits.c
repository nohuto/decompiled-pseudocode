/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x14075C5C4
 * Callers:
 *     MiMarkPrivateImageCfgBits @ 0x14075BBE8 (MiMarkPrivateImageCfgBits.c)
 *     MiCommitVadCfgBits @ 0x1407D2AEC (MiCommitVadCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x14075C600 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(int a1, __int64 a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(a1, a4 == 0, (a3 + 4095) & 0xFFFFF000, 0, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
}

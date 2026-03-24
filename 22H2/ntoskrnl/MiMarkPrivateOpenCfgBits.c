/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x14068C148
 * Callers:
 *     MiCommitVadCfgBits @ 0x14061C0DC (MiCommitVadCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x14061C328 (MiMarkProcessCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x14066A340 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x1406201D8 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(_QWORD *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(
           a1,
           a4 != 1,
           (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL,
           0,
           a2,
           (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
}

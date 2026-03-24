/*
 * XREFs of ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1C00C9538
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C002B990 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0081D30 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C002F510 (DEC_SHARE_REF_CNT.c)
 */

__int64 __fastcall XEPALOBJ::DecShareRefCountAndInvalidatePalette(unsigned int **this)
{
  __int64 result; // rax

  result = DEC_SHARE_REF_CNT(*this);
  *this = 0LL;
  return result;
}

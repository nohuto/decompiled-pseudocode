/*
 * XREFs of ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01A4048
 * Callers:
 *     MagSetLensContextInformation @ 0x1C01A4A80 (MagSetLensContextInformation.c)
 * Callees:
 *     _SetMagnificationInputTransform @ 0x1C007F160 (_SetMagnificationInputTransform.c)
 */

__int64 __fastcall MagpUpdateInputTransfrom(struct _MAGN_INPUT_TRANSFORM *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned int)SetMagnificationInputTransform((__int128 *)a1, a2, a3, a4) == 0 ? 0xC0000001 : 0;
}

/*
 * XREFs of ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01CC790
 * Callers:
 *     MagSetLensContextInformation @ 0x1C01CD254 (MagSetLensContextInformation.c)
 * Callees:
 *     _SetMagnificationInputTransform @ 0x1C00EB690 (_SetMagnificationInputTransform.c)
 */

__int64 __fastcall MagpUpdateInputTransfrom(struct _MAGN_INPUT_TRANSFORM *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)SetMagnificationInputTransform((__int128 *)a1, a2, a3) == 0 ? 0xC0000001 : 0;
}

/*
 * XREFs of KiGetCurrentGroupCount @ 0x14032D298
 * Callers:
 *     KiUpdateProcessorCount @ 0x14099F1EC (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140C50D64;
}

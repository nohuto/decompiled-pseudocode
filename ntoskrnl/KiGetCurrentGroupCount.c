/*
 * XREFs of KiGetCurrentGroupCount @ 0x140303174
 * Callers:
 *     KiUpdateProcessorCount @ 0x140A860DC (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140C6A9EC;
}

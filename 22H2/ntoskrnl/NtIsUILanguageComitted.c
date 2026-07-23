/*
 * XREFs of NtIsUILanguageComitted @ 0x140771FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtIsUILanguageComitted(void)
{
  return PsUILanguageComitted == 0 ? 0xC0000034 : 0;
}

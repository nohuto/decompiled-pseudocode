/*
 * XREFs of NtSetDefaultUILanguage @ 0x14078BD30
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetPendingUILanguage @ 0x14078BF70 (ExpSetPendingUILanguage.c)
 */

NTSTATUS __cdecl NtSetDefaultUILanguage(LANGID DefaultUILanguageId)
{
  if ( DefaultUILanguageId )
    return 0;
  else
    return ExpSetPendingUILanguage();
}

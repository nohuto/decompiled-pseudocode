/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x1403FAE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DefaultUILanguageId);
}

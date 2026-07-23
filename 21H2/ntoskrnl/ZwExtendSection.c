/*
 * XREFs of ZwExtendSection @ 0x1403FC1E0
 * Callers:
 *     CmSiExtendSection @ 0x140250A9C (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}

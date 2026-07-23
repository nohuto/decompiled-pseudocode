/*
 * XREFs of ZwExtendSection @ 0x1403FB680
 * Callers:
 *     CmSiExtendSection @ 0x140363460 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}

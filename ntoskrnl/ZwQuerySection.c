/*
 * XREFs of ZwQuerySection @ 0x140412D30
 * Callers:
 *     CmSiGetSectionLength @ 0x1402B2B8C (CmSiGetSectionLength.c)
 *     DifZwQuerySectionWrapper @ 0x1405F3120 (DifZwQuerySectionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

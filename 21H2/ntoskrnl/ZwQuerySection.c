/*
 * XREFs of ZwQuerySection @ 0x14041C180
 * Callers:
 *     CmSiGetSectionLength @ 0x14020B6C8 (CmSiGetSectionLength.c)
 *     DifZwQuerySectionWrapper @ 0x1406257F0 (DifZwQuerySectionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

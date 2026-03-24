/*
 * XREFs of ZwQuerySection @ 0x1403FADC0
 * Callers:
 *     CmSiGetSectionLength @ 0x140362A2C (CmSiGetSectionLength.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

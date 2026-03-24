/*
 * XREFs of ZwExtendSection @ 0x1403FB680
 * Callers:
 *     CmSiExtendSection @ 0x140363460 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwExtendSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

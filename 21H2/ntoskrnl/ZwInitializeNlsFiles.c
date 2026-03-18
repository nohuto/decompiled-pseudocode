/*
 * XREFs of ZwInitializeNlsFiles @ 0x14041D800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwInitializeNlsFiles(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

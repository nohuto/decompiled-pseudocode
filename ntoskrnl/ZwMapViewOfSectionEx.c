/*
 * XREFs of ZwMapViewOfSectionEx @ 0x140414690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwMapViewOfSectionEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

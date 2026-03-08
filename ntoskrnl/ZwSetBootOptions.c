/*
 * XREFs of ZwSetBootOptions @ 0x1404155B0
 * Callers:
 *     DifZwSetBootOptionsWrapper @ 0x1405F4410 (DifZwSetBootOptionsWrapper.c)
 *     BiSetBootOptions @ 0x140A5C0C0 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

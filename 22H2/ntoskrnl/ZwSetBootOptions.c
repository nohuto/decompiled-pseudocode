/*
 * XREFs of ZwSetBootOptions @ 0x14041D940
 * Callers:
 *     DifZwSetBootOptionsWrapper @ 0x1405F68C0 (DifZwSetBootOptionsWrapper.c)
 *     BiSetBootOptions @ 0x140A5EDD4 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

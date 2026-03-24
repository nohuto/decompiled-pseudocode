/*
 * XREFs of ZwSetBootOptions @ 0x1403FD4E0
 * Callers:
 *     BiSetBootOptions @ 0x140972B3C (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

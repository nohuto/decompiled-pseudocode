/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x140415A10
 * Callers:
 *     BiDeleteEfiVariable @ 0x140A5B6EC (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x1403FCF80
 * Callers:
 *     BiDeleteEfiVariable @ 0x1409718D4 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

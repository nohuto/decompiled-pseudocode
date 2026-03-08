/*
 * XREFs of HalRegisterErrataCallbacks @ 0x140B4CB70
 * Callers:
 *     EmInitSystem @ 0x140B4CBA8 (EmInitSystem.c)
 * Callees:
 *     EmpProviderRegister @ 0x140810DB0 (EmpProviderRegister.c)
 */

__int64 HalRegisterErrataCallbacks()
{
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  return EmpProviderRegister(0LL, 0LL, 0, (__int64)&off_140005940, 6u, &v1);
}

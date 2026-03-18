/*
 * XREFs of HalRegisterErrataCallbacks @ 0x140B54E30
 * Callers:
 *     EmInitSystem @ 0x140B54E68 (EmInitSystem.c)
 * Callees:
 *     EmpProviderRegister @ 0x140823980 (EmpProviderRegister.c)
 */

__int64 HalRegisterErrataCallbacks()
{
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  return EmpProviderRegister(0LL, 0LL, 0, (__int64)&off_140002580, 6u, &v1);
}

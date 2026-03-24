/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1403FC640
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x1407ADA98 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x1409718D4 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

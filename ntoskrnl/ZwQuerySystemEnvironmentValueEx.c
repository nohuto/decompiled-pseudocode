/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x140415070
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x140825764 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x140A5B6EC (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

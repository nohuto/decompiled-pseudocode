/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x14041D400
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x14082D7D4 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x140A5E400 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1403FCFC0
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x1407AD658 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x140971884 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

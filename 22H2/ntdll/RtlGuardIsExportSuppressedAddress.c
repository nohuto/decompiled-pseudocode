/*
 * XREFs of RtlGuardIsExportSuppressedAddress @ 0x180053FC8
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x180053EB8 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800FD7D0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x180053FF8 (RtlpGetTargetRvaFlag.c)
 */

bool __fastcall RtlGuardIsExportSuppressedAddress(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h]

  return (unsigned __int8)RtlpGetTargetRvaFlag(a1) && (v2 & 3) == 2;
}

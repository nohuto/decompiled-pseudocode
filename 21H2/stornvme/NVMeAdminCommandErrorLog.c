/*
 * XREFs of NVMeAdminCommandErrorLog @ 0x1C0006790
 * Callers:
 *     NVMeMapError @ 0x1C00010FC (NVMeMapError.c)
 * Callees:
 *     GetLunExtension @ 0x1C0004630 (GetLunExtension.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeAdminCommandErrorLog(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rbx
  __int64 LunExtension; // r14

  SrbExtension = GetSrbExtension(a2);
  LunExtension = GetLunExtension(a1, HIDWORD(*(_QWORD *)(SrbExtension + 4096)));
  return StorPortExtendedFunction(86LL, a1, LunExtension, 1LL);
}

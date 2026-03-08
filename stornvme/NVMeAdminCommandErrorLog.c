/*
 * XREFs of NVMeAdminCommandErrorLog @ 0x1C001B794
 * Callers:
 *     NVMeMapError @ 0x1C00200A8 (NVMeMapError.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     GetLunExtension @ 0x1C001B754 (GetLunExtension.c)
 */

__int64 __fastcall NVMeAdminCommandErrorLog(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rdi
  __int64 LunExtension; // r15
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  LunExtension = GetLunExtension(a1, HIDWORD(*(_QWORD *)(SrbExtension + 4096)));
  result = *(_QWORD *)(a1 + 184);
  if ( *(_BYTE *)(a1 + 22) )
    return StorPortExtendedFunction(87LL, a1, LunExtension, 1LL);
  return result;
}

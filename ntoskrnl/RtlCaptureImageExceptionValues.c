/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x1402B274C
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x1402B26C8 (RtlInsertInvertedFunctionTable.c)
 *     KiLockServiceTable @ 0x1402E3C60 (KiLockServiceTable.c)
 *     RtlpLookupUserFunctionTable @ 0x14039DB7C (RtlpLookupUserFunctionTable.c)
 *     KiLockExtendedServiceTable @ 0x1403DDCF8 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140B14320 (KiVerifyXcpt15.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 *     KiFatalExceptionFilter @ 0x140B7015C (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax

  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = RtlImageDirectoryEntryToData(a1, a2, 3LL, a3);
  *v4 = v5;
  if ( !v5 )
    *a3 = 0;
  return 0LL;
}

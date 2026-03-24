/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x1403725AC
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x14029A894 (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x1403721F8 (RtlInsertInvertedFunctionTable.c)
 *     KiLockServiceTable @ 0x14039F194 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x1403DBEC8 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140A1B320 (KiVerifyXcpt15.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     KiFatalExceptionFilter @ 0x140A7221C (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402532D0 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(int a1, __int64 *a2, _DWORD *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax

  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = RtlImageDirectoryEntryToData(a1, (int)a2, 3, (int)a3);
  *v4 = v5;
  if ( !v5 )
    *a3 = 0;
  return 0LL;
}

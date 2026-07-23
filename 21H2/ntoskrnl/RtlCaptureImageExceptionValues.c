/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x1403720FC
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x140212224 (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x140371D48 (RtlInsertInvertedFunctionTable.c)
 *     KiLockServiceTable @ 0x14039F2E4 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x1403DC038 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140A1C320 (KiVerifyXcpt15.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 *     KiFatalExceptionFilter @ 0x140A7321C (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140286140 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(void *a1, _QWORD *a2, ULONG *a3)
{
  PVOID v5; // rax

  v5 = RtlImageDirectoryEntryToData(a1, 1u, 3u, a3);
  *a2 = v5;
  if ( !v5 )
    *a3 = 0;
  return 0LL;
}

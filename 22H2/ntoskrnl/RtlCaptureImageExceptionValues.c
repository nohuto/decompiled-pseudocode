/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x140372D8C
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x1402F15C4 (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x1403729D8 (RtlInsertInvertedFunctionTable.c)
 *     KiLockServiceTable @ 0x14039EA94 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x1403DB7C8 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140A1B320 (KiVerifyXcpt15.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     KiFatalExceptionFilter @ 0x140A7221C (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140252B30 (RtlImageDirectoryEntryToData.c)
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

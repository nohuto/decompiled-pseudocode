/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x1402D8EEC
 * Callers:
 *     KiLockServiceTable @ 0x14024B4DC (KiLockServiceTable.c)
 *     RtlpLookupUserFunctionTable @ 0x14024BAD4 (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x1402D8ABC (RtlInsertInvertedFunctionTable.c)
 *     KiLockExtendedServiceTable @ 0x1403EB1A8 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140AD6320 (KiVerifyXcpt15.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     KiFatalExceptionFilter @ 0x140B2EB08 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
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

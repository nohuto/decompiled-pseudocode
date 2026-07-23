/*
 * XREFs of ViZwCheckObjectAttributes @ 0x1409ED85C
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x1409E9420 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x1409E9510 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x1409E9660 (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x1409E9D10 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x1409E9D80 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x1409E9E40 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x1409E9ED0 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x1409E9FD0 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x1409EA040 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x1409EA110 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1409EA1D0 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x1409EA260 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x1409EA2F0 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1409EA3F0 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x1409EA4B0 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x1409EA710 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x1409EAC90 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x1409EAF80 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x1409EAFF0 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x1409EB080 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x1409EB0F0 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x1409EB190 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x1409EB200 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x1409EB270 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x1409EB3D0 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x1409EB440 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x1409EB4B0 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x1409EB630 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x1409EB6A0 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x1409EB740 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x1409EBEF0 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x1409ECB10 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x1409ED5C0 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1409ED8AC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 */

__int64 __fastcall ViZwCheckObjectAttributes(ULONG_PTR *a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)a1, a2);
    ViZwCheckUnicodeString(a1[2], a2);
    ViZwCheckVirtualAddress(a1[4], a2);
    return ViZwCheckVirtualAddress(a1[5], a2);
  }
  return result;
}

/*
 * XREFs of ViZwCheckObjectAttributes @ 0x1409EC86C
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x1409E8430 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x1409E8520 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x1409E8670 (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x1409E8D20 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x1409E8D90 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x1409E8E50 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x1409E8EE0 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x1409E8FE0 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x1409E9050 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x1409E9120 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1409E91E0 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x1409E9270 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x1409E9300 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1409E9400 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x1409E94C0 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x1409E9720 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x1409E9CA0 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x1409E9F90 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x1409EA000 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x1409EA090 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x1409EA100 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x1409EA1A0 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x1409EA210 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x1409EA280 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x1409EA3E0 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x1409EA450 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x1409EA4C0 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x1409EA640 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x1409EA6B0 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x1409EA750 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x1409EAF00 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x1409EBB20 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x1409EC5D0 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1409EC8BC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409EC954 (ViZwCheckVirtualAddress.c)
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

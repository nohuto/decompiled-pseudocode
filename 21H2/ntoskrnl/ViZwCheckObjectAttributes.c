/*
 * XREFs of ViZwCheckObjectAttributes @ 0x1409EC85C
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x1409E8420 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x1409E8510 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x1409E8660 (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x1409E8D10 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x1409E8D80 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x1409E8E40 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x1409E8ED0 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x1409E8FD0 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x1409E9040 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x1409E9110 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1409E91D0 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x1409E9260 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x1409E92F0 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1409E93F0 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x1409E94B0 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x1409E9710 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x1409E9C90 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x1409E9F80 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x1409E9FF0 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x1409EA080 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x1409EA0F0 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x1409EA190 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x1409EA200 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x1409EA270 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x1409EA3D0 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x1409EA440 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x1409EA4B0 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x1409EA630 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x1409EA6A0 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x1409EA740 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x1409EAEF0 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x1409EBB10 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x1409EC5C0 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1409EC8AC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409EC944 (ViZwCheckVirtualAddress.c)
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

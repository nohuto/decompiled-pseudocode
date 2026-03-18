/*
 * XREFs of ViZwCheckObjectAttributes @ 0x140A958B4
 * Callers:
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140A949D0 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140A94A30 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140A94AD0 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140A94CE0 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140A94D20 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140A94D60 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140A94DA0 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140A94E00 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140A94E50 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140A94EA0 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140A94EF0 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140A94F40 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140A94FD0 (VfZwDeleteFile_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140A950D0 (VfZwDuplicateToken_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140A951A0 (VfZwLoadKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140A952B0 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140A952F0 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140A95340 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140A95390 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140A953E0 (VfZwOpenTransaction_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140A955B0 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140A95790 (VfZwReplaceKey_Entry.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140A95904 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140A9598C (ViZwCheckVirtualAddress.c)
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

/*
 * XREFs of ViZwCheckObjectAttributes @ 0x140AD5F34
 * Callers:
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140AD5050 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140AD50B0 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140AD5150 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140AD5360 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140AD53A0 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140AD53E0 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140AD5420 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140AD5480 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140AD54D0 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140AD5520 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140AD5570 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140AD55C0 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140AD5650 (VfZwDeleteFile_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140AD5750 (VfZwDuplicateToken_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140AD5820 (VfZwLoadKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140AD5930 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140AD5970 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140AD59C0 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140AD5A10 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140AD5A60 (VfZwOpenTransaction_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140AD5C30 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140AD5E10 (VfZwReplaceKey_Entry.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140AD5F84 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140AD600C (ViZwCheckVirtualAddress.c)
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

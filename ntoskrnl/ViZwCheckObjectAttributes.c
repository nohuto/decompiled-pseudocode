/*
 * XREFs of ViZwCheckObjectAttributes @ 0x140AD1F34
 * Callers:
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140AD1050 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140AD10B0 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140AD1150 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140AD1360 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140AD13A0 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140AD13E0 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140AD1420 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140AD1480 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140AD14D0 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140AD1520 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140AD1570 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140AD15C0 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140AD1650 (VfZwDeleteFile_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140AD1750 (VfZwDuplicateToken_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140AD1820 (VfZwLoadKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140AD1930 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140AD1970 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140AD19C0 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140AD1A10 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140AD1A60 (VfZwOpenTransaction_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140AD1C30 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140AD1E10 (VfZwReplaceKey_Entry.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140AD1F84 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140AD200C (ViZwCheckVirtualAddress.c)
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

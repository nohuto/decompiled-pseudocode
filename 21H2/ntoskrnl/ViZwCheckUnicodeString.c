/*
 * XREFs of ViZwCheckUnicodeString @ 0x140A95904
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm_Entry @ 0x140A94880 (VfZwAccessCheckAndAuditAlarm_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140A94A30 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwCloseObjectAuditAlarm_Entry @ 0x140A94C30 (VfZwCloseObjectAuditAlarm_Entry.c)
 *     VfZwConnectPort_Entry @ 0x140A94C60 (VfZwConnectPort_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140A94E00 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140A94EA0 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140A94EF0 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140A94F40 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteValueKey_Entry @ 0x140A95000 (VfZwDeleteValueKey_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140A95390 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140A95480 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140A954F0 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwQueryLicenseValue_Entry @ 0x140A955F0 (VfZwQueryLicenseValue_Entry.c)
 *     VfZwQuerySymbolicLinkObject_Entry @ 0x140A95640 (VfZwQuerySymbolicLinkObject_Entry.c)
 *     VfZwQueryValueKey_Entry @ 0x140A95680 (VfZwQueryValueKey_Entry.c)
 *     VfZwSetValueKey_Entry @ 0x140A95820 (VfZwSetValueKey_Entry.c)
 *     ViZwCheckObjectAttributes @ 0x140A958B4 (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x140A9598C (ViZwCheckVirtualAddress.c)
 */

void __fastcall ViZwCheckUnicodeString(unsigned __int16 *BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v4; // rbx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax

  if ( BugCheckParameter3 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)BugCheckParameter3, BugCheckParameter2);
    v4 = *((_QWORD *)BugCheckParameter3 + 1);
    ViZwCheckVirtualAddress(v4, BugCheckParameter2);
    v5 = *BugCheckParameter3;
    if ( v4 + v5 < v4
      || (v6 = BugCheckParameter3[1], v6 < (unsigned __int16)v5)
      || (((unsigned __int16)v5 | v6) & 1) != 0 )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xE4uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
  }
}

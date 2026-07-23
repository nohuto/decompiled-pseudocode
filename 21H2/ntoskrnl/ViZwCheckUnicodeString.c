/*
 * XREFs of ViZwCheckUnicodeString @ 0x1409ED8AC
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x1409E90D0 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x1409E9510 (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x1409E9B50 (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x1409E9C00 (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x1409EA040 (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1409EA1D0 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x1409EA2F0 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1409EA3F0 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x1409EA4F0 (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x1409EA640 (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x1409EAC50 (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x1409EB740 (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x1409EBBD0 (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x1409EC4B0 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x1409EC700 (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x1409EC810 (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x1409ED3C0 (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x1409ED580 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x1409ED85C (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 */

void __fastcall ViZwCheckUnicodeString(unsigned __int16 *BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v4; // rsi
  __int64 v5; // rcx
  unsigned __int16 v6; // ax

  if ( BugCheckParameter3 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)BugCheckParameter3, BugCheckParameter2);
    v4 = *((_QWORD *)BugCheckParameter3 + 1);
    ViZwCheckVirtualAddress(v4, BugCheckParameter2);
    v5 = *BugCheckParameter3;
    if ( (MmVerifierData & 0x100) != 0 )
    {
      if ( v4 + v5 < v4
        || (v6 = BugCheckParameter3[1], v6 < (unsigned __int16)v5)
        || (((unsigned __int16)v5 | v6) & 1) != 0 )
      {
        VerifierBugCheckIfAppropriate(0xC4u, 0xE4uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
    }
  }
}

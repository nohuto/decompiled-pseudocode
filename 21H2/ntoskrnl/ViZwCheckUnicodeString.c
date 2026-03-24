/*
 * XREFs of ViZwCheckUnicodeString @ 0x1409EC8AC
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x1409E80D0 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x1409E8510 (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x1409E8B50 (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x1409E8C00 (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x1409E9040 (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1409E91D0 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x1409E92F0 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1409E93F0 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x1409E94F0 (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x1409E9640 (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x1409E9C50 (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x1409EA740 (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x1409EABD0 (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x1409EB4B0 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x1409EB700 (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x1409EB810 (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x1409EC3C0 (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x1409EC580 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x1409EC85C (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D54 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x1409EC944 (ViZwCheckVirtualAddress.c)
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

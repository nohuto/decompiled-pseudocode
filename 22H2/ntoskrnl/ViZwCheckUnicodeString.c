/*
 * XREFs of ViZwCheckUnicodeString @ 0x1409EC8BC
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x1409E80E0 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x1409E8520 (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x1409E8B60 (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x1409E8C10 (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x1409E9050 (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1409E91E0 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x1409E9300 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1409E9400 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x1409E9500 (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x1409E9650 (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x1409E9C60 (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x1409EA750 (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x1409EABE0 (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x1409EB4C0 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x1409EB710 (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x1409EB820 (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x1409EC3D0 (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x1409EC590 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x1409EC86C (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D64 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x1409EC954 (ViZwCheckVirtualAddress.c)
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

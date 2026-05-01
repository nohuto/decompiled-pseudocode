/*
 * XREFs of ?RuntimeClassInitialize@?$PrivilegedOperationsBase@UIPrivilegedHotkeyOperations@@@@QEAAJPEAVIamAccess@@VWeakRef@WRL@Microsoft@@@Z @ 0x18029B768
 * Callers:
 *     ??$MakeAndInitialize@VCPrivilegedArrangementOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedArrangementOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x18029812C (--$MakeAndInitialize@VCPrivilegedArrangementOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micros.c)
 *     ??$MakeAndInitialize@VCPrivilegedDesktopOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedDesktopOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1802981D8 (--$MakeAndInitialize@VCPrivilegedDesktopOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedForegroundOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x180298284 (--$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microso.c)
 *     ??$MakeAndInitialize@VCPrivilegedNotificationOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedNotificationOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x180298330 (--$MakeAndInitialize@VCPrivilegedNotificationOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micro.c)
 *     ??$MakeAndInitialize@VCPrivilegedPresentationOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedPresentationOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1802983DC (--$MakeAndInitialize@VCPrivilegedPresentationOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micro.c)
 *     ??$MakeAndInitialize@VCPrivilegedSizeConstraintsOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedSizeConstraintsOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x180298488 (--$MakeAndInitialize@VCPrivilegedSizeConstraintsOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Mi.c)
 *     ??$MakeAndInitialize@VCPrivilegedTabletModeOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedTabletModeOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x180298534 (--$MakeAndInitialize@VCPrivilegedTabletModeOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microso.c)
 *     ??$MakeAndInitialize@VPrivilegedHotkeyOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedHotkeyOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x180298698 (--$MakeAndInitialize@VPrivilegedHotkeyOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@.c)
 *     ??$MakeAndInitialize@VPrivilegedWindowGroupingOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowGroupingOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x180298820 (--$MakeAndInitialize@VPrivilegedWindowGroupingOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micr.c)
 *     ??$MakeAndInitialize@VPrivilegedWindowOwnershipOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowOwnershipOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1802988CC (--$MakeAndInitialize@VPrivilegedWindowOwnershipOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Mic.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z @ 0x1802992C0 (--4-$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z.c)
 */

__int64 __fastcall PrivilegedOperationsBase<IPrivilegedHotkeyOperations>::RuntimeClassInitialize(
        __int64 a1,
        volatile int *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx

  Microsoft::WRL::ComPtr<IamAccess>::operator=((__int64 *)(a1 + 48), a2);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *a3;
  if ( v5 != *a3 )
  {
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*a3);
      v5 = *(_QWORD *)(a1 + 56);
    }
    *(_QWORD *)(a1 + 56) = v6;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v7 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}

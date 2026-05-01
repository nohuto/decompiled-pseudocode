/*
 * XREFs of ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x180299FB4
 * Callers:
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x180299D50 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCPrivilegedPresentationOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedPresentationOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1802983DC (--$MakeAndInitialize@VCPrivilegedPresentationOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micro.c)
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x180299EE8 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedNotificationOperat.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18029A7C4 (-InternalRelease@-$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowGroupingOperations>::InitializePrivilegedOperations(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  void (*v7)(void); // rax
  int v8; // eax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  v12 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = PrivilegedOperationsServiceBase<CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowGroupingOperations>::InitializePrivilegedOperations(
         a1,
         &v12);
  if ( v5 >= 0 )
  {
    v12 = *a1;
    Microsoft::WRL::ComPtr<PrivilegedWindowGroupingOperations>::InternalRelease(a1 + 9);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedPresentationOperations,CPrivilegedPresentationOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
           a1 + 9,
           &v12,
           a2);
    v5 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x289,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v8);
    v9 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      v7 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
      goto LABEL_10;
    }
  }
  else
  {
    v6 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
LABEL_10:
      v7();
    }
  }
  return (unsigned int)v5;
}

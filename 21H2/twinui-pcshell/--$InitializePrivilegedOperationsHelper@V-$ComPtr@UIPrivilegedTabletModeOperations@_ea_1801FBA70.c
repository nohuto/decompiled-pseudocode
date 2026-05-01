/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@@Z @ 0x1801FBA70
 * Callers:
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedTabletModeOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@34@@Z @ 0x1801FBA04 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedArrangementOperations_ea_1801FBA04.c)
 *     ?InitializePrivilegedOperations@ViewPresentationMediator@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180352570 (-InitializePrivilegedOperations@ViewPresentationMediator@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>,>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3)
{
  __int64 v4; // rax

  v4 = *a1 - *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1;
  if ( *a1 == *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1 )
    v4 = a1[1] - *(_QWORD *)GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data4;
  if ( v4 )
    return 2147500033LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a3);
  (**a2)(a2, &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd, a3);
  return 0LL;
}

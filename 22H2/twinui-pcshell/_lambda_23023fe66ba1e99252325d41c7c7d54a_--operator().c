/*
 * XREFs of _lambda_23023fe66ba1e99252325d41c7c7d54a_::operator() @ 0x1800D6FD0
 * Callers:
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x180466234 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180467E54 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_23023fe66ba1e99252325d41c7c7d54a_::operator()(IUnknown **a1, __int64 a2)
{
  bool v4; // bl
  int v6; // [rsp+50h] [rbp+18h] BYREF
  void *v7; // [rsp+58h] [rbp+20h] BYREF

  if ( IsPPIEdition() )
  {
    v6 = 0;
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
    if ( (int)TabletModePositioner::InitLayoutOperationHelper(
                *a1,
                &CLSID_PPIWin32VtcLayoutOperation,
                &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
                &v7) >= 0
      && (*(int (__fastcall **)(void *, __int64, __int64, int *))(*(_QWORD *)v7 + 56LL))(v7, a2, 1LL, &v6) >= 0 )
    {
      v4 = v6 != 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
      return v4;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  }
  return 0;
}

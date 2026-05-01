/*
 * XREFs of _anonymous_namespace_::GetTargetItem @ 0x1804ED908
 * Callers:
 *     ?IsVerbRegistered@@YA_NPEAUIShellItem@@PEBG@Z @ 0x1804EDAA8 (-IsVerbRegistered@@YA_NPEAUIShellItem@@PEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1803F63BC (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VDummyUnknown@details@wil@@V123@AEBU_GUID@@$$T@Details@WRL@Microsoft@@YAJPEAPEAVDummyUnknown@details@wil@@AEBU_GUID@@$$QEA$$T@Z @ 0x1804ED814 (--$MakeAndInitialize@VDummyUnknown@details@wil@@V123@AEBU_GUID@@$$T@Details@WRL@Microsoft@@YAJPE.c)
 */

__int64 __fastcall anonymous_namespace_::GetTargetItem(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  LPBC ppbc; // [rsp+58h] [rbp+28h] BYREF
  volatile int *v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  *a3 = 0LL;
  ppbc = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppbc);
  CreateBindCtx(0, &ppbc);
  v8 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v8);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<wil::details::DummyUnknown,wil::details::DummyUnknown,_GUID const &,std::nullptr_t>(
         &v8,
         (__int128 *)&GUID_NULL,
         &v9);
  if ( v5 >= 0 )
  {
    if ( ppbc )
      v5 = ((__int64 (__fastcall *)(LPBC, const wchar_t *, volatile int *))ppbc->lpVtbl->RegisterObjectParam)(
             ppbc,
             L"Don't Resolve Link",
             v8);
    else
      v5 = -2147024882;
  }
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v8);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, LPBC, const GUID *, GUID *, _QWORD *))(*(_QWORD *)a1 + 24LL))(
           a1,
           ppbc,
           &BHID_LinkTargetItem,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppbc);
  return (unsigned int)v5;
}

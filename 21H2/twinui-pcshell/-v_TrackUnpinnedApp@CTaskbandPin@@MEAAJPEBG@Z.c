/*
 * XREFs of ?v_TrackUnpinnedApp@CTaskbandPin@@MEAAJPEBG@Z @ 0x180152160
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18013AD6C (-InternalRelease@-$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ActivateInstance@UITaskBarAppProperties@ContentManagement@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUITaskBarAppProperties@ContentManagement@@@Z @ 0x18014FDBC (--$ActivateInstance@UITaskBarAppProperties@ContentManagement@@@Foundation@Windows@@YAJPEAUHSTRIN.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskbandPin::v_TrackUnpinnedApp(CTaskbandPin *this, const unsigned __int16 *a2)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // r8d
  int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, PVOID, __int64); // rdi
  HSTRING_HEADER *v8; // rax
  __int64 v9; // r8
  HSTRING_HEADER v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h]
  const WCHAR *v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v13 = a2;
  v14 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v11,
    L"ContentManagement.ContentManagementService",
    0x2Bu,
    0x2Au);
  v2 = v12;
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v14);
  v3 = Windows::Foundation::ActivateInstance<ContentManagement::ITaskBarAppProperties>(v2, &v14);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = v14;
    v7 = *(__int64 (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v14 + 48LL);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v11, &v13, v4);
    LOBYTE(v9) = 1;
    v5 = v7(v6, v8[1].Reserved.Reserved1, v9);
    if ( v5 >= 0 )
      v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x223,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\TaskbandPin.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&v14);
  return (unsigned int)v5;
}

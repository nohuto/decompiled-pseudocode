/*
 * XREFs of GridLayoutFactory::_ForEachGridItem__lambda_838c3430d1fb5e88f8a499e35e07eabf___ @ 0x1800D5DE4
 * Callers:
 *     ?_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z @ 0x180427AF0 (-_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_838c3430d1fb5e88f8a499e35e07eabf_::operator() @ 0x1800D5EE0 (_lambda_838c3430d1fb5e88f8a499e35e07eabf_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GridLayoutFactory::_ForEachGridItem__lambda_838c3430d1fb5e88f8a499e35e07eabf___(
        __int64 a1,
        __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // edi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 536) + 24LL))(*(_QWORD *)(a1 + 536), &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v7 = 0;
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = 0LL;
      v8 = *(_QWORD *)(a1 + 536);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL))(
             v8,
             v7,
             &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932,
             &v13);
      v5 = v9;
      if ( v9 < 0 )
        break;
      v9 = lambda_838c3430d1fb5e88f8a499e35e07eabf_::operator()(a2, v13);
      v5 = v9;
      if ( v9 < 0 )
      {
        v10 = 260LL;
        goto LABEL_11;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      if ( ++v7 >= v12 )
        return 0LL;
    }
    v10 = 259LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    return v5;
  }
  return 0LL;
}

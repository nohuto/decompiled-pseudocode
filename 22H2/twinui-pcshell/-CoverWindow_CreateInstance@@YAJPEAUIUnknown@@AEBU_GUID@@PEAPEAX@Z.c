/*
 * XREFs of ?CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1804846C8
 * Callers:
 *     ?RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z @ 0x1804756D8 (-RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E5200 (-InternalRelease@-$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x1804841B4 (--$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAP.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180484640 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_180484640.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CoverWindow_CreateInstance(struct IUnknown *a1, const struct _GUID *a2, void **a3)
{
  int v4; // eax
  int CanCastTo; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  TabletModeCoverWindow *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  IUnknown *v12; // [rsp+30h] [rbp+8h] BYREF
  TabletModeCoverWindow *v13; // [rsp+38h] [rbp+10h] BYREF

  v12 = a1;
  *a3 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease((volatile int **)&v13);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<TabletModeCoverWindow,TabletModeCoverWindow,IUnknown * &>(&v13, &v12);
  CanCastTo = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 501LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)v6);
    goto LABEL_10;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_2c36ae3a_298c_4659_b51a_0859453e8d8f, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v9 = v13;
    *a3 = v13;
    (*(void (__fastcall **)(TabletModeCoverWindow *))(*(_QWORD *)v9 + 8LL))(v9);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>::CanCastTo(
                  (__int64)v13,
                  v8,
                  a3);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  if ( CanCastTo < 0 )
  {
    v6 = (unsigned int)CanCastTo;
    v7 = 502LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease((volatile int **)&v13);
  return (unsigned int)CanCastTo;
}

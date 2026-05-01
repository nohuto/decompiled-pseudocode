/*
 * XREFs of ?DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1804265A0
 * Callers:
 *     ?_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1804151D4 (-_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIE.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180087A9C (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJPEAPEAVDragInputHandler@@AEAPEAUIExternalDragHost@@@Z @ 0x180426444 (--$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJ.c)
 */

__int64 __fastcall DragInputHandler_CreateInstance(struct IExternalDragHost *a1, const struct _GUID *a2, void **a3)
{
  int v4; // eax
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IExternalDragHost *v13; // [rsp+30h] [rbp+8h] BYREF
  void *v14; // [rsp+38h] [rbp+10h] BYREF

  v13 = a1;
  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v14);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<DragInputHandler,DragInputHandler,IExternalDragHost * &>(
         (__int64 *)&v14,
         &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 140LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\draginputhandler.cpp",
      (const char *)v6);
    goto LABEL_11;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_3421cff7_d49b_4e87_a0e9_1f7077d9ce1b, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v14;
    *a3 = v14;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
    v5 = 0;
  }
  else if ( InlineIsEqualGUID(v8, v8) )
  {
    v9 = v14;
    v5 = 0;
    *a3 = v14;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v5 = -2147467262;
  }
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 141LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v5;
}

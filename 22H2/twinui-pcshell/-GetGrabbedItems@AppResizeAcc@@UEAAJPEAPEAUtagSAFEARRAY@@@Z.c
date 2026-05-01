/*
 * XREFs of ?GetGrabbedItems@AppResizeAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1804890A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetSafeArray@AccessibilityHelpers@@YAJPEAUIRawElementProviderSimple@@PEAPEAUtagSAFEARRAY@@@Z @ 0x180489250 (-GetSafeArray@AccessibilityHelpers@@YAJPEAUIRawElementProviderSimple@@PEAPEAUtagSAFEARRAY@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeAcc::GetGrabbedItems(
        __int64 (__fastcall ***this)(char *, GUID *, AccessibilityHelpers **),
        struct tagSAFEARRAY **a2)
{
  int SafeArray; // eax
  struct tagSAFEARRAY **v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  AccessibilityHelpers *v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  SafeArray = (**(this - 1))((char *)this - 8, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &v10);
  v6 = SafeArray;
  if ( SafeArray < 0 )
  {
    v7 = 174LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeacc.cpp",
      (const char *)(unsigned int)SafeArray);
    goto LABEL_6;
  }
  SafeArray = AccessibilityHelpers::GetSafeArray(v10, (struct IRawElementProviderSimple *)a2, v5);
  v6 = SafeArray;
  if ( SafeArray < 0 )
  {
    v7 = 175LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v6;
}

/*
 * XREFs of ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180123588
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180123B10 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Attach@InjectionDevice@@QEAAJXZ @ 0x180120370 (-Attach@InjectionDevice@@QEAAJXZ.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1801213F4 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18012291C (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::TurnNavigationOn(ControllerProcessor *this)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, char *); // rsi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT v14; // [rsp+58h] [rbp+10h]

  v13 = 0LL;
  ControllerProcessor::LiftPressedVirtualKeys(this, 1);
  v2 = InjectionDevice::Attach((ControllerProcessor *)((char *)this + 2808));
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1013LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 72LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v13);
  v5 = v4(v3, &v13);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1015LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = v13;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v13 + 56LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 936);
  v8 = v7(v6, *((unsigned int *)this + 704), 1LL, (char *)this + 7488);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1016LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v14 = *(struct tagPOINT *)((char *)this + 332);
  v9 = ControllerProcessor::SetPointerPosition(this, v14, 1);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1018LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  *((_BYTE *)this + 7496) = 1;
  if ( (*((_BYTE *)this + 328) & 0x20) == 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 959) + 80LL))(
            *((_QWORD *)this + 959),
            0LL,
            *((_QWORD *)this + 962));
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1027LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v13);
  return 0LL;
}

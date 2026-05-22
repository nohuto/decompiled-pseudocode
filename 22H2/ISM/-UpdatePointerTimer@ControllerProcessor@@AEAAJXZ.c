/*
 * XREFs of ?UpdatePointerTimer@ControllerProcessor@@AEAAJXZ @ 0x180123DC8
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180121690 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180123288 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::UpdatePointerTimer(ControllerProcessor *this)
{
  char v2; // di
  bool v3; // r14
  bool v4; // bp
  bool v5; // si
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 1;
  if ( !*((_BYTE *)this + 212) )
  {
    v3 = COERCE_FLOAT(*((_DWORD *)this + 48) & _xmm) <= 0.23953247
      && COERCE_FLOAT(*((_DWORD *)this + 49) & _xmm) <= 0.23953247;
    v4 = COERCE_FLOAT(*((_DWORD *)this + 50) & _xmm) <= 0.26516724
      && COERCE_FLOAT(*((_DWORD *)this + 51) & _xmm) <= 0.26516724;
    v5 = COERCE_FLOAT(*((_DWORD *)this + 46) & _xmm) <= 0.1171875
      && COERCE_FLOAT(*((_DWORD *)this + 47) & _xmm) <= 0.1171875;
    if ( v4 && !*((_BYTE *)this + 396) && *((_DWORD *)this + 309) == 1 )
      ControllerProcessor::TryUpdateInteractionType((__int64)this, 0);
    if ( v5 && ((*((_DWORD *)this + 309) - 16) & 0xFFFFFFEF) == 0 )
      ControllerProcessor::TryUpdateInteractionType((__int64)this, 0);
    if ( v3 && v4 && v5 )
      v2 = 0;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 37) + 24LL))(*((_QWORD *)this + 37), &v10);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1906LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( v2 )
  {
    if ( !*((_DWORD *)this + 70) && !v10 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 37) + 80LL))(
             *((_QWORD *)this + 37),
             0LL,
             *((_QWORD *)this + 971));
      if ( v7 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1912LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v7);
        __debugbreak();
      }
    }
  }
  return 0LL;
}

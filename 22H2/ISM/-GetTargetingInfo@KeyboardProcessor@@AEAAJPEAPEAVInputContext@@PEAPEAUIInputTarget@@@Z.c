/*
 * XREFs of ?GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z @ 0x180048944
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801356B0 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x180023B74 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardProcessor::GetTargetingInfo(
        KeyboardProcessor *this,
        struct InputContext **a2,
        struct IInputTarget **a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // r14
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    v6 = 342LL;
LABEL_3:
    v7 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)v7);
    return v7;
  }
  if ( !a3 )
  {
    v6 = 343LL;
    goto LABEL_3;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
  if ( !v9 )
  {
    v7 = -2147418113;
    v6 = 346LL;
    goto LABEL_4;
  }
  v10 = InputContext::Create(a2);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      348LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, struct IInputTarget **))(*(_QWORD *)v9 + 64LL))(
          v9,
          *((_QWORD *)this + 4),
          *a2,
          0LL,
          a3);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      353LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x180048A35LL);
  }
  return 0LL;
}

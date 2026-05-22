/*
 * XREFs of ?OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180121580
 * Callers:
 *     ?OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z @ 0x180121630 (-OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801203B8 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 */

__int64 __fastcall ControllerProcessor::OnAutoRepeatTimer(ControllerProcessor *this)
{
  __int64 **v1; // rsi
  __int64 *i; // rbx
  __int16 v4; // dx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 **)*((_QWORD *)this + 12);
  for ( i = *v1; i != (__int64 *)v1; i = (__int64 *)*i )
  {
    v4 = *((_WORD *)i + 8);
    if ( v4 != 7 )
    {
      v5 = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, v4, 1);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2698LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v5);
        __debugbreak();
      }
    }
    *((_BYTE *)i + 18) = 0;
  }
  if ( !*((_QWORD *)this + 13) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 96LL))(*((_QWORD *)this + 36));
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2709LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
  }
  return 0LL;
}

/*
 * XREFs of ?OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z @ 0x1800B5478
 * Callers:
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800B5834 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 *     ?SendKeyboardEvent@InputServiceProxy@@UEAAJPEBUKeyboardEvent@@K@Z @ 0x180104030 (-SendKeyboardEvent@InputServiceProxy@@UEAAJPEBUKeyboardEvent@@K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall SurrogateCharAccumulator::OnKey(
        SurrogateCharAccumulator *this,
        unsigned __int16 a2,
        unsigned __int8 a3,
        bool *a4,
        unsigned __int16 *const a5,
        int *a6)
{
  __int16 v6; // ax
  unsigned __int16 v7; // ax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  a5[2] = 0;
  *a4 = 0;
  if ( (unsigned __int16)(a2 + 10240) > 0x3FFu )
  {
    if ( (unsigned __int16)(a2 + 9216) <= 0x3FFu && (v6 = *((_WORD *)this + a3)) != 0 )
    {
      if ( (unsigned __int16)(v6 + 10240) > 0x3FFu )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          49LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\InputServiceProxy.h",
          (const char *)a4);
        __debugbreak();
      }
      *a6 = 2;
      v7 = a2;
      a2 = *((_WORD *)this + a3);
    }
    else
    {
      *a6 = 1;
      v7 = 0;
    }
    *a5 = a2;
    a5[1] = v7;
    *((_WORD *)this + a3) = 0;
  }
  else
  {
    *((_WORD *)this + a3) = a2;
    *a4 = 1;
  }
}

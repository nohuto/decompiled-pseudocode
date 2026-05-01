/*
 * XREFs of ??$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x1800CB538
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7b575a9786ff11c5110d4c5de8dd2250___::Run @ 0x180046430 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7b575a9786ff11c5110d4c5de8dd2250___--Run.c)
 * Callees:
 *     ??$Make@VClientWindowReadyForPresentationEventArgs@@AEB_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@12@AEB_N@Z @ 0x1800462D0 (--$Make@VClientWindowReadyForPresentationEventArgs@@AEB_N@Details@WRL@Microsoft@@YA-AV-$ComPtr@V.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097A60 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<ClientWindowReadyForPresentationEventArgs,bool const &>(_QWORD *a1, char *a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<ClientWindowReadyForPresentationEventArgs,bool const &>(a1, a2);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      56LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v3);
    __debugbreak();
  }
  return a1;
}

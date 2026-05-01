/*
 * XREFs of wil::details::lambda_call__lambda_b348083250ad9bacb098e4eed6b00bf1___::_lambda_call__lambda_b348083250ad9bacb098e4eed6b00bf1___ @ 0x180305B74
 * Callers:
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$0 @ 0x18030776C (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$0.c)
 * Callees:
 *     ??$DoInvoke@V_lambda_6788242ee63e21dca0a125830d496daa_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_6788242ee63e21dca0a125830d496daa_@@@Z @ 0x18022563C (--$DoInvoke@V_lambda_6788242ee63e21dca0a125830d496daa_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

_BYTE *__fastcall wil::details::lambda_call__lambda_b348083250ad9bacb098e4eed6b00bf1___::_lambda_call__lambda_b348083250ad9bacb098e4eed6b00bf1___(
        __int64 a1)
{
  _BYTE *result; // rax
  RTL_SRWLOCK *v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v4; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_BYTE **)a1;
    if ( **(_BYTE **)a1 )
    {
      v2 = *(RTL_SRWLOCK **)(a1 + 8);
      *(_QWORD *)&v3 = &v4;
      v5 = v2;
      v4 = v2;
      *((_QWORD *)&v3 + 1) = &v5;
      return (_BYTE *)Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_6788242ee63e21dca0a125830d496daa_>(
                        v2 + 18,
                        &v3);
    }
  }
  return result;
}

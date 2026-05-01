/*
 * XREFs of ??4OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803CA8E8
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1803CF280 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1803C8D78 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAA_ea_1803C8D78.c)
 *     ??1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803CA3D8 (--1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803CA7B0 (--4-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 */

__int64 __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::operator=(
        __int64 a1,
        __int64 a2)
{
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v5);
  v5[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::~OnInputAppRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)v5);
  return a1;
}

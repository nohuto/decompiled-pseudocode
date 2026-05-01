/*
 * XREFs of ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1803B62EC
 * Callers:
 *     _lambda_13e7c7d1bbe76ddb28a4a415717d5504_::_lambda_13e7c7d1bbe76ddb28a4a415717d5504_ @ 0x1800CE708 (_lambda_13e7c7d1bbe76ddb28a4a415717d5504_--_lambda_13e7c7d1bbe76ddb28a4a415717d5504_.c)
 *     _lambda_43e2ea7707e3cc3476f49dcfffc6812f_::_lambda_43e2ea7707e3cc3476f49dcfffc6812f_ @ 0x1800CE774 (_lambda_43e2ea7707e3cc3476f49dcfffc6812f_--_lambda_43e2ea7707e3cc3476f49dcfffc6812f_.c)
 *     _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::_lambda_4d10a89d0d66f2982df1f6a73309b1fb_ @ 0x1800CE7CC (_lambda_4d10a89d0d66f2982df1f6a73309b1fb_--_lambda_4d10a89d0d66f2982df1f6a73309b1fb_.c)
 *     _lambda_536d29ca497f1a4a88268fb5f9ff4d76_::_lambda_536d29ca497f1a4a88268fb5f9ff4d76_ @ 0x1800CE82C (_lambda_536d29ca497f1a4a88268fb5f9ff4d76_--_lambda_536d29ca497f1a4a88268fb5f9ff4d76_.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803BC9D0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1803BCB80 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x1803BD6BC (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803BDB60 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180019EFC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ??4?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1803B764C (--4-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    1);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 13) = 0LL;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_DWORD *)a1 + 33) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_BYTE *)a1 + 120) = 0;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x90uLL);
  *((_QWORD *)a1 + 37) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  return a1;
}

/*
 * XREFs of ??$InputAppRequestedShowBadRequest@IIAEAIAEAI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAI1@Z @ 0x1803D5D28
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1803D9ED0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18023057C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1803C6800 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppRequestedShowBadRequest<unsigned int,unsigned int,unsigned int &,unsigned int &>(
        _DWORD *a1,
        int *a2,
        int *a3,
        int *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r9
  _DWORD *v10; // rcx
  int v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+44h] [rbp-14h] BYREF
  int v14; // [rsp+48h] [rbp-10h] BYREF
  _DWORD v15[3]; // [rsp+4Ch] [rbp-Ch] BYREF

  v8 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v10 = (_DWORD *)v8[1];
  if ( *v10 > 5u )
  {
    v12 = *a4;
    v13 = *a3;
    v14 = *a2;
    v15[0] = *a1;
    LODWORD(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v10,
                    byte_180595E90,
                    0LL,
                    v9,
                    (__int64)v15,
                    (__int64)&v14,
                    (__int64)&v13,
                    (__int64)&v12);
  }
  return (int)v8;
}

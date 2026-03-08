/*
 * XREFs of ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1801A343C
 * Callers:
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1801A184C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x1801A1B54 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801A2408 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180016EB0 (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x180032918 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18019AE38 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x18019AE88 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x18019AEA4 (-InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x18019AEC0 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18019AF34 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@D@@534333334@Z @ 0x18019FCAC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::SetInteractionChain(BOOL a1, const struct CInteraction *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 *v7; // rax
  const struct CInteraction *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  BOOL v11; // [rsp+90h] [rbp-80h] BYREF
  BOOL v12; // [rsp+94h] [rbp-7Ch] BYREF
  BOOL v13; // [rsp+98h] [rbp-78h] BYREF
  int v14; // [rsp+9Ch] [rbp-74h] BYREF
  int v15; // [rsp+A0h] [rbp-70h] BYREF
  int v16; // [rsp+A4h] [rbp-6Ch] BYREF
  BOOL v17; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+E0h] [rbp-30h] BYREF
  BOOL *v25; // [rsp+100h] [rbp-10h]
  int v26; // [rsp+108h] [rbp-8h]
  int v27; // [rsp+10Ch] [rbp-4h]

  if ( InputTraceLogging::Enabled(0LL) )
  {
    if ( a2 )
    {
      do
      {
        v7 = wil::details::static_lazy<InputTraceLogging>::get(
               v4,
               (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
        if ( *(_DWORD *)v7[1] > 4u && tlgKeywordOn(v7[1], 2048LL) )
        {
          v18 = *((_QWORD *)a2 + 214);
          v11 = *((_QWORD *)a2 + 35) != 0LL;
          v12 = InputTraceLogging::InteractionInputTransparency(a2);
          v13 = InputTraceLogging::InteractionFurtherProcessingForInput(a2);
          v14 = *((_BYTE *)a2 + 192) & 1;
          v15 = *((_DWORD *)a2 + 47);
          v19 = (__int64)InputTraceLogging::InteractionInputSink(a2);
          v16 = *((_DWORD *)a2 + 426);
          v20 = (__int64)InputTraceLogging::InteractionDefaultToString(v8);
          v21 = (__int64)InputTraceLogging::InteractionSourceTypeToString(a2);
          v22 = (__int64)a2;
          v23 = (__int64)a2;
          v17 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v10,
            (unsigned __int8 *)dword_18037AC44,
            v9,
            v10,
            (__int64)&v17,
            (__int64)&v23,
            (__int64)&v22,
            (const char **)&v21,
            (const char **)&v20,
            (__int64)&v16,
            (__int64)&v19,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v12,
            (__int64)&v11,
            (__int64)&v18);
        }
        InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(a2);
        a2 = (const struct CInteraction *)*((_QWORD *)a2 + 27);
      }
      while ( a2 );
    }
    else
    {
      v5 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                       v4,
                       (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
      if ( *v5 > 4u )
      {
        if ( tlgKeywordOn((__int64)v5, 2048LL) )
        {
          v27 = 0;
          v25 = &v11;
          v11 = a1;
          v26 = 4;
          tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_18037AD41, 0LL, 0LL, 3u, &v24);
        }
      }
    }
  }
}

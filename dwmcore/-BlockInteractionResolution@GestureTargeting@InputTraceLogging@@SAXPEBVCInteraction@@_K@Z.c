/*
 * XREFs of ?BlockInteractionResolution@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@_K@Z @ 0x1802088A0
 * Callers:
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x180209824 (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18019AE38 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x18019AE88 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x18019AEA4 (-InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x18019AEC0 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18019AF34 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$03@@U1@U3@U3@U3@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$03@@3555553@Z @ 0x180208478 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$03@@U1@U3@U3@U3.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::BlockInteractionResolution(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  bool v5; // zf
  BOOL v6; // eax
  int v7; // r8d
  unsigned __int8 v8; // al
  int v9; // eax
  const struct CInteraction *v10; // rcx
  int v11; // r8d
  __int64 v12; // r8
  __int64 v13; // r9
  BOOL v14; // [rsp+90h] [rbp+7h] BYREF
  int v15; // [rsp+94h] [rbp+Bh] BYREF
  int v16; // [rsp+98h] [rbp+Fh] BYREF
  int v17; // [rsp+9Ch] [rbp+13h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+2Fh] BYREF
  __int64 v22; // [rsp+C0h] [rbp+37h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+3Fh] BYREF
  __int64 v24; // [rsp+D0h] [rbp+47h] BYREF
  __int64 v25; // [rsp+100h] [rbp+77h] BYREF
  __int64 v26; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v4[1] > 4u && tlgKeywordOn(v4[1], 2048LL) )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 280) == 0LL;
      v18 = *(_QWORD *)(a1 + 1712);
      v6 = !v5;
    }
    else
    {
      v18 = 0LL;
      v6 = 0;
    }
    LODWORD(v25) = v6;
    LODWORD(v26) = InputTraceLogging::InteractionInputTransparency((const struct CInteraction *)a1);
    v14 = InputTraceLogging::InteractionFurtherProcessingForInput((const struct CInteraction *)a1);
    if ( a1 )
      v8 = *(_BYTE *)(a1 + 192) & 1;
    else
      v8 = v7;
    v15 = v8;
    if ( a1 )
      v9 = *(_DWORD *)(a1 + 188);
    else
      v9 = v7;
    v16 = v9;
    v19 = (__int64)InputTraceLogging::InteractionInputSink((const struct CInteraction *)a1);
    if ( a1 )
      v11 = *(_DWORD *)(a1 + 1704);
    v17 = v11;
    v20 = (__int64)InputTraceLogging::InteractionDefaultToString(v10);
    v21 = (__int64)InputTraceLogging::InteractionSourceTypeToString((const struct CInteraction *)a1);
    v23 = a1;
    v24 = a2;
    v22 = a1 & -(__int64)(a1 != 0);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v13,
      (unsigned __int8 *)dword_18037C410,
      v12,
      v13,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (const char **)&v21,
      (const char **)&v20,
      (__int64)&v17,
      (__int64)&v19,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v18);
  }
}

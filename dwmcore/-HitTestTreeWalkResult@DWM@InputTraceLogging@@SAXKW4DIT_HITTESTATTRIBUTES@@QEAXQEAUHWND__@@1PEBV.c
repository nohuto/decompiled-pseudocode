/*
 * XREFs of ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x18003226C
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180031CF4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180016EB0 (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18019AE38 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x18019AE88 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x18019AEA4 (-InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x18019AEC0 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18019AF34 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U4@U4@U4@U4@U1@U1@U3@U4@U3@U3@U3@U3@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@444444444AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@66663356555556@Z @ 0x1801AD948 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@$03@@U.c)
 */

void __fastcall InputTraceLogging::DWM::HitTestTreeWalkResult(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct CInteraction *a6)
{
  __int64 v6; // rbx
  int v10; // edi
  __int64 v11; // rax
  BOOL v12; // eax
  unsigned __int8 v13; // al
  int v14; // eax
  const struct CInteraction *v15; // rcx
  int v16; // eax
  int v17; // r10d
  wchar_t *v18; // rax
  wchar_t *v19; // rax
  wchar_t *v20; // rax
  wchar_t *v21; // rax
  wchar_t *v22; // rax
  wchar_t *v23; // rax
  wchar_t *v24; // rax
  wchar_t *v25; // rax
  wchar_t *v26; // rax
  wchar_t *v27; // rax
  int v28; // edi
  int v29; // edi
  int v30; // edi
  int v31; // edi
  int v32; // edi
  const char *v33; // rax
  BOOL v34; // [rsp+108h] [rbp-80h] BYREF
  BOOL v35; // [rsp+10Ch] [rbp-7Ch] BYREF
  int v36; // [rsp+110h] [rbp-78h] BYREF
  int v37; // [rsp+114h] [rbp-74h] BYREF
  int v38; // [rsp+118h] [rbp-70h] BYREF
  int v39; // [rsp+11Ch] [rbp-6Ch] BYREF
  __int64 v40; // [rsp+120h] [rbp-68h] BYREF
  __int64 v41; // [rsp+128h] [rbp-60h] BYREF
  __int64 v42; // [rsp+130h] [rbp-58h] BYREF
  __int64 v43; // [rsp+138h] [rbp-50h] BYREF
  __int64 v44; // [rsp+140h] [rbp-48h] BYREF
  __int64 v45; // [rsp+148h] [rbp-40h] BYREF
  __int64 v46; // [rsp+150h] [rbp-38h] BYREF
  __int64 v47; // [rsp+158h] [rbp-30h] BYREF
  __int64 v48; // [rsp+160h] [rbp-28h] BYREF
  __int64 v49; // [rsp+168h] [rbp-20h] BYREF
  __int64 v50; // [rsp+170h] [rbp-18h] BYREF
  __int64 v51; // [rsp+178h] [rbp-10h] BYREF
  __int64 v52; // [rsp+180h] [rbp-8h] BYREF
  __int64 v53; // [rsp+188h] [rbp+0h] BYREF
  __int64 v54; // [rsp+190h] [rbp+8h] BYREF
  __int64 v55; // [rsp+198h] [rbp+10h] BYREF
  __int64 v56; // [rsp+1A0h] [rbp+18h] BYREF
  __int64 v57; // [rsp+1A8h] [rbp+20h] BYREF
  __int64 v58; // [rsp+1B0h] [rbp+28h] BYREF
  __int64 v59; // [rsp+1B8h] [rbp+30h] BYREF

  v6 = (__int64)a6;
  v10 = a1;
  v11 = wil::details::static_lazy<InputTraceLogging>::get(
          a1,
          _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v11 + 8) > 4u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v11 + 8), 2LL) )
  {
    if ( v6 )
    {
      v40 = *(_QWORD *)(v6 + 1712);
      v12 = *(_QWORD *)(v6 + 280) != 0LL;
    }
    else
    {
      v40 = 0LL;
      v12 = 0;
    }
    LODWORD(a6) = v12;
    v34 = InputTraceLogging::InteractionInputTransparency((const struct CInteraction *)v6);
    v35 = InputTraceLogging::InteractionFurtherProcessingForInput((const struct CInteraction *)v6);
    if ( v6 )
      v13 = *(_BYTE *)(v6 + 192) & 1;
    else
      v13 = 0;
    v36 = v13;
    if ( v6 )
      v14 = *(_DWORD *)(v6 + 188);
    else
      v14 = 0;
    v37 = v14;
    v41 = (__int64)InputTraceLogging::InteractionInputSink((const struct CInteraction *)v6);
    if ( v6 )
      v16 = *(_DWORD *)(v6 + 1704);
    else
      v16 = 0;
    v38 = v16;
    v42 = (__int64)InputTraceLogging::InteractionDefaultToString(v15);
    v43 = (__int64)InputTraceLogging::InteractionSourceTypeToString((const struct CInteraction *)v6);
    v45 = v6;
    v46 = a5;
    v47 = a4;
    v44 = v6 & -(__int64)(v6 != 0);
    v48 = a3;
    v18 = L"HasCapture";
    v39 = a2;
    if ( (a2 & 0x200) == 0 )
      v18 = word_1803392B0;
    v49 = (__int64)v18;
    v19 = L"ControlDown";
    if ( (a2 & 0x100) == 0 )
      v19 = word_1803392B0;
    v50 = (__int64)v19;
    v20 = L"EraserDown";
    if ( (a2 & 0x80u) == 0 )
      v20 = word_1803392B0;
    v51 = (__int64)v20;
    v21 = L"BarrelButtonDown";
    if ( (a2 & 0x40) == 0 )
      v21 = word_1803392B0;
    v52 = (__int64)v21;
    v22 = L"NoHoverPointer";
    if ( (a2 & 0x20) == 0 )
      v22 = word_1803392B0;
    v53 = (__int64)v22;
    v23 = L"TouchTargeting";
    if ( (a2 & 0x10) == 0 )
      v23 = word_1803392B0;
    v54 = (__int64)v23;
    v24 = L"ButtonDown";
    if ( (a2 & 8) == 0 )
      v24 = word_1803392B0;
    v55 = (__int64)v24;
    v25 = L"WheelHorizontal";
    if ( (a2 & 4) == 0 )
      v25 = word_1803392B0;
    v56 = (__int64)v25;
    v26 = L"WheelIncreasing";
    if ( (a2 & 2) == 0 )
      v26 = word_1803392B0;
    v57 = (__int64)v26;
    v27 = L"MouseWheel";
    if ( (a2 & 1) == 0 )
      v27 = word_1803392B0;
    v58 = (__int64)v27;
    if ( v10 )
    {
      v28 = v10 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            v31 = v30 - 1;
            if ( v31 )
            {
              v32 = v31 - 1;
              if ( v32 )
              {
                if ( v32 == 1 )
                  v33 = "DropTarget";
                else
                  v33 = "UNKNOWN";
              }
              else
              {
                v33 = "Touchpad";
              }
            }
            else
            {
              v33 = "Mouse";
            }
          }
          else
          {
            v33 = "Pen";
          }
        }
        else
        {
          v33 = "Touch";
        }
      }
      else
      {
        v33 = "Pointer";
      }
    }
    else
    {
      v33 = "ComputeLuid";
    }
    v59 = (__int64)v33;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v17,
      (int)&dword_18037BC8A,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v39,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v38,
      (__int64)&v41,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&a6,
      (__int64)&v40);
  }
  if ( v6 )
    InputTraceLogging::GestureTargeting::TraceInteractionConfiguration((const struct CInteraction *)v6);
}

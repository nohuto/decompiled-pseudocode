/*
 * XREFs of ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x18019DF94
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18019E5C8 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U1@U1@U3@U3@U2@U1@U2@U2@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@335543444443@Z @ 0x180199B38 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U1@U1@U3@U3@U2.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18019AE38 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x18019AE88 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x18019AEA4 (-InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x18019AEC0 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18019AF34 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::SetPointerResult(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        const struct TargetingInfo *a5)
{
  const struct TargetingInfo *v5; // rdi
  __int64 v10; // rbx
  __int64 *v11; // rax
  bool v12; // zf
  BOOL v13; // eax
  int v14; // r8d
  unsigned __int8 v15; // al
  int v16; // eax
  const struct CInteraction *v17; // rcx
  int v18; // r8d
  int v19; // eax
  const char *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  int v24; // ecx
  const char *v25; // rax
  BOOL v26; // [rsp+B8h] [rbp-80h] BYREF
  BOOL v27; // [rsp+BCh] [rbp-7Ch] BYREF
  int v28; // [rsp+C0h] [rbp-78h] BYREF
  int v29; // [rsp+C4h] [rbp-74h] BYREF
  int v30; // [rsp+C8h] [rbp-70h] BYREF
  int v31; // [rsp+CCh] [rbp-6Ch] BYREF
  int v32; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v35; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v37; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v38; // [rsp+100h] [rbp-38h] BYREF
  __int64 v39; // [rsp+108h] [rbp-30h] BYREF
  __int64 v40; // [rsp+110h] [rbp-28h] BYREF
  __int64 v41; // [rsp+118h] [rbp-20h] BYREF

  v5 = a5;
  v10 = (*((_QWORD *)a5 + 1) - 64LL) & -(__int64)(*((_QWORD *)a5 + 1) != 0LL);
  v11 = wil::details::static_lazy<InputTraceLogging>::get(
          a1,
          (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v11[1] > 4u && tlgKeywordOn(v11[1], 2048LL) )
  {
    if ( v10 )
    {
      v12 = *(_QWORD *)(v10 + 280) == 0LL;
      v33 = *(_QWORD *)(v10 + 1712);
      v13 = !v12;
    }
    else
    {
      v33 = 0LL;
      v13 = 0;
    }
    LODWORD(a5) = v13;
    v26 = InputTraceLogging::InteractionInputTransparency((const struct CInteraction *)v10);
    v27 = InputTraceLogging::InteractionFurtherProcessingForInput((const struct CInteraction *)v10);
    if ( v10 )
      v15 = *(_BYTE *)(v10 + 192) & 1;
    else
      v15 = v14;
    v28 = v15;
    if ( v10 )
      v16 = *(_DWORD *)(v10 + 188);
    else
      v16 = v14;
    v29 = v16;
    v34 = (__int64)InputTraceLogging::InteractionInputSink((const struct CInteraction *)v10);
    if ( v10 )
      v19 = *(_DWORD *)(v10 + 1704);
    else
      v19 = v18;
    v30 = v19;
    v35 = (__int64)InputTraceLogging::InteractionDefaultToString(v17);
    v20 = InputTraceLogging::InteractionSourceTypeToString((const struct CInteraction *)v10);
    v23 = *(_DWORD *)v5;
    v36 = (__int64)v20;
    v37 = v10;
    v38 = v10;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        if ( v24 == 1 )
          v25 = "Release";
        else
          v25 = "UNKNOWN";
      }
      else
      {
        v25 = "Drop";
        if ( *((_QWORD *)v5 + 1) != v21 )
          v25 = "Send";
      }
    }
    else
    {
      v25 = "Buffer";
    }
    v39 = (__int64)v25;
    v31 = a4;
    v32 = a3;
    v40 = a2;
    v41 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v22,
      (unsigned __int8 *)dword_18037A37B,
      v21,
      v22,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v32,
      (__int64)&v31,
      (const char **)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (const char **)&v36,
      (const char **)&v35,
      (__int64)&v30,
      (__int64)&v34,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&a5,
      (__int64)&v33);
  }
}

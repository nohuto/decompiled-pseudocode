/*
 * XREFs of ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18019F074
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18003263C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U3@U3@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@4555554554AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801990B4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_1801990B4.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18019AE38 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x18019AE88 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x18019AEC0 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18019AF34 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x18019B01C (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::UpdateCapture(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  char v2; // di
  __int64 v3; // rcx
  __int64 *v4; // rax
  const struct CInteraction *v5; // r8
  BOOL v6; // eax
  const struct CInteraction *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int8 v10; // al
  __int64 v11; // rax
  const struct CInteraction *v12; // r8
  const char *v13; // rax
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r9
  BOOL v18; // [rsp+B0h] [rbp-80h] BYREF
  BOOL v19; // [rsp+B4h] [rbp-7Ch] BYREF
  BOOL v20; // [rsp+B8h] [rbp-78h] BYREF
  int v21; // [rsp+BCh] [rbp-74h] BYREF
  int v22; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-38h] BYREF
  __int64 updated; // [rsp+100h] [rbp-30h] BYREF
  __int64 v31; // [rsp+130h] [rbp+0h] BYREF
  __int64 v32; // [rsp+138h] [rbp+8h] BYREF
  __int64 v33; // [rsp+140h] [rbp+10h] BYREF
  __int64 v34; // [rsp+148h] [rbp+18h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 + 2) + 64LL) + 224LL))(
         *((_QWORD *)a1 + 2) + 64LL,
         *((unsigned int *)a1 + 6),
         0LL);
  v4 = wil::details::static_lazy<InputTraceLogging>::get(
         v3,
         (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v4[1] > 4u && tlgKeywordOn(v4[1], 2048LL) )
  {
    v5 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
    v25 = *((_QWORD *)a1 + 4);
    LODWORD(v33) = *((_DWORD *)a1 + 7);
    LODWORD(v34) = *((_DWORD *)a1 + 6);
    LOBYTE(v31) = v2;
    if ( v5 )
    {
      v23 = *((_QWORD *)v5 + 214);
      v6 = *((_QWORD *)v5 + 35) != 0LL;
    }
    else
    {
      v23 = 0LL;
      v6 = 0;
    }
    v18 = v6;
    v19 = InputTraceLogging::InteractionInputTransparency(v5);
    v20 = InputTraceLogging::InteractionFurtherProcessingForInput(v7);
    if ( v9 )
      v10 = *(_BYTE *)(v9 + 192) & 1;
    else
      v10 = v8;
    v21 = v10;
    if ( v9 )
    {
      LODWORD(v32) = *(_DWORD *)(v9 + 188);
      v11 = *(_QWORD *)(v9 + 104);
      if ( v11 )
        v8 = *(_QWORD *)(v11 + 64);
      v24 = v8;
      LODWORD(v8) = *(_DWORD *)(v9 + 1704);
    }
    else
    {
      LODWORD(v32) = v8;
      v24 = v8;
    }
    v22 = v8;
    v26 = (__int64)InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v9);
    v13 = InputTraceLogging::InteractionSourceTypeToString(v12);
    v14 = *(_DWORD *)a1;
    v27 = (__int64)v13;
    v28 = v15;
    v29 = v15;
    updated = (__int64)InputTraceLogging::MidManipulationUpdateTypeToString(v14);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v17,
      (unsigned __int8 *)dword_180379C3D,
      v16,
      v17,
      (const char **)&updated,
      (__int64)&v29,
      (__int64)&v28,
      (const char **)&v27,
      (const char **)&v26,
      (__int64)&v22,
      (__int64)&v24,
      (__int64)&v32,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v23,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v25,
      (__int64)&v31);
  }
}

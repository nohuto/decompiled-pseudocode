/*
 * XREFs of ?HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInputInfo@@@Z @ 0x1800939D8
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@@Z @ 0x1800958D0 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureTy.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@333AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180091114 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U1@.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x180096D18 (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 */

char __fastcall RawInputProvidersContinuousTracing::HandInputReportProcessed_(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v12; // [rsp+70h] [rbp+17h] BYREF
  int v13; // [rsp+78h] [rbp+1Fh] BYREF
  int v14; // [rsp+7Ch] [rbp+23h] BYREF
  int v15; // [rsp+80h] [rbp+27h] BYREF
  int v16; // [rsp+84h] [rbp+2Bh] BYREF
  __int64 v17; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v18[4]; // [rsp+90h] [rbp+37h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+7Fh] BYREF

  v19 = a1;
  v7 = wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
         a1,
         _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v7 + 8) > 5u )
  {
    LOBYTE(v7) = tlgKeywordOn(*(_QWORD *)(v7 + 8), 2LL);
    if ( (_BYTE)v7 )
    {
      v14 = a3;
      v17 = a4 + 940;
      LODWORD(v20) = *(_DWORD *)(a4 + 968);
      v12 = *(_QWORD *)(a4 + 836);
      LOBYTE(v19) = *(_BYTE *)(a4 + 733);
      v18[0] = *(_QWORD *)(a4 + 848);
      v13 = *(_DWORD *)(a4 + 828);
      v15 = *(_DWORD *)(a4 + 72);
      v16 = a2;
      LOBYTE(v7) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
                     v10,
                     byte_1801CA4D7,
                     v8,
                     v9,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v14,
                     (__int64)&v13,
                     (__int64)v18,
                     (__int64)&v19,
                     (__int64)&v12 + 4,
                     (__int64)&v12,
                     (__int64)&v20,
                     &v17);
    }
  }
  return v7;
}

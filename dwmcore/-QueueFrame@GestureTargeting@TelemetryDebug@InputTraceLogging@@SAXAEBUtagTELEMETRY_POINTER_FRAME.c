/*
 * XREFs of ?QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x18019CCAC
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18019C918 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333333@Z @ 0x180199788 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333333333333333@Z @ 0x180199860 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTe.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x180278ADC (-IsVailContainer@@YA_NXZ.c)
 */

void __fastcall InputTraceLogging::TelemetryDebug::GestureTargeting::QueueFrame(
        const struct tagTELEMETRY_POINTER_FRAME_TIMES *a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v12; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v13; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v14; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v15; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v16; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v17; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v18; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v19; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v20; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v21; // [rsp+100h] [rbp-30h] BYREF
  __int64 v22; // [rsp+108h] [rbp-28h] BYREF
  __int64 v23; // [rsp+110h] [rbp-20h] BYREF
  __int64 v24; // [rsp+118h] [rbp-18h] BYREF
  __int64 v25; // [rsp+138h] [rbp+8h] BYREF
  __int64 v26; // [rsp+140h] [rbp+10h] BYREF
  __int64 v27; // [rsp+148h] [rbp+18h] BYREF

  if ( IsVailContainer() )
  {
    v7 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     v2,
                     (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
    if ( *v7 > 7u && tlgKeywordOn((__int64)v7, 0x10000LL) )
    {
      v25 = *((_QWORD *)a1 + 17);
      v26 = *((_QWORD *)a1 + 15);
      v27 = *((_QWORD *)a1 + 14);
      v15 = *((_QWORD *)a1 + 13);
      v14 = *((_QWORD *)a1 + 12);
      v13 = *((_QWORD *)a1 + 11);
      v12 = *((_QWORD *)a1 + 10);
      v11 = *((_QWORD *)a1 + 9);
      v16 = *((_QWORD *)a1 + 8);
      v17 = *((_QWORD *)a1 + 7);
      v18 = *((_QWORD *)a1 + 6);
      v19 = *((_QWORD *)a1 + 5);
      v20 = *((_QWORD *)a1 + 4);
      v21 = *((_QWORD *)a1 + 3);
      v22 = *((_QWORD *)a1 + 2);
      v23 = *((_QWORD *)a1 + 1);
      v24 = *(_QWORD *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v8,
        byte_180379872,
        v9,
        v10,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v11,
        (__int64)&v12,
        (__int64)&v13,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25);
    }
  }
  else
  {
    v3 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     v2,
                     (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
    if ( *v3 > 7u )
    {
      if ( tlgKeywordOn((__int64)v3, 0x10000LL) )
      {
        v25 = *((_QWORD *)a1 + 7);
        v26 = *((_QWORD *)a1 + 6);
        v27 = *((_QWORD *)a1 + 5);
        v11 = *((_QWORD *)a1 + 4);
        v12 = *((_QWORD *)a1 + 3);
        v13 = *((_QWORD *)a1 + 2);
        v14 = *((_QWORD *)a1 + 1);
        v15 = *(_QWORD *)a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v4,
          byte_180379A42,
          v5,
          v6,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25);
      }
    }
  }
}

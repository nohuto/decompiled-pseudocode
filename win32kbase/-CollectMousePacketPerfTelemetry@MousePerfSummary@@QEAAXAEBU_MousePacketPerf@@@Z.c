/*
 * XREFs of ?CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z @ 0x1C007BAEC
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C007A654 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z @ 0x1C007BBF4 (-CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z.c)
 *     ?SampleRandomPickStart@MousePerfSummary@@AEAAXXZ @ 0x1C007BC20 (-SampleRandomPickStart@MousePerfSummary@@AEAAXXZ.c)
 *     ?UpdatePerfData@MousePerfStage@@QEAAX_K@Z @ 0x1C00F5776 (-UpdatePerfData@MousePerfStage@@QEAAX_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3333333333@Z @ 0x1C0234CE0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlg.c)
 */

void __fastcall MousePerfSummary::CollectMousePacketPerfTelemetry(
        LARGE_INTEGER *this,
        const struct _MousePacketPerf *a2)
{
  unsigned __int64 v4; // rax
  MousePerfSummary *v5; // rcx
  unsigned __int64 v6; // rax
  MousePerfSummary *v7; // rcx
  unsigned __int64 v8; // rax
  MousePerfSummary *v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r10
  int v13; // r9d
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // [rsp+80h] [rbp+7h] BYREF
  __int64 v18; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+90h] [rbp+17h] BYREF
  LARGE_INTEGER v20; // [rsp+98h] [rbp+1Fh] BYREF
  LARGE_INTEGER v21; // [rsp+A0h] [rbp+27h] BYREF
  LARGE_INTEGER v22; // [rsp+A8h] [rbp+2Fh] BYREF
  LARGE_INTEGER v23; // [rsp+B0h] [rbp+37h] BYREF
  _QWORD v24[3]; // [rsp+B8h] [rbp+3Fh] BYREF
  DWORD LowPart; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v26; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v27; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v28; // [rsp+F8h] [rbp+7Fh] BYREF

  this[61].LowPart = *((_DWORD *)a2 + 12);
  this[60].LowPart = *((_DWORD *)a2 + 13);
  v4 = MousePerfSummary::CalculateLatencyInMicroseconds(
         (MousePerfSummary *)this,
         *((_QWORD *)a2 + 4),
         *((_QWORD *)a2 + 5));
  *((_QWORD *)v5 + 53) = v4;
  v6 = MousePerfSummary::CalculateLatencyInMicroseconds(v5, *((_QWORD *)a2 + 2), *((_QWORD *)a2 + 3));
  *((_QWORD *)v7 + 54) = v6;
  v8 = MousePerfSummary::CalculateLatencyInMicroseconds(v7, *(_QWORD *)a2, *((_QWORD *)a2 + 1));
  *((_QWORD *)v9 + 55) = v8;
  v10 = MousePerfSummary::CalculateLatencyInMicroseconds(v9, *(_QWORD *)a2, *((_QWORD *)a2 + 2));
  *(_QWORD *)(v11 + 448) = v10;
  if ( (unsigned int)(v13 - 2) > 1 )
  {
    MousePerfStage::UpdatePerfData((MousePerfStage *)(v11 + 240), v12);
    MousePerfStage::UpdatePerfData((MousePerfStage *)&this[35], this[54].QuadPart);
    MousePerfStage::UpdatePerfData((MousePerfStage *)&this[40], this[55].QuadPart);
    MousePerfStage::UpdatePerfData((MousePerfStage *)&this[45], this[56].QuadPart);
  }
  if ( !this[62].QuadPart )
    this[62] = KeQueryPerformanceCounter(0LL);
  if ( !this[63].QuadPart )
    this[63] = KeQueryPerformanceCounter(0LL);
  if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 16LL) )
  {
    v26 = *((_QWORD *)a2 + 5);
    v27 = *((_QWORD *)a2 + 4);
    v28 = *((_QWORD *)a2 + 3);
    v17 = *((_QWORD *)a2 + 2);
    v18 = *((_QWORD *)a2 + 1);
    v19 = *(_QWORD *)a2;
    v20 = this[56];
    v21 = this[55];
    v22 = this[54];
    v23 = this[53];
    LowPart = this[60].LowPart;
    v24[0] = (int)this[61].LowPart;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v14,
      (unsigned int)&unk_1C029E54B,
      v15,
      v16,
      (__int64)v24,
      (__int64)&LowPart,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26);
  }
  MousePerfSummary::SampleRandomPickStart((MousePerfSummary *)this);
}

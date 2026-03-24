/*
 * XREFs of ?TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@UEAAXI_K@Z @ 0x180019450
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEAAXI_K0@Z @ 0x1800194EC (-Update@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152990 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180153668 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryRecordInputActivity(
        CPartitionVerticalBlankScheduler *this,
        unsigned int a2,
        unsigned __int64 a3,
        int a4)
{
  unsigned __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp-19h] BYREF
  unsigned int *v13; // [rsp+80h] [rbp+7h]
  __int64 v14; // [rsp+88h] [rbp+Fh]
  unsigned __int64 *v15; // [rsp+90h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  _QWORD *v17; // [rsp+A0h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+2Fh]

  if ( (unsigned int)dword_180344E80 > 4 && (qword_180344E90 & 2) != 0 && (qword_180344E98 & 2) == qword_180344E98 )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 629);
    v10 = a3;
    v9 = a2;
    v11[0] = *v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v11[0],
      (unsigned int)&unk_1802E3B9A,
      a3,
      a4,
      (__int64)v11,
      (__int64)&v9,
      (__int64)&v10);
  }
  v7 = **((_QWORD **)this + 629);
  if ( (unsigned int)dword_180344EB8 > 5 && (qword_180344EC8 & 8) != 0 && (qword_180344ED0 & 8) == qword_180344ED0 )
  {
    v11[0] = **((_QWORD **)this + 629);
    v17 = v11;
    v10 = a3;
    v15 = &v10;
    v9 = a2;
    v13 = &v9;
    v18 = 8LL;
    v16 = 8LL;
    v14 = 4LL;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_180344EB8, (int)&dword_1802E474C, 0, 0, 5u, &v12);
  }
  CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::Update(
    (CPartitionVerticalBlankScheduler *)((char *)this + 11080),
    a2,
    a3,
    v7);
}

/*
 * XREFs of ?OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x1C023B870
 * Callers:
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211930 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C023B410 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTempl.c)
 */

__int64 __fastcall PTPEngineTraceProducer::OnEvent(PTPEngineTraceProducer *this, struct PTPEngineEvent *a2)
{
  __int16 v4; // dx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct PTPEngineEvent *v9; // [rsp+40h] [rbp-18h] BYREF
  __int16 v10; // [rsp+48h] [rbp-10h]
  int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 3LL) )
  {
    v9 = a2;
    v10 = v4 + 1;
    v12 = *((_QWORD *)this + 75);
    v11 = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v5,
      byte_1C029E855,
      v6,
      v7,
      (__int64)&v12,
      (__int64)&v11,
      (__int64 *)&v9);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct PTPEngineEvent *))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           a2);
}

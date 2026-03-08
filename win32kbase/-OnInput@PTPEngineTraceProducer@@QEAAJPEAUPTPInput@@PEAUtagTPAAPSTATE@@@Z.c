/*
 * XREFs of ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C00F5C86
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00E0308 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInputOld@CPTPProcessor@@QEAAXPEAX0KHH@Z @ 0x1C00E0830 (-ProcessInputOld@CPTPProcessor@@QEAAXPEAX0KHH@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z @ 0x1C00F5DD0 (-OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C023B410 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTempl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@5@Z @ 0x1C023B4B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U3@@-$_tlgWriteTe.c)
 */

__int64 __fastcall PTPEngineTraceProducer::OnInput(PTPEngineTraceProducer *this, struct PTPInput *a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int16 v6; // dx
  int v7; // ecx
  __int64 v8; // r8
  int v9; // edx
  int v10; // r9d
  __int16 v11; // cx
  int v12; // ecx
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int16 v15; // [rsp+48h] [rbp-18h]
  struct PTPInput *v16; // [rsp+50h] [rbp-10h] BYREF
  __int16 v17; // [rsp+58h] [rbp-8h]
  int v18; // [rsp+70h] [rbp+10h] BYREF
  __int64 v19; // [rsp+78h] [rbp+18h] BYREF

  v3 = dword_1C02C92F8;
  if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 3LL) )
  {
    v14 = a3;
    v8 = -a3;
    v16 = a2;
    v18 = 4;
    v15 = v8 != 0 ? 0x80 : 0;
    v17 = v6 + 53;
    v19 = *((_QWORD *)this + 75);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary>(
      v7,
      (unsigned int)&unk_1C029E7CB,
      v8,
      v3,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v16,
      (__int64)&v14);
    v3 = dword_1C02C92F8;
  }
  if ( *((_DWORD *)a2 + 12) && v3 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 3LL) )
  {
    v11 = *((_WORD *)a2 + 24);
    v16 = (struct PTPInput *)((char *)a2 + 56);
    v18 = v9;
    v19 = *((_QWORD *)this + 75);
    v12 = (unsigned __int16)(96 * v11);
    v17 = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v12,
      (unsigned int)&unk_1C029E74D,
      a3,
      v10,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v16);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct PTPInput *, __int64))(**((_QWORD **)this + 3) + 16LL))(
           *((_QWORD *)this + 3),
           a2,
           a3);
}

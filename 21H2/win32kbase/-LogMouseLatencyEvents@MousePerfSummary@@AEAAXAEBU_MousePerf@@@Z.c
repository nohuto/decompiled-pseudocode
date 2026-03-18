/*
 * XREFs of ?LogMouseLatencyEvents@MousePerfSummary@@AEAAXAEBU_MousePerf@@@Z @ 0x1C0038350
 * Callers:
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0038074 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333@Z @ 0x1C01FE1C8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPro.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333333333333@Z @ 0x1C01FE2B8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTempl.c)
 */

void __fastcall MousePerfSummary::LogMouseLatencyEvents(MousePerfSummary *this, const struct _MousePerf *a2)
{
  int v4; // ecx
  unsigned int v5; // r8d
  int v6; // r9d
  int v7; // r10d
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v18; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v27; // [rsp+100h] [rbp-20h] BYREF
  __int64 v28; // [rsp+108h] [rbp-18h] BYREF
  unsigned __int64 v29; // [rsp+130h] [rbp+10h] BYREF
  __int64 v30; // [rsp+138h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C028D610 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C028D610, 16LL) )
    {
      v29 = *((_QWORD *)a2 + 8);
      v30 = *((_QWORD *)a2 + 7);
      v22 = *((_QWORD *)a2 + 4);
      v23 = *((_QWORD *)a2 + 3);
      v24 = *((_QWORD *)a2 + 2);
      v25 = *((_QWORD *)a2 + 1);
      v26 = *(_QWORD *)a2;
      v27 = *((_QWORD *)a2 + 6);
      v28 = *((_QWORD *)a2 + 5);
      v15 = *((_QWORD *)this + 59);
      v16 = *((_QWORD *)this + 58);
      v17 = *((_QWORD *)this + 57);
      v18 = *((_QWORD *)this + 52);
      v19 = *((_QWORD *)this + 51);
      v20 = *((_QWORD *)this + 50);
      v21 = *((int *)this + 122);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v4,
        (unsigned int)&unk_1C0264389,
        v5,
        v6,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v30,
        (__int64)&v29);
      v5 = dword_1C028D610;
    }
    if ( v5 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
    {
      v7 = *((_DWORD *)this + 122);
      if ( v7 )
      {
        if ( v7 != 1 )
          return;
        if ( *((_QWORD *)a2 + 2) )
          v9 = *((_QWORD *)this + 50) + *((_QWORD *)this + 57);
        else
          v9 = *((_QWORD *)this + 50);
        v8 = v9 + *((_QWORD *)this + 58) + *((_QWORD *)this + 59);
      }
      else
      {
        v8 = *((_QWORD *)this + 50) + *((_QWORD *)this + 51) + *((_QWORD *)this + 52);
      }
      if ( v8 >= 0xC350 )
      {
        if ( (v8 >= 0x3D090
           || (v10 = *((_QWORD *)this + 64)) != 0 && (unsigned __int64)(*((_QWORD *)a2 + 8) - v10) <= 0xF4240)
          && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
        {
          v17 = v13;
          v30 = *((_QWORD *)this + 59);
          v21 = *((_QWORD *)this + 58);
          v20 = *((_QWORD *)this + 57);
          v19 = *((_QWORD *)this + 52);
          v18 = *((_QWORD *)this + 51);
          v29 = v12 / 0x3E8;
          v16 = v14;
          v15 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v11,
            (unsigned int)&unk_1C02641C5,
            v12 / 0x3E8,
            v13,
            (__int64)&v15,
            (__int64)&v16,
            (__int64)&v17,
            (__int64)&v18,
            (__int64)&v19,
            (__int64)&v20,
            (__int64)&v21,
            (__int64)&v30,
            (__int64)&v29);
        }
        *((_QWORD *)this + 64) = *((_QWORD *)a2 + 8);
      }
    }
  }
}

/*
 * XREFs of ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x1C01DDC28
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E0298 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@43@Z @ 0x1C01DD250 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@@-$_tlgWrit.c)
 *     ?PTPDownlevelActionToString@InputTraceLogging@@CAPEBDW4tagPTP_DOWNLEVEL_ACTION@@@Z @ 0x1C01DF104 (-PTPDownlevelActionToString@InputTraceLogging@@CAPEBDW4tagPTP_DOWNLEVEL_ACTION@@@Z.c)
 */

void __fastcall InputTraceLogging::PTP::DownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  int v2; // r11d
  __int64 v4; // r8
  unsigned int v5; // r11d
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r8
  unsigned int v10; // r11d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+68h] [rbp-8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+18h] BYREF
  __int64 v19; // [rsp+98h] [rbp+28h] BYREF

  v2 = *(_DWORD *)a2;
  if ( *(int *)a2 >= 0 )
  {
    if ( v2 <= 1 )
    {
      if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 128LL) )
      {
        LODWORD(v19) = *((_DWORD *)a2 + 1);
        v17 = v9;
        v16 = InputTraceLogging::PTPDownlevelActionToString(v10);
        if ( v13 )
        {
          v12 = *(_QWORD *)(v13 + 216);
          LODWORD(v18) = *(_DWORD *)(v13 + 40);
          v14 = *(_QWORD *)(v13 + 72);
        }
        else
        {
          LODWORD(v18) = v12;
          v14 = v12;
        }
        v15 = v12;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (__int64)&dword_1C028EE70,
          byte_1C026279D,
          v11,
          v12,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v18,
          (void **)&v16,
          (__int64)&v19,
          (__int64)&v17);
      }
    }
    else if ( v2 == 2 && (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 128LL) )
    {
      LODWORD(v19) = *((_DWORD *)a2 + 1);
      v15 = v4;
      v16 = InputTraceLogging::PTPDownlevelActionToString(v5);
      if ( v8 )
      {
        v7 = *(_QWORD *)(v8 + 216);
        LODWORD(v18) = *(_DWORD *)(v8 + 40);
        v14 = *(_QWORD *)(v8 + 72);
      }
      else
      {
        LODWORD(v18) = v7;
        v14 = v7;
      }
      v17 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1C028EE70,
        byte_1C0262803,
        v6,
        v7,
        (__int64)&v17,
        (__int64)&v14,
        (__int64)&v18,
        (void **)&v16,
        (__int64)&v19,
        (__int64)&v15);
    }
  }
}

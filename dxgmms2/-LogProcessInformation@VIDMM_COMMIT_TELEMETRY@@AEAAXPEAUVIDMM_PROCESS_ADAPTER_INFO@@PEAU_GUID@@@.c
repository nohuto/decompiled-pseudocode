/*
 * XREFs of ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00F5250
 * Callers:
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00B534C (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00F4B94 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00F4CC0 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00F510C (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00F546C (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014A7C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@455555AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1C0030400 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U3@U.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C00AD868 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PROCESS_ADAPTER_INFO *a2,
        struct _GUID *a3)
{
  unsigned int i; // esi
  VIDMM_PROCESS_BUDGET_STATE *v7; // r9
  _QWORD *v8; // r9
  bool v9; // zf
  const char *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // [rsp+90h] [rbp-29h] BYREF
  __int64 v18; // [rsp+98h] [rbp-21h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-19h] BYREF
  unsigned __int64 v20; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+Fh] BYREF
  const char *v25; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 ProcessImageFileName; // [rsp+E0h] [rbp+27h] BYREF
  unsigned __int16 *v28; // [rsp+E8h] [rbp+2Fh] BYREF
  BOOL v29; // [rsp+120h] [rbp+67h] BYREF
  __int64 v30; // [rsp+138h] [rbp+7Fh] BYREF

  if ( *((_BYTE *)this + 24) )
  {
    if ( a2 )
    {
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 7016LL); ++i )
      {
        if ( (unsigned int)dword_1C0076048 <= 5 || !tlgKeywordOn((__int64)&dword_1C0076048, 0x10000LL) )
          continue;
        v30 = *((_QWORD *)v7 + 4);
        v17 = *((_QWORD *)v7 + 18);
        v18 = *((_QWORD *)v7 + 10);
        v19 = *((_QWORD *)v7 + 26);
        v29 = *(_QWORD *)v7 != 0LL;
        v20 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v7);
        v21 = v8[3];
        v22 = v8[17];
        v23 = v8[9];
        v9 = *((_BYTE *)this + 24) == 0;
        v24 = v8[25];
        if ( v9 )
        {
          v10 = 0LL;
        }
        else
        {
          v11 = *((_QWORD *)a2 + 5);
          if ( !v11 || (v12 = *(_QWORD *)(v11 + 32)) == 0 )
          {
LABEL_13:
            v10 = "Occluded";
            goto LABEL_14;
          }
          v13 = *(_DWORD *)(v12 + 432);
          if ( (v13 & 1) != 0 )
          {
            v10 = "Focus";
          }
          else
          {
            v9 = (v13 & 2) == 0;
            v10 = "Visible";
            if ( v9 )
              goto LABEL_13;
          }
        }
LABEL_14:
        v25 = v10;
        v14 = (_QWORD *)*((_QWORD *)a2 + 5);
        v26 = *v14;
        ProcessImageFileName = PsGetProcessImageFileName(*v14);
        v15 = *(_QWORD *)(*(_QWORD *)this + 24LL);
        v28 = *(unsigned __int16 **)(v15 + 1744);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v15,
          byte_1C005661E,
          a3,
          v16,
          &v28,
          (void **)&ProcessImageFileName,
          (__int64)&v26,
          (void **)&v25,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v29,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v30);
      }
    }
  }
}

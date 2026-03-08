/*
 * XREFs of ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00F4E6C
 * Callers:
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00F4B94 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00F4CC0 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00F510C (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00F546C (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002338 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x1C0014A7C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0030180 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@55@Z @ 0x1C00305D4 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U3@U3@@.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00AAC58 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogMemoryState(VIDMM_COMMIT_TELEMETRY *this, struct _GUID *a2)
{
  __int64 v4; // r9
  const char *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rdi
  unsigned int i; // r14d
  struct VIDMM_PARTITION *v10; // r9
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // r13
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int16 *v14; // r11
  const char *v15; // rax
  unsigned __int16 *v16; // rbx
  __int64 v17; // r9
  const char *v18; // r10
  __int64 v19; // r11
  const char *v20; // [rsp+50h] [rbp-10h] BYREF
  const char *v21; // [rsp+58h] [rbp-8h] BYREF
  const char *v22; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int16 *v23; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+58h] BYREF

  if ( *((_BYTE *)this + 24) )
  {
    if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x10000LL) )
    {
      v5 = "Discrete";
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40224) + 544LL) & 2) == 0 )
        v5 = "Integrated";
      v22 = v5;
      v23 = *(unsigned __int16 **)(*(_QWORD *)(v4 + 24) + 1744LL);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>>(
        (__int64)v23,
        byte_1C00565D8,
        a2,
        v4,
        &v23,
        (void **)&v22);
    }
    if ( DXGPROCESS::GetCurrent() && (v6 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
      v7 = *(_QWORD *)(v6 + 8);
    else
      v7 = 0LL;
    v8 = *(_QWORD *)this;
    for ( i = 0; i < *(_DWORD *)(v8 + 7016); ++i )
    {
      VIDMM_GLOBAL::GetSegmentGroupState(
        (VIDMM_GLOBAL *)v8,
        i,
        D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL,
        *(struct VIDMM_PARTITION **)(v7 + 288));
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                            (VIDMM_GLOBAL *)v8,
                            i,
                            D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL,
                            v10);
      if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x10000LL) )
      {
        v15 = 0LL;
        v23 = v14;
        v24 = v13;
        if ( v12 > 0 )
          v15 = (const char *)v12;
        v22 = v15;
        v20 = "Local";
        v21 = *(const char **)(*(_QWORD *)(v8 + 24) + 1744LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (__int64)v21,
          byte_1C0056559,
          a2,
          v12,
          (unsigned __int16 **)&v21,
          (void **)&v20,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22);
      }
      v8 = *(_QWORD *)this;
      if ( (*(_BYTE *)(1616LL * i + *(_QWORD *)(*(_QWORD *)this + 40224LL) + 544) & 2) != 0 )
      {
        v16 = (unsigned __int16 *)*((_QWORD *)SegmentGroupState + 15);
        v17 = *(_QWORD *)this;
        if ( (unsigned int)dword_1C0076048 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0076048, 0x10000LL) )
          {
            v22 = v18;
            v21 = "NonLocal";
            v23 = v16;
            v24 = v19;
            v20 = *(const char **)(*(_QWORD *)(v8 + 24) + 1744LL);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              (__int64)v20,
              byte_1C0056559,
              a2,
              v17,
              (unsigned __int16 **)&v20,
              (void **)&v21,
              (__int64)&v24,
              (__int64)&v23,
              (__int64)&v22);
            v17 = *(_QWORD *)this;
          }
        }
        v8 = v17;
      }
    }
  }
}

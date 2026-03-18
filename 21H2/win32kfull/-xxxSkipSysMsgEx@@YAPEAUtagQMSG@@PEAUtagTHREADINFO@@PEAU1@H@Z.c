/*
 * XREFs of ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00AB408
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C004DAB0 (PhkFirstGlobalValid.c)
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C00AB660 (-EqualMsg@@YAHPEAUtagQMSG@@0@Z.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00AC168 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1C00AC3A0 (IsPointerInputMessage.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD @ 0x1C016B302 (WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01DB344 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     xxxCallJournalRecordHook @ 0x1C01E1344 (xxxCallJournalRecordHook.c)
 */

struct tagQMSG *__fastcall xxxSkipSysMsgEx(struct tagTHREADINFO *a1, struct tagQMSG *a2, int a3)
{
  int v3; // r14d
  struct tagQMSG *v4; // rbp
  unsigned __int64 i; // rbx
  char v7; // di
  unsigned int v8; // ecx
  int v9; // r9d
  __int64 GlobalValid; // rax
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r8
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // r10
  _UNKNOWN **v19; // r9
  int v20; // r8d
  const unsigned int *v21; // r8
  const unsigned int *v22; // r8
  int v23; // [rsp+20h] [rbp-D8h]
  int v24; // [rsp+28h] [rbp-D0h]
  int v25; // [rsp+30h] [rbp-C8h]
  int v26; // [rsp+38h] [rbp-C0h]
  __int64 v27; // [rsp+48h] [rbp-B0h]
  _QWORD v28[9]; // [rsp+B0h] [rbp-48h] BYREF
  int v29; // [rsp+100h] [rbp+8h] BYREF
  __int64 v30; // [rsp+118h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  i = 0LL;
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 54) + 80LL) )
    return 0LL;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      5,
      18,
      21,
      (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
      *((_DWORD *)v4 + 6));
  if ( ((unsigned int)IsPointerInputMessage(*((unsigned int *)v4 + 6))
     || InputTraceLogging::IsMouseInputMessage(v8)
     || (unsigned int)(v9 - 256) <= 9
     || v9 == 255)
    && (unsigned int)dword_1C032BE20 > 5
    && (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 16LL) )
  {
    v28[0] = *((_QWORD *)v4 + 17);
    v30 = v18;
    v29 = v17;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C032BE20,
      (unsigned int)&unk_1C02EEAAB,
      v16,
      v17,
      (__int64)v28,
      (__int64)&v29,
      (__int64)&v30);
  }
  GlobalValid = PhkFirstGlobalValid((__int64)a1, 1);
  if ( !GlobalValid || *((_QWORD *)a1 + 57) != grpdeskRitInput )
  {
    if ( PhkFirstGlobalValid((__int64)a1, 0) )
      xxxCallJournalRecordHook(v4);
    v11 = *((_QWORD *)a1 + 54);
    i = *(_QWORD *)(v11 + 80);
    if ( i )
    {
      if ( i != 1 )
      {
        if ( !(unsigned int)EqualMsg(*(struct tagQMSG **)(v11 + 80), v4) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
            || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v12) = 0;
          }
          v19 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD(
              WPP_GLOBAL_Control->AttachedDevice,
              v12,
              v13,
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              v23,
              v24,
              v25,
              v26,
              (char)v4,
              *((_QWORD *)v4 + 13),
              *((_DWORD *)v4 + 6),
              *((_QWORD *)v4 + 2),
              *((_QWORD *)v4 + 4),
              *((_QWORD *)v4 + 5),
              *((_DWORD *)v4 + 12),
              i,
              *(_QWORD *)(i + 104),
              *(_DWORD *)(i + 24),
              *(_QWORD *)(i + 16),
              *(_QWORD *)(i + 32),
              *(_QWORD *)(i + 40),
              *(_DWORD *)(i + 48));
            v19 = &WPP_RECORDER_INITIALIZED;
          }
          for ( i = *(_QWORD *)(*((_QWORD *)a1 + 54) + 24LL); ; i = *(_QWORD *)i )
          {
            if ( !i )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
                || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
              {
                LOBYTE(v12) = 0;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)v19 || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
                v7 = 0;
              if ( (_BYTE)v12 || v7 )
              {
                v21 = &WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids;
                LOBYTE(v21) = v7;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v12,
                  (_DWORD)v21,
                  (_DWORD)v19,
                  5,
                  18,
                  24,
                  (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids);
              }
              return 0LL;
            }
            if ( (unsigned int)EqualMsg((struct tagQMSG *)i, v4) )
              break;
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
            || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v12) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)v19 || (LOBYTE(v20) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
            LOBYTE(v20) = 0;
          if ( (_BYTE)v12 || (_BYTE)v20 )
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v12,
              v20,
              (unsigned int)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
              5,
              18,
              23,
              (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
              i);
        }
        v14 = *((_QWORD *)a1 + 54);
        if ( i == *(_QWORD *)(v14 + 80) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
            || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v12) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v7 = 0;
          }
          if ( (_BYTE)v12 || v7 )
          {
            v27 = *(_QWORD *)(v14 + 80);
            v22 = &WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids;
            LOBYTE(v22) = v7;
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              v12,
              (_DWORD)v22,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              5,
              18,
              25,
              (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
              *((_QWORD *)a1 + 54),
              v27);
          }
          *(_QWORD *)(*((_QWORD *)a1 + 54) + 80LL) = 0LL;
        }
        DelQEntry(*((_QWORD *)a1 + 54) + 24LL, i, v3);
        if ( v3 )
        {
          i = 0LL;
        }
        else
        {
          *(_QWORD *)(i + 8) = 0LL;
          *(_QWORD *)i = 0LL;
        }
        EtwTraceInputProcessDelay(a1);
        *(_DWORD *)(*((_QWORD *)a1 + 54) + 408LL) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      }
      goto LABEL_32;
    }
    return 0LL;
  }
  *(_DWORD *)(GlobalValid + 64) |= 4u;
LABEL_32:
  if ( (*((_DWORD *)v4 + 25) & 0x40000) == 0 )
  {
    UpdateKeyStateForMessage(a1, v4);
    if ( i >= 2 )
      *(_DWORD *)(i + 100) |= 0x40000u;
  }
  return (struct tagQMSG *)i;
}

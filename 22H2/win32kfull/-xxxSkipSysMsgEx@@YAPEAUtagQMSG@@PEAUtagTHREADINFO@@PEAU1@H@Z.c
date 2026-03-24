/*
 * XREFs of ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0066248
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C1DC0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004F2B4 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F390 (WPP_RECORDER_SF_q.c)
 *     PhkFirstGlobalValid @ 0x1C006668C (PhkFirstGlobalValid.c)
 *     DelQEntry @ 0x1C00667AC (DelQEntry.c)
 *     ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C00668AC (-EqualMsg@@YAHPEAUtagQMSG@@0@Z.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C006A26C (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1C006B2D4 (IsPointerInputMessage.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C14A0 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C01D95D0 (WPP_RECORDER_SF_D.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01DF510 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     WPP_RECORDER_SF_qqDqqqDqqDqqqD @ 0x1C01E1F7C (WPP_RECORDER_SF_qqDqqqDqqDqqqD.c)
 *     xxxCallJournalRecordHook @ 0x1C01E68A4 (xxxCallJournalRecordHook.c)
 */

struct tagQMSG *__fastcall xxxSkipSysMsgEx(struct tagTHREADINFO *a1, struct tagQMSG *a2, unsigned int a3)
{
  unsigned __int64 i; // rbx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 GlobalValid; // rax
  __int64 v14; // r8
  int v15; // edx
  int v16; // ecx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-C8h]
  __int64 v23; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-40h] BYREF
  int v25; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+108h] [rbp+20h] BYREF

  i = 0LL;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v24, *((_QWORD *)a1 + 54));
  v8 = *((_QWORD *)a1 + 54);
  if ( !*(_QWORD *)(v8 + 80) )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_D(v7, v8, 18, 21, (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids, *((_DWORD *)a2 + 6));
  }
  if ( ((unsigned int)IsPointerInputMessage(*((unsigned int *)a2 + 6))
     || InputTraceLogging::IsMouseInputMessage(v10)
     || (unsigned int)(v11 - 256) <= 9
     || v11 == 255)
    && (unsigned int)dword_1C032FB20 > 5
    && (qword_1C032FB30 & 0x10) != 0
    && (qword_1C032FB38 & 0x10) == qword_1C032FB38 )
  {
    v23 = *((_QWORD *)a2 + 17);
    v26 = v9;
    v25 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C032FB20,
      (unsigned int)&unk_1C02F0E03,
      v11,
      v12,
      (__int64)&v23,
      (__int64)&v25,
      (__int64)&v26);
  }
  GlobalValid = PhkFirstGlobalValid(a1, 1LL);
  if ( !GlobalValid || *((_QWORD *)a1 + 57) != grpdeskRitInput )
  {
    if ( PhkFirstGlobalValid(a1, 0LL) )
      xxxCallJournalRecordHook(a2);
    v14 = *((_QWORD *)a1 + 54);
    i = *(_QWORD *)(v14 + 80);
    if ( i )
    {
      if ( i != 1 )
      {
        if ( !(unsigned int)EqualMsg(*(struct tagQMSG **)(v14 + 80), a2) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_qqDqqqDqqDqqqD(
              v16,
              v15,
              v17,
              v18,
              v22,
              (char)a2,
              *((_QWORD *)a2 + 13),
              *((_DWORD *)a2 + 6),
              *((_QWORD *)a2 + 2),
              *((_QWORD *)a2 + 4),
              *((_QWORD *)a2 + 5),
              *((_DWORD *)a2 + 12),
              i,
              *(_QWORD *)(i + 104),
              *(_DWORD *)(i + 24),
              *(_QWORD *)(i + 16),
              *(_QWORD *)(i + 32),
              *(_QWORD *)(i + 40),
              *(_DWORD *)(i + 48));
            v17 = *((_QWORD *)a1 + 54);
          }
          for ( i = *(_QWORD *)(v17 + 24); ; i = *(_QWORD *)i )
          {
            if ( !i )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v15) = 5;
                WPP_RECORDER_SF_(v16, v15, 18, 24, (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids);
              }
              return 0LL;
            }
            if ( (unsigned int)EqualMsg((struct tagQMSG *)i, a2) )
              break;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v15) = 5;
            WPP_RECORDER_SF_q(v16, v15, 18, 23, (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids, i);
          }
        }
        v20 = *((_QWORD *)a1 + 54);
        if ( i == *(_QWORD *)(v20 + 80) )
        {
          v21 = *((_QWORD *)a1 + 54);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_qq(
              v20,
              5u,
              0x12u,
              0x19u,
              (__int64)&WPP_aa0cdaa0f1c33ddef9256642731d7c5d_Traceguids,
              v20,
              *(_QWORD *)(v20 + 80));
            v21 = *((_QWORD *)a1 + 54);
          }
          *(_QWORD *)(v21 + 80) = 0LL;
          v20 = *((_QWORD *)a1 + 54);
        }
        DelQEntry(v20 + 24, i, a3);
        if ( a3 )
        {
          i = 0LL;
        }
        else
        {
          *(_QWORD *)(i + 8) = 0LL;
          *(_QWORD *)i = 0LL;
        }
        EtwTraceInputProcessDelay(a1);
        *(_DWORD *)(*((_QWORD *)a1 + 54) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      }
      goto LABEL_46;
    }
    return 0LL;
  }
  *(_DWORD *)(GlobalValid + 64) |= 4u;
LABEL_46:
  if ( (*((_DWORD *)a2 + 25) & 0x200000) == 0 )
  {
    UpdateKeyStateForMessage(a1, a2);
    if ( i >= 2 )
      *(_DWORD *)(i + 100) |= 0x200000u;
  }
  return (struct tagQMSG *)i;
}

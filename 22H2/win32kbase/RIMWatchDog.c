/*
 * XREFs of RIMWatchDog @ 0x1C0048040
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013AA80 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01504B8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z @ 0x1C0151F24 (-WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z.c)
 *     RIMArmWatchDog @ 0x1C0151F88 (RIMArmWatchDog.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C01522D0 (WPP_RECORDER_SF_qqqD.c)
 *     WPP_RECORDER_SF_qqqDqSq @ 0x1C01523EC (WPP_RECORDER_SF_qqqDqSq.c)
 */

void RIMWatchDog()
{
  struct _LIST_ENTRY *Flink; // rsi
  int v1; // r14d
  struct _LIST_ENTRY *v2; // rbx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  unsigned __int64 v6; // r9
  __int64 v7; // r8
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  struct _LIST_ENTRY *i; // rdi
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // [rsp+20h] [rbp-49h]
  struct _LIST_ENTRY *v25; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-1h] BYREF
  struct _LIST_ENTRY *v27; // [rsp+70h] [rbp+7h] BYREF
  struct _LIST_ENTRY *v28; // [rsp+78h] [rbp+Fh] BYREF
  struct _LIST_ENTRY *v29; // [rsp+80h] [rbp+17h] BYREF
  __int64 v30[7]; // [rsp+88h] [rbp+1Fh] BYREF
  int Flink_high; // [rsp+D0h] [rbp+67h] BYREF
  int v32; // [rsp+D8h] [rbp+6Fh] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+E0h] [rbp+77h] BYREF
  struct _LIST_ENTRY *v34; // [rsp+E8h] [rbp+7Fh] BYREF

  RIMLockExclusive((__int64)&gObListLock);
  RIMLockExclusive((__int64)&gWatchDogQPCLock);
  Flink = gObRimList.Flink;
  v1 = 0;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_42;
  do
  {
    v2 = Flink - 1;
    if ( LODWORD(Flink[44].Flink) )
    {
      if ( v2[45].Blink
        && !BYTE1(v2[5].Flink)
        && !LOBYTE(v2[5].Flink)
        && (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)v2[45].Blink) > v2[46].Flink )
      {
        if ( !PsGetProcessDebugPort(v2[2].Flink) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqqD(
              v4,
              v3,
              v5,
              15,
              (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids,
              (char)v2[4].Blink,
              (char)v2[2].Flink,
              (char)v2[2].Blink,
              HIDWORD(v2[5].Flink));
          DbgPrintGDI(
            "WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed PNP actions\n",
            v2[4].Blink,
            v2[2].Flink,
            v2[2].Blink,
            HIDWORD(v2[5].Flink));
          if ( (unsigned int)dword_1C0249170 > 5
            && (unsigned __int8)tlgKeywordOn(&dword_1C0249170, 0x400000000000LL, v7, v6) )
          {
            Flink_high = HIDWORD(v2[5].Flink);
            Blink = v2[2].Blink;
            v34 = v2[2].Flink;
            v25 = v2[4].Blink;
            v26 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              v8,
              (unsigned int)&unk_1C0219D6D,
              v9,
              v6,
              (__int64)&v26,
              (__int64)&v25,
              (__int64)&v34,
              (__int64)&Blink,
              (__int64)&Flink_high);
          }
        }
        if ( gbBugCheckOnPnpThreadDelay == 1 )
          WatchDogBugCheckMachine(
            (struct RawInputManagerObject *)&Flink[-1],
            0x111uLL,
            (unsigned __int64)&Flink[-1],
            v6,
            v24);
      }
      if ( !v2[44].Blink || BYTE1(v2[5].Flink) || LOBYTE(v2[5].Flink) || LOBYTE(v2[36].Blink) )
      {
        LODWORD(v2[45].Flink) = 0;
      }
      else
      {
        v1 = 1;
        if ( (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)v2[44].Blink) > v2[44].Flink )
        {
          LODWORD(v2[45].Flink) = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqqD(
              v11,
              v10,
              v12,
              16,
              (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids,
              (char)v2[4].Blink,
              (char)v2[2].Flink,
              (char)v2[2].Blink,
              HIDWORD(v2[5].Flink));
          DbgPrintGDI(
            "WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed read\n",
            v2[4].Blink,
            v2[2].Flink,
            v2[2].Blink,
            HIDWORD(v2[5].Flink));
          if ( (unsigned int)dword_1C0249170 > 5
            && (unsigned __int8)tlgKeywordOn(&dword_1C0249170, 0x400000000000LL, v13, v14) )
          {
            v32 = HIDWORD(v2[5].Flink);
            v27 = v2[2].Blink;
            v28 = v2[2].Flink;
            v29 = v2[4].Blink;
            v30[0] = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              v15,
              (unsigned int)&unk_1C0219D25,
              v16,
              v17,
              (__int64)v30,
              (__int64)&v29,
              (__int64)&v28,
              (__int64)&v27,
              (__int64)&v32);
          }
        }
      }
      for ( i = v2[26].Blink; i; i = i[2].Blink )
      {
        if ( LODWORD(i[23].Flink) )
        {
          if ( (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)i[22].Blink) <= v2[46].Flink )
          {
            v1 = 1;
            LODWORD(v2[45].Flink) = 1;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qqqDqSq(
                v20,
                v19,
                v21,
                v22,
                v24,
                (char)v2[4].Blink,
                (char)v2[2].Flink,
                (char)v2[2].Blink,
                HIDWORD(v2[5].Flink),
                (char)i,
                (__int64)i[13].Blink,
                (char)i[19].Blink);
            LODWORD(v24) = HIDWORD(v2[5].Flink);
            DbgPrintGDI(
              "WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x device (%p, %ws) delayed PNP thread (%p)\n",
              v2[4].Blink,
              v2[2].Flink,
              v2[2].Blink,
              v24,
              i,
              i[13].Blink,
              i[19].Blink);
            if ( gbBugCheckOnPnpThreadDelay == 1 )
              WatchDogBugCheckMachine(
                (struct RawInputManagerObject *)&Flink[-1],
                0x100uLL,
                (unsigned __int64)&i[13],
                v23,
                v24);
          }
        }
      }
    }
    Flink = Flink->Flink;
  }
  while ( Flink != &gObRimList );
  if ( v1 )
  {
    RIMArmWatchDog();
  }
  else
  {
LABEL_42:
    if ( gWatchDogTimer && gbWatchDogTimerArmed )
    {
      gbWatchDogTimerArmed = 0;
      KeCancelTimer(gWatchDogTimer);
    }
  }
  qword_1C02544C8 = 0LL;
  ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C0254458 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}

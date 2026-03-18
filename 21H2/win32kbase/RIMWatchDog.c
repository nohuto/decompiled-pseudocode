/*
 * XREFs of RIMWatchDog @ 0x1C0043C80
 * Callers:
 *     <none>
 * Callees:
 *     RIMArmWatchDog @ 0x1C00040B0 (RIMArmWatchDog.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0167EA0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C017D600 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z @ 0x1C017F104 (-WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqD @ 0x1C017F450 (WPP_RECORDER_AND_TRACE_SF_qqqD.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDqSq @ 0x1C017F56C (WPP_RECORDER_AND_TRACE_SF_qqqDqSq.c)
 */

void RIMWatchDog()
{
  struct _LIST_ENTRY *Flink; // rsi
  int v1; // r14d
  struct _LIST_ENTRY *v2; // rbx
  struct _LIST_ENTRY *v3; // rdi
  int v4; // edx
  int v5; // r8d
  unsigned __int64 v6; // r9
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // [rsp+20h] [rbp-79h]
  int v19; // [rsp+28h] [rbp-71h]
  struct _LIST_ENTRY *v20; // [rsp+30h] [rbp-69h]
  struct _LIST_ENTRY *v21; // [rsp+38h] [rbp-61h]
  struct _LIST_ENTRY *v22; // [rsp+80h] [rbp-19h] BYREF
  struct _LIST_ENTRY *v23; // [rsp+88h] [rbp-11h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp-9h] BYREF
  struct _LIST_ENTRY *v25; // [rsp+98h] [rbp-1h] BYREF
  struct _LIST_ENTRY *v26; // [rsp+A0h] [rbp+7h] BYREF
  struct _LIST_ENTRY *v27; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v28[8]; // [rsp+B0h] [rbp+17h] BYREF
  int Flink_high; // [rsp+100h] [rbp+67h] BYREF
  int v30; // [rsp+108h] [rbp+6Fh] BYREF
  struct _LIST_ENTRY *v31; // [rsp+110h] [rbp+77h]
  struct _LIST_ENTRY *Blink; // [rsp+118h] [rbp+7Fh] BYREF

  RIMLockExclusive((__int64)&gObListLock);
  RIMLockExclusive((__int64)&gWatchDogQPCLock);
  Flink = gObRimList.Flink;
  v31 = gObRimList.Flink;
  v1 = 0;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_57;
  do
  {
    v2 = Flink - 1;
    if ( LODWORD(Flink[58].Flink) )
    {
      if ( v2[59].Blink
        && !BYTE1(v2[5].Flink)
        && !LOBYTE(v2[5].Flink)
        && (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)v2[59].Blink) > v2[60].Flink )
      {
        if ( !PsGetProcessDebugPort(v2[2].Flink) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v4) = 0;
          }
          if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = (struct _LIST_ENTRY *)&WPP_3978f76f04ea382a78ff91c50763c259_Traceguids;
            LOWORD(v20) = 15;
            LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqqD(WPP_GLOBAL_Control->AttachedDevice, v4, v5, 15, v18);
          }
          DbgPrintGDI(
            "WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed PNP actions\n",
            v2[4].Blink,
            v2[2].Flink,
            v2[2].Blink,
            HIDWORD(v2[5].Flink));
          if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
          {
            Flink_high = HIDWORD(v2[5].Flink);
            Blink = v2[2].Blink;
            v22 = v2[2].Flink;
            v23 = v2[4].Blink;
            v24 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              v7,
              (unsigned int)&unk_1C025CB48,
              v8,
              v6,
              (__int64)&v24,
              (__int64)&v23,
              (__int64)&v22,
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
            v18);
      }
      if ( !v2[58].Blink || BYTE1(v2[5].Flink) || LOBYTE(v2[5].Flink) || LOBYTE(v2[50].Blink) )
      {
        LODWORD(v2[59].Flink) = 0;
      }
      else
      {
        v1 = 1;
        if ( (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)v2[58].Blink) > v2[58].Flink )
        {
          LODWORD(v2[59].Flink) = 0;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v9) = 0;
          }
          if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = (struct _LIST_ENTRY *)&WPP_3978f76f04ea382a78ff91c50763c259_Traceguids;
            LOWORD(v20) = 16;
            LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqqD(WPP_GLOBAL_Control->AttachedDevice, v9, v10, 16, v18);
          }
          DbgPrintGDI(
            "WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed read\n",
            v2[4].Blink,
            v2[2].Flink,
            v2[2].Blink,
            HIDWORD(v2[5].Flink));
          if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
          {
            v30 = HIDWORD(v2[5].Flink);
            v25 = v2[2].Blink;
            v26 = v2[2].Flink;
            v27 = v2[4].Blink;
            v28[0] = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              v11,
              (unsigned int)&unk_1C025CB00,
              v12,
              v13,
              (__int64)v28,
              (__int64)&v27,
              (__int64)&v26,
              (__int64)&v25,
              (__int64)&v30);
          }
        }
      }
      v3 = v2[26].Blink;
      if ( v3 )
      {
        do
        {
          if ( LODWORD(v3[23].Flink) )
          {
            if ( (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)v3[22].Blink) <= v2[60].Flink )
            {
              v1 = 1;
              LODWORD(v2[59].Flink) = 1;
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v14) = 0;
              }
              if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqqDqSq(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v14,
                  v15,
                  v16,
                  v18,
                  v19,
                  (_DWORD)v20,
                  (_DWORD)v21,
                  (char)v2[4].Blink,
                  (char)v2[2].Flink,
                  (char)v2[2].Blink,
                  HIDWORD(v2[5].Flink),
                  (char)v3,
                  (__int64)v3[13].Blink,
                  (char)v3[19].Blink);
              }
              v21 = v3[19].Blink;
              v20 = v3[13].Blink;
              v19 = (int)v3;
              LODWORD(v18) = HIDWORD(v2[5].Flink);
              DbgPrintGDI(
                "WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x device (%p, %ws) delayed PNP thread (%p)\n",
                v2[4].Blink,
                v2[2].Flink,
                v2[2].Blink,
                v18);
              if ( gbBugCheckOnPnpThreadDelay == 1 )
                WatchDogBugCheckMachine(
                  (struct RawInputManagerObject *)v2,
                  0x100uLL,
                  (unsigned __int64)&v3[13],
                  v17,
                  v18);
            }
          }
          v3 = v3[2].Blink;
        }
        while ( v3 );
        Flink = v31;
      }
    }
    Flink = Flink->Flink;
    v31 = Flink;
  }
  while ( Flink != &gObRimList );
  if ( v1 )
  {
    RIMArmWatchDog();
  }
  else
  {
LABEL_57:
    if ( gWatchDogTimer && gbWatchDogTimerArmed )
    {
      gbWatchDogTimerArmed = 0;
      KeCancelTimer(gWatchDogTimer);
    }
  }
  qword_1C029A188 = 0LL;
  ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}

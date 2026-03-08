/*
 * XREFs of RIMWatchDog @ 0x1C0039810
 * Callers:
 *     <none>
 * Callees:
 *     RIMArmWatchDog @ 0x1C000415C (RIMArmWatchDog.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C017D810 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C019EF50 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z @ 0x1C01A098C (-WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqD @ 0x1C01A0D88 (WPP_RECORDER_AND_TRACE_SF_qqqD.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDqSq @ 0x1C01A0EA4 (WPP_RECORDER_AND_TRACE_SF_qqqDqSq.c)
 */

void __fastcall RIMWatchDog(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD **v17; // rsi
  __int64 v18; // r8
  unsigned __int64 v19; // r9
  _QWORD *v20; // r14
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  unsigned __int64 v46; // [rsp+20h] [rbp-59h]
  int v47; // [rsp+28h] [rbp-51h]
  __int64 v48; // [rsp+30h] [rbp-49h]
  void *v49; // [rsp+38h] [rbp-41h]
  __int64 v50; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int64 v51; // [rsp+88h] [rbp+Fh] BYREF
  _QWORD **v52; // [rsp+90h] [rbp+17h]
  int v53; // [rsp+E0h] [rbp+67h] BYREF
  _QWORD *v54; // [rsp+E8h] [rbp+6Fh]
  __int64 v55; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v56; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v4 + 240);
  v9 = SGDGetUserSessionState(v6, v5, v7, v8);
  RIMLockExclusive(v9 + 272);
  v14 = 0;
  v17 = (_QWORD **)(SGDGetUserSessionState(v11, v10, v12, v13) + 304);
  v20 = *v17;
  v52 = v17;
  v54 = v20;
  if ( v20 == v17 )
    goto LABEL_61;
  do
  {
    v21 = v20 - 2;
    if ( *((_DWORD *)v20 + 224) )
    {
      if ( v21[115]
        && !*((_BYTE *)v21 + 81)
        && !*((_BYTE *)v21 + 80)
        && (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v21[115]) > v21[116] )
      {
        if ( !PsGetProcessDebugPort(v21[4]) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v33) = 0;
          }
          if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v49 = &WPP_ac32a586e8cb36254fb1fb045aefff6a_Traceguids;
            LOWORD(v48) = 15;
            LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqqD(WPP_GLOBAL_Control->AttachedDevice, v33, v35, 15, v46);
          }
          DbgPrintGDI(
            "WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed PNP actions\n",
            (const void *)v21[9],
            (const void *)v21[4],
            (const void *)v21[5],
            *((_DWORD *)v21 + 21));
          if ( (unsigned int)dword_1C02C92F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C92F8, 0x400000000000LL) )
          {
            v53 = *((_DWORD *)v21 + 21);
            v55 = v21[5];
            v56 = v21[4];
            v50 = v21[9];
            v51 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              v34,
              (unsigned int)&unk_1C0295FE7,
              v35,
              v36,
              (__int64)&v51,
              (__int64)&v50,
              (__int64)&v56,
              (__int64)&v55,
              (__int64)&v53);
          }
        }
        if ( *(_BYTE *)(SGDGetUserSessionState(v34, v33, v35, v36) + 357) == 1 )
          WatchDogBugCheckMachine(
            (struct RawInputManagerObject *)(v20 - 2),
            0x111uLL,
            (unsigned __int64)(v20 - 2),
            v19,
            v46);
      }
      if ( !v21[113] || *((_BYTE *)v21 + 81) || *((_BYTE *)v21 + 80) || *((_BYTE *)v21 + 776) )
      {
        *((_DWORD *)v21 + 228) = 0;
      }
      else
      {
        v14 = 1;
        if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v21[113]) > v21[112] )
        {
          *((_DWORD *)v21 + 228) = 0;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v15) = 0;
          }
          if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v49 = &WPP_ac32a586e8cb36254fb1fb045aefff6a_Traceguids;
            LOWORD(v48) = 16;
            LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqqD(WPP_GLOBAL_Control->AttachedDevice, v15, v18, 16, v46);
          }
          DbgPrintGDI(
            "WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed read\n",
            (const void *)v21[9],
            (const void *)v21[4],
            (const void *)v21[5],
            *((_DWORD *)v21 + 21));
          if ( (unsigned int)dword_1C02C92F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C92F8, 0x400000000000LL) )
          {
            v53 = *((_DWORD *)v21 + 21);
            v55 = v21[5];
            v56 = v21[4];
            v51 = v21[9];
            v50 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              v16,
              (unsigned int)&unk_1C0296032,
              v18,
              v19,
              (__int64)&v50,
              (__int64)&v51,
              (__int64)&v56,
              (__int64)&v55,
              (__int64)&v53);
          }
        }
      }
      v32 = v21[53];
      if ( v32 )
      {
        do
        {
          if ( *(_DWORD *)(v32 + 368) )
          {
            if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v32 + 360)) <= v21[116] )
            {
              v14 = 1;
              *((_DWORD *)v21 + 228) = 1;
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v15) = 0;
              }
              if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqqDqSq(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v15,
                  v18,
                  v19,
                  v46,
                  v47,
                  v48,
                  (_DWORD)v49,
                  v21[9],
                  v21[4],
                  v21[5],
                  *((_DWORD *)v21 + 21),
                  v32,
                  *(_QWORD *)(v32 + 216),
                  *(_QWORD *)(v32 + 312));
              }
              v49 = *(void **)(v32 + 312);
              v48 = *(_QWORD *)(v32 + 216);
              v47 = v32;
              LODWORD(v46) = *((_DWORD *)v21 + 21);
              DbgPrintGDI(
                "WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x device (%p, %ws) delayed PNP thread (%p)\n",
                v21[9],
                v21[4],
                v21[5],
                v46);
              if ( *(_BYTE *)(SGDGetUserSessionState(v38, v37, v39, v40) + 357) == 1 )
                WatchDogBugCheckMachine((struct RawInputManagerObject *)v21, 0x100uLL, v32 + 208, v19, v46);
            }
          }
          v32 = *(_QWORD *)(v32 + 40);
        }
        while ( v32 );
        v17 = v52;
        v20 = v54;
      }
    }
    v20 = (_QWORD *)*v20;
    v54 = v20;
  }
  while ( v20 != v17 );
  if ( v14 )
  {
    RIMArmWatchDog(v16, v15, v18, v19);
  }
  else
  {
LABEL_61:
    if ( *(_QWORD *)(SGDGetUserSessionState(v16, v15, v18, v19) + 360)
      && *(_BYTE *)(SGDGetUserSessionState(v23, v22, v24, v25) + 354) )
    {
      *(_BYTE *)(SGDGetUserSessionState(v23, v22, v24, v25) + 354) = 0;
      v45 = SGDGetUserSessionState(v42, v41, v43, v44);
      KeCancelTimer(*(PKTIMER *)(v45 + 360));
    }
  }
  v26 = SGDGetUserSessionState(v23, v22, v24, v25);
  *(_QWORD *)(v26 + 280) = 0LL;
  ExReleasePushLockExclusiveEx(v26 + 272, 0LL);
  KeLeaveCriticalRegion();
  v31 = SGDGetUserSessionState(v28, v27, v29, v30);
  *(_QWORD *)(v31 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v31 + 240, 0LL);
  KeLeaveCriticalRegion();
}

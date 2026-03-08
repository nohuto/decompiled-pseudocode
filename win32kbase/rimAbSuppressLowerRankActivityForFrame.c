/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x1C01A93A0
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01AA284 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMGetPointerInputType @ 0x1C00EFC04 (RIMGetPointerInputType.c)
 *     RIMCmActiveContactsEnd @ 0x1C00F1A04 (RIMCmActiveContactsEnd.c)
 *     RIMCmGetButtonContact @ 0x1C00F1A60 (RIMCmGetButtonContact.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01A8B98 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C01A91C8 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C01AB010 (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01CD2D0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01CD424 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01CDC44 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01D4EA0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01D5098 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01DE028 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01DE0AC (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01DE1B0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01DEB08 (RIMCmIsContactDeliveringAnyData.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityForFrame(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  int v4; // r14d
  unsigned int v6; // esi
  LARGE_INTEGER PerformanceCounter; // r13
  __int64 v8; // rdx
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 active; // rax
  __int64 v15; // xmm1_8
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // edx
  int v23; // r8d
  __int64 ButtonContact; // rbx
  __int64 v25; // rcx
  int v26; // edx
  int v27; // r8d
  int v28; // edx
  int v29; // r8d
  int v30; // edx
  int v31; // r8d
  int v33; // [rsp+28h] [rbp-51h]
  __int64 v34; // [rsp+60h] [rbp-19h]
  __int128 v35; // [rsp+68h] [rbp-11h] BYREF
  __int64 v36; // [rsp+78h] [rbp-1h]
  __int64 v37; // [rsp+80h] [rbp+7h] BYREF
  int v38; // [rsp+88h] [rbp+Fh]
  __int64 v39; // [rsp+90h] [rbp+17h]
  unsigned int v40; // [rsp+E8h] [rbp+6Fh]

  v4 = 0;
  v6 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = ((unsigned __int64)(500 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  v34 = *(_QWORD *)(a2 + 864) + 1LL;
  v40 = *(_DWORD *)(a2 + 836) + 1;
  v9 = (v8 + ((unsigned __int64)(500 * gliQpcFreq.QuadPart - v8) >> 1)) >> 9;
  if ( !*(_DWORD *)(SGDGetUserSessionState(v10, v8, v11, v12) + 436) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 556);
  v13 = RIMGetPointerInputType(a2);
  if ( v13 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v37, a2);
    v15 = *(_QWORD *)(active + 16);
    v35 = *(_OWORD *)active;
    v36 = v15;
    while ( 1 )
    {
      RIMCmActiveContactsEnd((__int64)&v37, a2);
      if ( (_QWORD)v35 == v37 && DWORD2(v35) == v38 && v36 == v39 )
        break;
      v16 = v36 - 16;
      if ( (*(_DWORD *)(v36 + 16) & 2) == 0 )
        __int2c();
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v16) )
      {
        if ( *(_DWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 436) != 3
          || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
          || (v21 = *(_QWORD *)(v16 + 56), PerformanceCounter.QuadPart <= v21 + v9)
          || !v21 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts((_DWORD *)(v16 + 2672), a2, a3, 0LL) )
          {
            if ( !v4 )
            {
              RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
              if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                                    a1,
                                    *(_QWORD *)(a2 + 16),
                                    (LARGE_INTEGER)PerformanceCounter.QuadPart) )
                return 0;
              v4 = 1;
            }
            RIMCmAddContactSuppressionReasons(a2, v16);
            LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_dDD(
                WPP_GLOBAL_Control->AttachedDevice,
                v22,
                v23,
                16,
                4,
                v33,
                16,
                (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                *(_DWORD *)v16,
                *(_DWORD *)(v16 + 8),
                *(_DWORD *)(v16 + 2684));
            }
            RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), v16, v34, v40, 1);
          }
        }
      }
      RIMCmActiveContactsNext(a2, &v35);
    }
    if ( (unsigned int)rimAbShouldButtonContactBeSuppressed((__int64)a1, a2, v4) )
    {
      ButtonContact = RIMCmGetButtonContact(a2);
      RIMCmAddContactSuppressionReasons(v25, ButtonContact);
      if ( v4 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v26) = 0;
        }
        if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v26,
            v27,
            (_DWORD)gRimLog,
            4,
            1,
            19,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
      }
      else
      {
        RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              *(_QWORD *)(a2 + 16),
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v28) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v28) = 0;
          }
          if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v28,
              v29,
              (_DWORD)gRimLog,
              4,
              1,
              17,
              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
          }
          return 0;
        }
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v28) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v28) = 0;
        }
        if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v28,
            v29,
            (_DWORD)gRimLog,
            4,
            1,
            18,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), ButtonContact, v34, v40, 1);
      }
    }
    else if ( !v4 )
    {
      return v6;
    }
    RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, *(_QWORD *)(a2 + 16), v34, v40);
    v6 = RIMCompletePointerDeviceFrame(a1, *(struct RIMDEV **)(a2 + 16));
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v30) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v30) = 0;
    }
    if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v30,
        v31,
        (_DWORD)gRimLog,
        4,
        1,
        20,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
        v6);
    }
  }
  return v6;
}

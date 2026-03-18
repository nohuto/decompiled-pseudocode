/*
 * XREFs of rimEndPointerDeviceStaleContacts @ 0x1C01AF120
 * Callers:
 *     RIMEndAllStaleContacts @ 0x1C00E704A (RIMEndAllStaleContacts.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCmActiveContactsBegin @ 0x1C00E74FA (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0188460 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C0189090 (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01A614C (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01A6AF4 (RIMStartPointerDeviceFrame.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C01ABAA0 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     ?ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01AC960 (-ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01AD8CC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01ADA80 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01ADFB4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C01B6684 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01B68C8 (RIMCmIsContactDeliveringAnyData.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C01B77CC (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimEndPointerDeviceStaleContacts(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  int v7; // r12d
  int v8; // r13d
  int v9; // esi
  __int64 active; // rax
  __int64 v11; // r8
  __int64 v12; // xmm1_8
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  _DWORD *v17; // rbx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // r9
  _WORD *v21; // rcx
  int v22; // edx
  int v23; // r8d
  int v24; // eax
  __int64 v25; // r8
  _DWORD *v26; // rbx
  __int16 v27; // [rsp+60h] [rbp-59h] BYREF
  __int16 v28; // [rsp+62h] [rbp-57h] BYREF
  __int16 v29; // [rsp+64h] [rbp-55h] BYREF
  int v30; // [rsp+68h] [rbp-51h]
  int v31; // [rsp+6Ch] [rbp-4Dh] BYREF
  int v32; // [rsp+70h] [rbp-49h] BYREF
  __int64 v33; // [rsp+78h] [rbp-41h]
  __int64 v34; // [rsp+80h] [rbp-39h] BYREF
  __int128 v35; // [rsp+88h] [rbp-31h] BYREF
  __int64 v36; // [rsp+98h] [rbp-21h]
  __int128 v37; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-9h]
  _BYTE v39[88]; // [rsp+B8h] [rbp-1h] BYREF
  char v40; // [rsp+120h] [rbp+67h] BYREF
  char v41; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v42; // [rsp+130h] [rbp+77h]
  unsigned int v43; // [rsp+138h] [rbp+7Fh]

  v43 = a4;
  v42 = a3;
  v4 = *(_QWORD *)(a2 + 472);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v30 = *(_DWORD *)(v4 + 792) + *(_DWORD *)(v4 + 836);
  v33 = *(_QWORD *)(v4 + 800) + *(_QWORD *)(v4 + 864);
  active = RIMCmActiveContactsBegin((__int64)&v37, v4, a3);
  v12 = *(_QWORD *)(active + 16);
  v35 = *(_OWORD *)active;
  v36 = v12;
  while ( 1 )
  {
    v13 = RIMCmActiveContactsEnd((__int64)v39, v4, v11);
    v14 = *(_OWORD *)v13;
    v15 = *(_QWORD *)(v13 + 16);
    v16 = *(_QWORD *)v13;
    v38 = v15;
    v37 = v14;
    if ( (_QWORD)v35 == v16 && DWORD2(v35) == DWORD2(v37) && v36 == v38 )
      break;
    v17 = (_DWORD *)(v36 - 16);
    if ( (*(_DWORD *)(v36 - 16 + 32) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v4, &v35);
    v11 = v43;
    if ( v43 > *(_DWORD *)(v4 + 792) + v17[11] )
    {
      v18 = *(_DWORD *)(v4 + 24);
      if ( (unsigned int)(v18 - 5) <= 1 )
      {
        v9 = 2;
      }
      else if ( (unsigned int)(v18 - 1) <= 3 )
      {
        v9 = 1;
      }
      if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
      {
        v21 = *(_WORD **)(a2 + 456);
        v34 = 0x1000000LL;
        v31 = v19 - v17[581];
        v32 = v17[580];
        v40 = 1;
        v41 = 0;
        v27 = v21[57];
        v28 = v21[56];
        v29 = v21[55];
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          (__int64)v21,
          byte_1C025F5AB,
          v19,
          v20,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v34);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v17) )
      {
        if ( !v7 )
        {
          RIMAbandonPointerDeviceFrame(a1, a2);
          if ( !(unsigned int)RIMStartPointerDeviceFrame(a1, a2, v42) )
          {
            LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v22,
                v23,
                (_DWORD)gRimLog,
                4,
                1,
                50,
                (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
            }
            goto LABEL_47;
          }
          v7 = 1;
        }
        LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dDD(WPP_GLOBAL_Control->AttachedDevice, v22, v23, 51, 4);
        }
        v24 = v30;
        v17[585] |= 4u;
        RIMInsertSimulatedContactEndStateInFrame(a1, a2, (__int64)v17, v33, v24, 0);
      }
      else
      {
        LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dDD(WPP_GLOBAL_Control->AttachedDevice, v22, v23, 49, 4);
        }
        RIMCmDeactivateContact(v4, v17);
        v8 = 1;
      }
    }
  }
  if ( v7 )
  {
    InputTraceLogging::RIM::ContactAssessmentTimer((const struct RIMDEV *)a2);
    RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, a2, v33, v30);
    RIMAbArbitratePointerDeviceFrame((struct RawInputManagerObject *)a1, a2, v25);
    RIMCompletePointerDeviceFrame((struct RawInputManagerObject *)a1, (struct RIMDEV *)a2, 2LL);
    goto LABEL_49;
  }
LABEL_47:
  if ( v8 )
    RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, a2, 0LL, 0);
LABEL_49:
  v26 = *(_DWORD **)(a1 + 1080);
  if ( v26 )
  {
    if ( v9 )
    {
      PalmTelemetry::_ResetTelemetryData(*(PalmTelemetry **)(a1 + 1080));
      if ( *v26 )
      {
        if ( v9 == 1 )
        {
          v26[1] = 1;
        }
        else
        {
          *v26 = 0;
          v26[1] = 0;
        }
      }
    }
  }
}

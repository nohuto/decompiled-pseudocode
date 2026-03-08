/*
 * XREFs of rimEndPointerDeviceStaleContacts @ 0x1C01D6A24
 * Callers:
 *     RIMEndAllStaleContacts @ 0x1C00F1142 (RIMEndAllStaleContacts.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCmActiveContactsBegin @ 0x1C00F19A8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00F1A04 (RIMCmActiveContactsEnd.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01AA284 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C01AB010 (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01CD2D0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01CD424 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01CDC44 (RIMStartPointerDeviceFrame.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C01D30D8 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     ?ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01D3FC8 (-ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01D4EA0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01D5098 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01D5678 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMCmActiveContactsNext @ 0x1C01DE0AC (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C01DE86C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01DEB08 (RIMCmIsContactDeliveringAnyData.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C01DFA4C (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimEndPointerDeviceStaleContacts(
        struct RawInputManagerObject *a1,
        LARGE_INTEGER *a2,
        unsigned __int64 a3)
{
  __int64 QuadPart; // r15
  int v6; // r12d
  int v7; // r13d
  int v8; // r14d
  unsigned __int64 v9; // kr00_8
  __int64 v10; // rax
  __int64 active; // rax
  __int64 v12; // xmm1_8
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  __int64 v17; // rbx
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
  int v29; // [rsp+64h] [rbp-55h]
  int v30; // [rsp+68h] [rbp-51h] BYREF
  int v31; // [rsp+6Ch] [rbp-4Dh] BYREF
  __int64 v32; // [rsp+70h] [rbp-49h]
  unsigned __int64 v33; // [rsp+78h] [rbp-41h]
  __int64 v34; // [rsp+80h] [rbp-39h] BYREF
  __int128 v35; // [rsp+88h] [rbp-31h] BYREF
  __int64 v36; // [rsp+98h] [rbp-21h]
  __int128 v37; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-9h]
  _BYTE v39[88]; // [rsp+B8h] [rbp-1h] BYREF
  char v40; // [rsp+120h] [rbp+67h] BYREF
  char v41; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v42; // [rsp+130h] [rbp+77h]
  __int16 v43; // [rsp+138h] [rbp+7Fh] BYREF

  v42 = a3;
  QuadPart = a2[59].QuadPart;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = gliQpcFreq.QuadPart * *(unsigned int *)(QuadPart + 792);
  v29 = *(_DWORD *)(QuadPart + 792) + *(_DWORD *)(QuadPart + 836);
  v10 = *(_QWORD *)(QuadPart + 800) + *(_QWORD *)(QuadPart + 864);
  v33 = v9 / 0x3E8;
  v32 = v10;
  active = RIMCmActiveContactsBegin((__int64)&v37, QuadPart);
  v12 = *(_QWORD *)(active + 16);
  v35 = *(_OWORD *)active;
  v36 = v12;
  while ( 1 )
  {
    v13 = RIMCmActiveContactsEnd((__int64)v39, QuadPart);
    v14 = *(_OWORD *)v13;
    v15 = *(_QWORD *)(v13 + 16);
    v16 = *(_QWORD *)v13;
    v38 = v15;
    v37 = v14;
    if ( (_QWORD)v35 == v16 && DWORD2(v35) == DWORD2(v37) && v36 == v38 )
      break;
    v17 = v36 - 16;
    if ( (*(_DWORD *)(v36 - 16 + 32) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(QuadPart, &v35);
    if ( v42 > *(_QWORD *)(v17 + 48) + v33 )
    {
      v18 = *(_DWORD *)(QuadPart + 24);
      if ( (unsigned int)(v18 - 5) <= 1 )
      {
        v8 = 2;
      }
      else if ( (unsigned int)(v18 - 1) <= 3 )
      {
        v8 = 1;
      }
      if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
      {
        v21 = (_WORD *)a2[57].QuadPart;
        v34 = 0x1000000LL;
        v40 = 1;
        v41 = 0;
        v30 = (unsigned __int64)(1000 * (v20 - v19)) / gliQpcFreq.QuadPart;
        v31 = *(_DWORD *)(v17 + 2336);
        v43 = v21[57];
        v27 = v21[56];
        v28 = v21[55];
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          (__int64)v21,
          byte_1C0298BBC,
          v19,
          v20,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v43,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v34);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v17) )
      {
        if ( !v6 )
        {
          RIMAbandonPointerDeviceFrame((__int64)a1, (__int64)a2);
          if ( !(unsigned int)RIMStartPointerDeviceFrame((__int64)a1, (__int64)a2, v42) )
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
                (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
            }
            goto LABEL_47;
          }
          v6 = 1;
        }
        LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dDD(WPP_GLOBAL_Control->AttachedDevice, v22, v23, 51, 4);
        }
        v24 = v29;
        *(_DWORD *)(v17 + 2364) |= 4u;
        RIMInsertSimulatedContactEndStateInFrame((__int64)a1, (__int64)a2, v17, v32, v24, 0);
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
        RIMCmDeactivateContact(QuadPart, v17);
        v7 = 1;
      }
    }
  }
  if ( v6 )
  {
    InputTraceLogging::RIM::ContactAssessmentTimer((const struct RIMDEV *)a2);
    RIMInsertSimulatedKeepAliveStateForActiveContacts((int)a1, (__int64)a2, v32, v29);
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)a2, v25);
    RIMCompletePointerDeviceFrame((HANDLE *)a1, a2, 2u);
    goto LABEL_49;
  }
LABEL_47:
  if ( v7 )
    RIMUpdatePointerDeviceStateAfterFrameCompleted((__int64)a1, (__int64)a2, 0, 0);
LABEL_49:
  v26 = (_DWORD *)*((_QWORD *)a1 + 131);
  if ( v26 )
  {
    if ( v8 )
    {
      PalmTelemetry::_ResetTelemetryData(*((PalmTelemetry **)a1 + 131));
      if ( *v26 )
      {
        if ( v8 == 1 )
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

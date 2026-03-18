/*
 * XREFs of rimEndPointerDeviceStaleContacts @ 0x1C01A894C
 * Callers:
 *     RIMEndAllStaleContacts @ 0x1C00E2C6E (RIMEndAllStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMCmActiveContactsBegin @ 0x1C00E34D4 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E3530 (RIMCmActiveContactsEnd.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C017D324 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C017E0B0 (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C019F6F0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C019F844 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01A005C (RIMStartPointerDeviceFrame.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C01A4FDC (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     ?ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01A5ECC (-ContactAssessmentTimer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01A6DA4 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01A6F9C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01A75A0 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMCmActiveContactsNext @ 0x1C01AFE8C (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C01B064C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01B08E8 (RIMCmIsContactDeliveringAnyData.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C01B181C (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
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
  char v22; // dl
  int v23; // edx
  int v24; // r8d
  char v25; // dl
  int v26; // eax
  __int64 v27; // r8
  _DWORD *v28; // rbx
  int v29; // [rsp+28h] [rbp-91h]
  __int16 v30; // [rsp+60h] [rbp-59h] BYREF
  __int16 v31; // [rsp+62h] [rbp-57h] BYREF
  int v32; // [rsp+64h] [rbp-55h]
  int v33; // [rsp+68h] [rbp-51h] BYREF
  int v34; // [rsp+6Ch] [rbp-4Dh] BYREF
  __int64 v35; // [rsp+70h] [rbp-49h]
  unsigned __int64 v36; // [rsp+78h] [rbp-41h]
  __int64 v37; // [rsp+80h] [rbp-39h] BYREF
  __int128 v38; // [rsp+88h] [rbp-31h] BYREF
  __int64 v39; // [rsp+98h] [rbp-21h]
  __int128 v40; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-9h]
  _BYTE v42[88]; // [rsp+B8h] [rbp-1h] BYREF
  char v43; // [rsp+120h] [rbp+67h] BYREF
  char v44; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v45; // [rsp+130h] [rbp+77h]
  __int16 v46; // [rsp+138h] [rbp+7Fh] BYREF

  v45 = a3;
  QuadPart = a2[59].QuadPart;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = gliQpcFreq.QuadPart * *(unsigned int *)(QuadPart + 792);
  v32 = *(_DWORD *)(QuadPart + 792) + *(_DWORD *)(QuadPart + 836);
  v10 = *(_QWORD *)(QuadPart + 800) + *(_QWORD *)(QuadPart + 864);
  v36 = v9 / 0x3E8;
  v35 = v10;
  active = RIMCmActiveContactsBegin((__int64)&v40, QuadPart);
  v12 = *(_QWORD *)(active + 16);
  v38 = *(_OWORD *)active;
  v39 = v12;
  while ( 1 )
  {
    v13 = RIMCmActiveContactsEnd((__int64)v42, QuadPart);
    v14 = *(_OWORD *)v13;
    v15 = *(_QWORD *)(v13 + 16);
    v16 = *(_QWORD *)v13;
    v41 = v15;
    v40 = v14;
    if ( (_QWORD)v38 == v16 && DWORD2(v38) == DWORD2(v40) && v39 == v41 )
      break;
    v17 = v39 - 16;
    if ( (*(_DWORD *)(v39 - 16 + 32) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(QuadPart, &v38);
    if ( v45 > *(_QWORD *)(v17 + 48) + v36 )
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
      if ( (unsigned int)dword_1C02882F8 > 5 && tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
      {
        v21 = (_WORD *)a2[57].QuadPart;
        v37 = 0x1000000LL;
        v43 = 1;
        v44 = 0;
        v33 = (unsigned __int64)(1000 * (v20 - v19)) / gliQpcFreq.QuadPart;
        v34 = *(_DWORD *)(v17 + 2336);
        v46 = v21[57];
        v30 = v21[56];
        v31 = v21[55];
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          (__int64)v21,
          byte_1C025A4B6,
          v19,
          v20,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v46,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v44,
          (__int64)&v43,
          (__int64)&v37);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v17) )
      {
        if ( !v6 )
        {
          RIMAbandonPointerDeviceFrame((__int64)a1, (__int64)a2);
          if ( !(unsigned int)RIMStartPointerDeviceFrame((__int64)a1, (__int64)a2, v45) )
          {
            LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v23,
                v24,
                (_DWORD)gRimLog,
                4,
                1,
                50,
                (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
            }
            goto LABEL_47;
          }
          v6 = 1;
        }
        v25 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dDD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v25,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            51LL,
            4u,
            v29,
            0x33u,
            (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
        v26 = v32;
        *(_DWORD *)(v17 + 2364) |= 4u;
        RIMInsertSimulatedContactEndStateInFrame((__int64)a1, (__int64)a2, v17, v35, v26, 0);
      }
      else
      {
        v22 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dDD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v22,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            49LL,
            4u,
            v29,
            0x31u,
            (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
        RIMCmDeactivateContact(QuadPart, v17);
        v7 = 1;
      }
    }
  }
  if ( v6 )
  {
    InputTraceLogging::RIM::ContactAssessmentTimer((const struct RIMDEV *)a2);
    RIMInsertSimulatedKeepAliveStateForActiveContacts((int)a1, (__int64)a2, v35, v32);
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)a2, v27);
    RIMCompletePointerDeviceFrame((HANDLE *)a1, a2, 2u);
    goto LABEL_49;
  }
LABEL_47:
  if ( v7 )
    RIMUpdatePointerDeviceStateAfterFrameCompleted((__int64)a1, (__int64)a2, 0, 0);
LABEL_49:
  v28 = (_DWORD *)*((_QWORD *)a1 + 131);
  if ( v28 )
  {
    if ( v8 )
    {
      PalmTelemetry::_ResetTelemetryData(*((PalmTelemetry **)a1 + 131));
      if ( *v28 )
      {
        if ( v8 == 1 )
        {
          v28[1] = 1;
        }
        else
        {
          *v28 = 0;
          v28[1] = 0;
        }
      }
    }
  }
}

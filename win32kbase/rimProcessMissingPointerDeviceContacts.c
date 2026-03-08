/*
 * XREFs of rimProcessMissingPointerDeviceContacts @ 0x1C01D9470
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01D5FD0 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01D6420 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCmActiveContactsEnd @ 0x1C00F1A04 (RIMCmActiveContactsEnd.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C01D30D8 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01D4EA0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1C01D5CB8 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C01D8954 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01DE028 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01DE0AC (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C01DE86C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01DEB08 (RIMCmIsContactDeliveringAnyData.c)
 */

_UNKNOWN **__fastcall rimProcessMissingPointerDeviceContacts(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  int v7; // r8d
  LARGE_INTEGER PerformanceCounter; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 active; // rax
  __int64 v13; // xmm1_8
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rbx
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rax
  PDEVICE_OBJECT v20; // rcx
  int v21; // r9d
  int v22; // edx
  int v23; // r8d
  __int64 v24; // r8
  __int64 v25; // r9
  _WORD *v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  _WORD *v30; // rcx
  unsigned __int64 v31; // rax
  _UNKNOWN **result; // rax
  int v33; // [rsp+20h] [rbp-69h]
  int v34; // [rsp+28h] [rbp-61h]
  int v35; // [rsp+38h] [rbp-51h]
  __int16 v36; // [rsp+60h] [rbp-29h] BYREF
  __int16 v37; // [rsp+62h] [rbp-27h] BYREF
  __int16 v38; // [rsp+64h] [rbp-25h] BYREF
  __int16 v39; // [rsp+66h] [rbp-23h] BYREF
  __int16 v40; // [rsp+68h] [rbp-21h] BYREF
  __int16 v41; // [rsp+6Ah] [rbp-1Fh] BYREF
  int v42; // [rsp+6Ch] [rbp-1Dh] BYREF
  int v43; // [rsp+70h] [rbp-19h] BYREF
  __int64 v44; // [rsp+78h] [rbp-11h] BYREF
  __int128 v45; // [rsp+80h] [rbp-9h] BYREF
  __int64 v46; // [rsp+90h] [rbp+7h]
  __int64 v47; // [rsp+98h] [rbp+Fh] BYREF
  int v48; // [rsp+A0h] [rbp+17h]
  __int64 v49; // [rsp+A8h] [rbp+1Fh]
  char v50; // [rsp+F8h] [rbp+6Fh] BYREF
  char v51; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a2 + 472);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = gliQpcFreq.QuadPart * *(unsigned int *)(v3 + 792);
  v10 = (v9 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  v11 = v9 / 0x3E8;
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v7,
      (_DWORD)gRimLog,
      4,
      1,
      27,
      (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
  }
  active = RIMCmActiveContactsBeginNoButton(&v47, v3);
  v13 = *(_QWORD *)(active + 16);
  v45 = *(_OWORD *)active;
  v46 = v13;
  while ( 1 )
  {
    RIMCmActiveContactsEnd((__int64)&v47, v3);
    if ( (_QWORD)v45 == v47 && DWORD2(v45) == v48 && v46 == v49 )
      break;
    v16 = v46 - 16;
    if ( (*(_DWORD *)(v46 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v3, &v45);
    v18 = *(_DWORD *)(v16 + 2336);
    if ( (*(_DWORD *)(v16 + 2364) & 2) != 0 )
    {
      if ( v18 )
      {
        if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
        {
          v30 = *(_WORD **)(a2 + 456);
          v44 = 0x1000000LL;
          v31 = 1000 * (PerformanceCounter.QuadPart - *(_QWORD *)(v16 + 2344));
          v50 = 0;
          v51 = 1;
          v43 = v31 / gliQpcFreq.QuadPart;
          v42 = v28;
          v39 = v30[57];
          v40 = v30[56];
          v41 = v30[55];
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
            (__int64)v30,
            byte_1C0298BBC,
            v28,
            v29,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&v39,
            (__int64)&v42,
            (__int64)&v43,
            (__int64)&v51,
            (__int64)&v50,
            (__int64)&v44);
        }
        *(_DWORD *)(v16 + 2336) = 0;
        *(_QWORD *)(v16 + 2344) = 0LL;
      }
    }
    else
    {
      *(_DWORD *)(v16 + 2336) = v18 + 1;
      v19 = *(_QWORD *)(v16 + 48);
      *(_QWORD *)(v16 + 2344) = v19;
      if ( PerformanceCounter.QuadPart <= v11 + v19 )
      {
        if ( a3 )
        {
          v20 = WPP_GLOBAL_Control;
          LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_35;
          v21 = 29;
          goto LABEL_34;
        }
        if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v16) )
          rimInsertSimulatedContactKeepAliveStateInFrame(a1, a2, v16, *(_QWORD *)(v3 + 864), *(_DWORD *)(v3 + 836));
      }
      else
      {
        v20 = WPP_GLOBAL_Control;
        LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_35;
        v21 = 28;
LABEL_34:
        WPP_RECORDER_AND_TRACE_SF_dD(
          v20->AttachedDevice,
          v17,
          v18,
          v21,
          v33,
          v34,
          v21,
          v35,
          *(_DWORD *)v16,
          *(_DWORD *)(v16 + 2684));
LABEL_35:
        if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v16) )
        {
          RIMInsertSimulatedContactEndStateInFrame(a1, a2, v16, *(_QWORD *)(v3 + 864), *(_DWORD *)(v3 + 836), 1);
          *(_DWORD *)(v16 + 2364) |= 4u;
        }
        else
        {
          LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_dD(
              WPP_GLOBAL_Control->AttachedDevice,
              v22,
              v23,
              30,
              v33,
              v34,
              30,
              v35,
              *(_DWORD *)v16,
              *(_DWORD *)(v16 + 2684));
          }
          RIMCmDeactivateContact(v3, v16);
        }
        if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
        {
          v26 = *(_WORD **)(a2 + 456);
          v44 = 0x1000000LL;
          v27 = 1000 * (PerformanceCounter.QuadPart - *(_QWORD *)(v16 + 2344));
          v50 = 0;
          v51 = 0;
          v42 = v27 / gliQpcFreq.QuadPart;
          v43 = *(_DWORD *)(v16 + 2336);
          v36 = v26[57];
          v37 = v26[56];
          v38 = v26[55];
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
            (__int64)v26,
            byte_1C0298BBC,
            v24,
            v25,
            (__int64)&v38,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v43,
            (__int64)&v42,
            (__int64)&v51,
            (__int64)&v50,
            (__int64)&v44);
        }
      }
    }
  }
  LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v14,
                          v15,
                          (_DWORD)gRimLog,
                          4,
                          1,
                          31,
                          (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
  }
  return result;
}

/*
 * XREFs of rimProcessMissingPointerDeviceContacts @ 0x1C01B198C
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01AE834 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01AEB68 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C01ABAA0 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01AD8CC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1C01AE51C (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C01B1008 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01B609C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C01B6684 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01B68C8 (RIMCmIsContactDeliveringAnyData.c)
 */

_UNKNOWN **__fastcall rimProcessMissingPointerDeviceContacts(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v5; // r12d
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 active; // rax
  __int64 v9; // r8
  __int64 v10; // xmm1_8
  int v11; // edx
  int v12; // r8d
  _DWORD *v13; // rbx
  int v14; // edx
  int v15; // ecx
  PDEVICE_OBJECT v16; // rcx
  int v17; // r9d
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  _WORD *v21; // rcx
  __int64 v22; // r9
  _WORD *v23; // rcx
  _UNKNOWN **result; // rax
  int v25; // [rsp+20h] [rbp-59h]
  int v26; // [rsp+28h] [rbp-51h]
  int v27; // [rsp+38h] [rbp-41h]
  __int16 v28; // [rsp+60h] [rbp-19h] BYREF
  __int16 v29; // [rsp+62h] [rbp-17h] BYREF
  __int16 v30; // [rsp+64h] [rbp-15h] BYREF
  __int16 v31; // [rsp+66h] [rbp-13h] BYREF
  __int16 v32; // [rsp+68h] [rbp-11h] BYREF
  __int16 v33; // [rsp+6Ah] [rbp-Fh] BYREF
  int v34; // [rsp+6Ch] [rbp-Dh] BYREF
  int v35; // [rsp+70h] [rbp-9h] BYREF
  __int64 v36; // [rsp+78h] [rbp-1h] BYREF
  __int128 v37; // [rsp+80h] [rbp+7h] BYREF
  __int64 v38; // [rsp+90h] [rbp+17h]
  __int64 v39; // [rsp+98h] [rbp+1Fh] BYREF
  int v40; // [rsp+A0h] [rbp+27h]
  __int64 v41; // [rsp+A8h] [rbp+2Fh]
  char v42; // [rsp+E8h] [rbp+6Fh] BYREF
  char v43; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a2 + 472);
  v5 = a3;
  v6 = a2;
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      27,
      (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
  }
  active = RIMCmActiveContactsBeginNoButton(&v39, v3);
  v10 = *(_QWORD *)(active + 16);
  v37 = *(_OWORD *)active;
  v38 = v10;
  while ( 1 )
  {
    RIMCmActiveContactsEnd((__int64)&v39, v3, v9);
    if ( (_QWORD)v37 == v39 && DWORD2(v37) == v40 && v38 == v41 )
      break;
    v13 = (_DWORD *)(v38 - 16);
    if ( (*(_DWORD *)(v38 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v3, &v37);
    v9 = (unsigned int)v13[580];
    if ( (v13[585] & 2) != 0 )
    {
      if ( (_DWORD)v9 )
      {
        if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
        {
          v23 = *(_WORD **)(v6 + 456);
          v36 = 0x1000000LL;
          v35 = v7 - v13[581];
          v42 = 0;
          v43 = 1;
          v34 = v9;
          v31 = v23[57];
          v32 = v23[56];
          v33 = v23[55];
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
            (__int64)v23,
            byte_1C025F5AB,
            v9,
            v22,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v34,
            (__int64)&v35,
            (__int64)&v43,
            (__int64)&v42,
            (__int64)&v36);
        }
        v13[580] = 0;
        v13[581] = 0;
      }
    }
    else
    {
      v15 = v13[11];
      v13[580] = v9 + 1;
      v13[581] = v15;
      if ( (unsigned int)v7 <= *(_DWORD *)(v3 + 792) + v15 )
      {
        if ( v5 )
        {
          v16 = WPP_GLOBAL_Control;
          LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_35;
          v17 = 29;
          goto LABEL_34;
        }
        if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v13) )
          rimInsertSimulatedContactKeepAliveStateInFrame(
            a1,
            v6,
            (__int64)v13,
            *(_QWORD *)(v3 + 864),
            *(_DWORD *)(v3 + 836));
      }
      else
      {
        v16 = WPP_GLOBAL_Control;
        LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_35;
        v17 = 28;
LABEL_34:
        WPP_RECORDER_AND_TRACE_SF_dD(v16->AttachedDevice, v14, v9, v17, v25, v26, v17, v27, *v13, v13[665]);
LABEL_35:
        if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v13) )
        {
          RIMInsertSimulatedContactEndStateInFrame(
            a1,
            v6,
            (__int64)v13,
            *(_QWORD *)(v3 + 864),
            *(_DWORD *)(v3 + 836),
            1);
          v13[585] |= 4u;
        }
        else
        {
          LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_dD(
              WPP_GLOBAL_Control->AttachedDevice,
              v18,
              v19,
              30,
              v25,
              v26,
              30,
              v27,
              *v13,
              v13[665]);
          }
          RIMCmDeactivateContact(v3, v13);
        }
        if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
        {
          v21 = *(_WORD **)(v6 + 456);
          v36 = 0x1000000LL;
          v34 = v7 - v13[581];
          v35 = v13[580];
          v42 = 0;
          v43 = 0;
          v28 = v21[57];
          v29 = v21[56];
          v30 = v21[55];
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
            (__int64)v21,
            byte_1C025F5AB,
            v9,
            v20,
            (__int64)&v30,
            (__int64)&v29,
            (__int64)&v28,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v43,
            (__int64)&v42,
            (__int64)&v36);
        }
      }
    }
  }
  LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v11,
                          v12,
                          (_DWORD)gRimLog,
                          4,
                          1,
                          31,
                          (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
  }
  return result;
}

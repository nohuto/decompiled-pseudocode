/*
 * XREFs of rimAbSuppressLowerRankActivityForFrame @ 0x1C0159500
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A07C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0158D94 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C01593B8 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C015A79C (WPP_RECORDER_SF_dDD.c)
 *     RIMGetPointerInputType @ 0x1C015E558 (RIMGetPointerInputType.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C0171344 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0171424 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0171C28 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C017825C (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01783F8 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C017FBB8 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C017FC4C (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017FCBC (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C017FDC4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C01802CC (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0180324 (RIMCmIsContactDeliveringPointerData.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityForFrame(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  int v5; // r12d
  unsigned int v6; // r14d
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned __int64 v8; // r13
  int v9; // edi
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  _DWORD *v16; // rdi
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 ButtonContact; // rdi
  __int64 v22; // rcx
  int v23; // edx
  int v24; // edx
  int v26; // edx
  __int64 v27; // [rsp+40h] [rbp-29h]
  __int128 v28; // [rsp+48h] [rbp-21h] BYREF
  __int64 v29; // [rsp+58h] [rbp-11h]
  __int128 v30; // [rsp+60h] [rbp-9h] BYREF
  __int64 v31; // [rsp+70h] [rbp+7h]
  _BYTE v32[72]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned int v33; // [rsp+D8h] [rbp+6Fh]

  v5 = 0;
  v6 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v27 = *(_QWORD *)(a2 + 816) + 1LL;
  v33 = *(_DWORD *)(a2 + 788) + 1;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 549);
  v9 = RIMGetPointerInputType(a2);
  if ( v9 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v30, a2);
    v11 = *(_QWORD *)(active + 16);
    v28 = *(_OWORD *)active;
    v29 = v11;
    while ( 1 )
    {
      v12 = RIMCmActiveContactsEnd(v32, a2);
      v13 = *(_OWORD *)v12;
      v14 = *(_QWORD *)(v12 + 16);
      v15 = *(_QWORD *)v12;
      v31 = v14;
      v30 = v13;
      if ( (_QWORD)v28 == v15 && DWORD2(v28) == DWORD2(v30) && v29 == v31 )
        break;
      v16 = (_DWORD *)(v29 - 16);
      if ( (*(_DWORD *)(v29 + 16) & 2) == 0 )
        __int2c();
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v16) )
      {
        if ( gDeviceArbitrationType != 3
          || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
          || (v17 = v16[13], (unsigned int)v8 <= v17 + 500)
          || !v17 )
        {
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(v16 + 662, a2, a3, 0) )
          {
            if ( !v5 )
            {
              RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
              if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                                    a1,
                                    *(_QWORD *)(a2 + 16),
                                    (LARGE_INTEGER)PerformanceCounter.QuadPart) )
                return 0;
              v5 = 1;
            }
            RIMCmAddContactSuppressionReasons(a2, v16, 1LL);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v18) = 4;
              WPP_RECORDER_SF_dDD(
                v19,
                v18,
                v20,
                16,
                (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
                *v16,
                v16[2],
                v16[665]);
            }
            RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), (_DWORD)v16, v27, v33, 1);
          }
        }
      }
      RIMCmActiveContactsNext(a2, &v28);
    }
    if ( (unsigned int)rimAbShouldButtonContactBeSuppressed((__int64)a1, a2, v5) )
    {
      ButtonContact = RIMCmGetButtonContact(a2);
      RIMCmAddContactSuppressionReasons(v22, ButtonContact, 1LL);
      if ( !v5 )
      {
        RIMAbandonPointerDeviceFrame(a1, *(_QWORD *)(a2 + 16));
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              *(_QWORD *)(a2 + 16),
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v24, 1, 17, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
          }
          return 0;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v24, 1, 18, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
        }
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, *(_QWORD *)(a2 + 16), ButtonContact, v27, v33, 1);
LABEL_36:
        RIMInsertSimulatedKeepAliveStateForActiveContacts(a1, *(_QWORD *)(a2 + 16), v27, v33);
        v6 = RIMCompletePointerDeviceFrame(a1, *(struct RIMDEV **)(a2 + 16));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v26) = 4;
          WPP_RECORDER_SF_d((_DWORD)gRimLog, v26, 1, 20, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids, v6);
        }
        return v6;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v23, 1, 19, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
      }
    }
    if ( !v5 )
      return v6;
    goto LABEL_36;
  }
  return v6;
}

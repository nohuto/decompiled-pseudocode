/*
 * XREFs of rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0187FE0
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0188460 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCmActiveContactsBegin @ 0x1C00E74FA (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C0186AD4 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0186CF0 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0186F84 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C01873D8 (rimAbRemoveGlobalPenDeadzone.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C0189090 (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01B6928 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C01B6958 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C01B6984 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C01B69A4 (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01B69D4 (RIMCmRemoveContactSuppressionReasons.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbUpdateDeadzonesAndResurrectContacts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 active; // rax
  __int64 v7; // r8
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  PDEVICE_OBJECT v21; // rcx
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // [rsp+30h] [rbp-41h]
  __int128 v36; // [rsp+68h] [rbp-9h] BYREF
  __int64 v37; // [rsp+78h] [rbp+7h]
  __int128 v38; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v39; // [rsp+90h] [rbp+1Fh]
  _BYTE v40[32]; // [rsp+98h] [rbp+27h] BYREF

  v4 = *(_QWORD *)(a2 + 472);
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  active = RIMCmActiveContactsBegin((__int64)&v38, v4, a3);
  v8 = *(_QWORD *)(active + 16);
  v36 = *(_OWORD *)active;
  v37 = v8;
  while ( 1 )
  {
    v9 = RIMCmActiveContactsEnd((__int64)v40, v4, v7);
    v13 = *(_OWORD *)v9;
    v14 = *(_QWORD *)(v9 + 16);
    v15 = *(_QWORD *)v9;
    v39 = v14;
    v38 = v13;
    if ( (_QWORD)v36 == v15 )
    {
      result = DWORD2(v38);
      if ( DWORD2(v36) == DWORD2(v38) && v37 == v39 )
        return result;
    }
    v17 = v37 - 16;
    if ( (*(_DWORD *)(v37 + 16) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    if ( (*(_DWORD *)(v17 + 2340) & 1) != 0 )
    {
      v18 = *(unsigned int *)(v4 + 24);
      if ( (unsigned int)(v18 - 5) <= 1 )
      {
        if ( (*(_DWORD *)(v17 + 32) & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v10, v12);
        if ( (*(_DWORD *)(v17 + 2420) & 2) != 0 )
        {
          if ( *(_DWORD *)(a1 + 516) )
          {
            rimAbRemoveGlobalPenDeadzone(a1, v10, v12);
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
                21,
                (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
            }
          }
        }
        else
        {
          rimAbCreateGlobalPenDeadzone(a1, (_OWORD *)(v4 + 156), (_OWORD *)(v17 + 2408));
        }
      }
      else if ( (unsigned int)(v18 - 1) <= 3 )
      {
        if ( (*(_DWORD *)(v17 + 32) & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v10, v12);
        if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, *(_QWORD *)(a2 + 472) + 156LL, v17 + 2408) )
        {
          v21 = WPP_GLOBAL_Control;
          LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v19,
              v20,
              (_DWORD)gRimLog,
              4,
              1,
              22,
              (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
          if ( !*(_DWORD *)(a1 + 516) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v19, v20);
          *(_DWORD *)(a1 + 728) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                                + 250;
        }
      }
      if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v17) )
      {
        v27 = *(unsigned int *)(v17 + 2420);
        if ( (v27 & 2) == 0 )
        {
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v17) && (*(_DWORD *)(v17 + 32) & 4) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v24, v26);
LABEL_59:
          LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_dDD(
              WPP_GLOBAL_Control->AttachedDevice,
              v24,
              v26,
              24,
              4,
              v35,
              24,
              (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids,
              *(_DWORD *)v17,
              *(_DWORD *)(v17 + 8),
              *(_DWORD *)(v17 + 2660));
          }
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v17) && (*(_DWORD *)(v17 + 32) & 4) == 0 )
LABEL_73:
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
          *(_DWORD *)(v17 + 2340) &= ~1u;
          goto LABEL_75;
        }
        if ( (unsigned int)(*(_DWORD *)(v4 + 24) - 5) > 1 )
          goto LABEL_59;
        if ( (v27 & 4) == 0 )
        {
          if ( (*(_DWORD *)(v17 + 32) & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v24, v26);
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, v4, v17 + 2408) )
            goto LABEL_59;
          LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v24,
              v26,
              (_DWORD)gRimLog,
              4,
              1,
              23,
              (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
          }
        }
        RIMCmRemoveContactSuppressionReasons(v4, v17, 1LL);
        if ( (unsigned int)RIMCmIsContactSuppressed(v17) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
      }
      else if ( (unsigned int)RIMCmIsContactSuppressed(v25)
             && !(unsigned int)RIMCmIsContactDeliveringPointerData(v17)
             && !(unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(v17) )
      {
        goto LABEL_73;
      }
    }
LABEL_75:
    RIMCmActiveContactsNext(v4, &v36);
  }
}

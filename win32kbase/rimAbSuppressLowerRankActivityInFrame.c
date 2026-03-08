/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x1C01A98C0
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01AA284 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmActiveContactsEnd @ 0x1C00F1A04 (RIMCmActiveContactsEnd.c)
 *     RIMCmGetButtonContact @ 0x1C00F1A60 (RIMCmGetButtonContact.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C01A8668 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C01A89E4 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C01A8AF4 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C01A91C8 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C01AB010 (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMUpdatePrimaryDevice @ 0x1C01BA144 (RIMUpdatePrimaryDevice.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01D4EA0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C01D546C (RIMResetPointerDevicePrimaryContact.c)
 *     RIMSetContactEndState @ 0x1C01D551C (RIMSetContactEndState.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01DE028 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01DE0AC (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01DE1B0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01DEB08 (RIMCmIsContactDeliveringAnyData.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  int v5; // r14d
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 result; // rax
  __int64 ButtonContact; // rax
  int v26; // edi
  __int64 v27; // rcx
  int v28; // edx
  int v29; // r8d
  int v30; // [rsp+28h] [rbp-51h]
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-19h]
  __int128 v32; // [rsp+68h] [rbp-11h] BYREF
  __int64 v33; // [rsp+78h] [rbp-1h]
  __int64 v34; // [rsp+80h] [rbp+7h] BYREF
  int v35; // [rsp+88h] [rbp+Fh]
  __int64 v36; // [rsp+90h] [rbp+17h]
  int v37; // [rsp+F8h] [rbp+7Fh]

  v3 = *(_QWORD *)(a2 + 864);
  v37 = *(_DWORD *)(a2 + 836);
  v5 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = 500 * gliQpcFreq.QuadPart / 0x3E8uLL;
  if ( !*(_DWORD *)(SGDGetUserSessionState(
                      v7,
                      ((unsigned __int64)(500 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64,
                      v8,
                      v9)
                  + 436) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 858);
  active = RIMCmActiveContactsBeginNoButton(&v34, a2);
  v11 = *(_QWORD *)(active + 16);
  v32 = *(_OWORD *)active;
  v33 = v11;
  while ( 1 )
  {
    RIMCmActiveContactsEnd((__int64)&v34, a2);
    if ( (_QWORD)v32 == v34 && DWORD2(v32) == v35 && v33 == v36 )
      break;
    v15 = *(_DWORD *)(v33 + 16);
    v16 = v33 - 16;
    if ( (v15 & 2) == 0 )
      __int2c();
    if ( (v15 & 4) != 0 )
      __int2c();
    if ( (*(_DWORD *)(v16 + 2364) & 1) != 0 && (*(_DWORD *)(v16 + 2444) & 2) != 0 )
    {
      if ( *(_DWORD *)(SGDGetUserSessionState(2LL, v12, v13, v14) + 436) != 3
        || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
        || (v18 = *(_QWORD *)(v16 + 56), PerformanceCounter.QuadPart <= v18 + v6)
        || !v18 )
      {
        if ( (unsigned int)rimAbIsPointerSuppressedByGlobalPenDeadzone(a1, a2, v16 + 2432, v17)
          || (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, a2, v16 + 2432, v19)
          || (unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, (struct tagHPD_CONTACT *)v16, v20, v21) )
        {
          v5 = 1;
          RIMCmAddContactSuppressionReasons(a2, v16);
          if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v16) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v22) = 0;
            }
            if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_dDD(
                WPP_GLOBAL_Control->AttachedDevice,
                v22,
                v23,
                25,
                4,
                v30,
                25,
                (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                *(_DWORD *)v16,
                *(_DWORD *)(v16 + 8),
                *(_DWORD *)(v16 + 2684));
            }
            RIMSetContactEndState(a2, v16, v3, v37, 1);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v22) = 0;
            }
            LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_dDD(
                WPP_GLOBAL_Control->AttachedDevice,
                v22,
                v23,
                26,
                4,
                v30,
                26,
                (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                *(_DWORD *)v16,
                *(_DWORD *)(v16 + 8),
                *(_DWORD *)(v16 + 2684));
            *(_DWORD *)(v16 + 2364) &= ~1u;
            if ( (*(_DWORD *)(v16 + 32) & 8) != 0 )
            {
              if ( *(_QWORD *)(a2 + 1016) != v16 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 941);
              RIMResetPointerDevicePrimaryContact(a2, v22, v23);
              if ( (*(_DWORD *)(a2 + 360) & 1) != 0 )
              {
                if ( *(_QWORD *)(a1 + 480) != a2 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 946);
                RIMUpdatePrimaryDevice(a1, 0LL);
              }
            }
          }
        }
      }
    }
    RIMCmActiveContactsNext(a2, &v32);
  }
  result = rimAbShouldButtonContactBeSuppressed(a1, a2, v5);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    v26 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v27, ButtonContact);
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
        27,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), v26, v3, v37, 1);
  }
  return result;
}

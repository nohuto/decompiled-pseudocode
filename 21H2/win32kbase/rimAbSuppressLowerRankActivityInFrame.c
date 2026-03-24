/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x1C015999C
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A14C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C0158A30 (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C0158D00 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0158DCC (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0159488 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C015A86C (WPP_RECORDER_SF_dDD.c)
 *     RIMUpdatePrimaryDevice @ 0x1C015FD6C (RIMUpdatePrimaryDevice.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C017832C (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C0178774 (RIMResetPointerDevicePrimaryContact.c)
 *     RIMSetContactEndState @ 0x1C0178814 (RIMSetContactEndState.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C017FC88 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C017FD1C (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017FD8C (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C017FE94 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C018039C (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01803F4 (RIMCmIsContactDeliveringPointerData.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  int v5; // r12d
  unsigned __int64 v6; // r15
  __int64 active; // rax
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdi
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 result; // rax
  __int64 ButtonContact; // rax
  int v21; // edi
  __int64 v22; // rcx
  int v23; // edx
  __int128 v24; // [rsp+40h] [rbp-29h] BYREF
  __int64 v25; // [rsp+50h] [rbp-19h]
  __int128 v26; // [rsp+58h] [rbp-11h] BYREF
  __int64 v27; // [rsp+68h] [rbp-1h]
  _BYTE v28[80]; // [rsp+70h] [rbp+7h] BYREF
  int v29; // [rsp+E8h] [rbp+7Fh]

  v3 = *(_QWORD *)(a2 + 816);
  v29 = *(_DWORD *)(a2 + 788);
  v5 = 0;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 849);
  active = RIMCmActiveContactsBeginNoButton(&v26, a2);
  v8 = *(_QWORD *)(active + 16);
  v24 = *(_OWORD *)active;
  v25 = v8;
  while ( 1 )
  {
    v9 = RIMCmActiveContactsEnd(v28, a2);
    v10 = *(_OWORD *)v9;
    v11 = *(_QWORD *)(v9 + 16);
    v12 = *(_QWORD *)v9;
    v27 = v11;
    v26 = v10;
    if ( (_QWORD)v24 == v12 && DWORD2(v24) == DWORD2(v26) && v25 == v27 )
      break;
    v13 = *(_DWORD *)(v25 + 16);
    v14 = v25 - 16;
    if ( (v13 & 2) == 0 )
      __int2c();
    if ( (v13 & 4) != 0 )
      __int2c();
    if ( (*(_DWORD *)(v14 + 2340) & 1) != 0 && (*(_DWORD *)(v14 + 2420) & 2) != 0 )
    {
      if ( gDeviceArbitrationType != 3
        || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
        || (v15 = *(_DWORD *)(v14 + 52), (unsigned int)v6 <= v15 + 500)
        || !v15 )
      {
        if ( (unsigned int)rimAbIsPointerSuppressedByGlobalPenDeadzone(a1, a2, v14 + 2408)
          || (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, a2, v14 + 2408)
          || (unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, (struct tagHPD_CONTACT *)v14) )
        {
          v5 = 1;
          RIMCmAddContactSuppressionReasons(a2, v14, 1LL);
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v14) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v16) = 4;
              WPP_RECORDER_SF_dDD(
                v17,
                v16,
                v18,
                25,
                (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
                *(_DWORD *)v14,
                *(_DWORD *)(v14 + 8),
                *(_DWORD *)(v14 + 2660));
            }
            RIMSetContactEndState(a2, v14, v3, v29, 1);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v16) = 4;
              WPP_RECORDER_SF_dDD(
                v17,
                v16,
                v18,
                26,
                (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
                *(_DWORD *)v14,
                *(_DWORD *)(v14 + 8),
                *(_DWORD *)(v14 + 2660));
            }
            *(_DWORD *)(v14 + 2340) &= ~1u;
            if ( (*(_DWORD *)(v14 + 32) & 8) != 0 )
            {
              if ( *(_QWORD *)(a2 + 960) != v14 )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 932);
              RIMResetPointerDevicePrimaryContact(a2);
              if ( (*(_DWORD *)(a2 + 312) & 1) != 0 )
              {
                if ( *(_QWORD *)(a1 + 480) != a2 )
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 937);
                RIMUpdatePrimaryDevice(a1, 0LL);
              }
            }
          }
        }
      }
    }
    RIMCmActiveContactsNext(a2, &v24);
  }
  result = rimAbShouldButtonContactBeSuppressed(a1, a2, v5);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    v21 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v22, ButtonContact, 1LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v23, 1, 27, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
    }
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), v21, v3, v29, 1);
  }
  return result;
}

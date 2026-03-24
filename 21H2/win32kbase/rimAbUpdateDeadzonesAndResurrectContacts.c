/*
 * XREFs of rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0159CF4
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A14C (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C0158960 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0158ACC (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0158DCC (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C0159378 (rimAbRemoveGlobalPenDeadzone.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C015A86C (WPP_RECORDER_SF_dDD.c)
 *     RIMCmActiveContactsBegin @ 0x1C017FC18 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C017FD1C (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017FD8C (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01803F4 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0180440 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0180494 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x1C01804B4 (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0180588 (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimAbUpdateDeadzonesAndResurrectContacts(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 active; // rax
  __int64 v6; // xmm1_8
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rbx
  int v13; // ecx
  int v14; // edx
  __int64 v15; // r8
  int v16; // edx
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // ecx
  int v21; // r8d
  __int128 v22; // [rsp+58h] [rbp-51h] BYREF
  __int64 v23; // [rsp+68h] [rbp-41h]
  __int128 v24; // [rsp+70h] [rbp-39h]
  __int64 v25; // [rsp+80h] [rbp-29h]
  __int128 v26; // [rsp+90h] [rbp-19h] BYREF
  _BYTE v27[24]; // [rsp+A0h] [rbp-9h] BYREF
  _BYTE v28[72]; // [rsp+B8h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 480);
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 708);
  active = RIMCmActiveContactsBegin(v27, v2);
  v6 = *(_QWORD *)(active + 16);
  v22 = *(_OWORD *)active;
  v23 = v6;
  while ( 1 )
  {
    v7 = RIMCmActiveContactsEnd(v28, v2);
    v8 = *(_OWORD *)v7;
    v9 = *(_QWORD *)(v7 + 16);
    v10 = *(_QWORD *)v7;
    v25 = v9;
    v24 = v8;
    if ( (_QWORD)v22 == v10 )
    {
      result = DWORD2(v24);
      if ( DWORD2(v22) == DWORD2(v24) && v23 == v25 )
        return result;
    }
    v12 = v23 - 16;
    if ( (*(_DWORD *)(v23 + 16) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 722);
    if ( (*(_DWORD *)(v12 + 2340) & 1) != 0 )
    {
      v13 = *(_DWORD *)(v2 + 24);
      if ( (unsigned int)(v13 - 5) > 1 )
      {
        if ( (unsigned int)(v13 - 1) <= 3 )
        {
          if ( (*(_DWORD *)(v12 + 32) & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 753);
          v15 = *(_QWORD *)(v12 + 72);
          v26 = *(_OWORD *)(*(_QWORD *)(a2 + 480) + 176LL);
          if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, &v26, v15) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v16) = 4;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 22, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
            }
            if ( !*(_DWORD *)(a1 + 492) )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 763);
            *(_DWORD *)(a1 + 504) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                                  + 250;
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(v12 + 32) & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 733);
        if ( (*(_DWORD *)(v12 + 2420) & 2) != 0 )
        {
          if ( *(_DWORD *)(a1 + 492) )
          {
            rimAbRemoveGlobalPenDeadzone(a1);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v14) = 4;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 21, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
            }
          }
        }
        else
        {
          rimAbCreateGlobalPenDeadzone(a1, *(_QWORD *)(v12 + 72));
        }
      }
      if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v12) )
      {
        v20 = *(_DWORD *)(v12 + 2420);
        if ( (v20 & 2) == 0 )
        {
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v12) && (*(_DWORD *)(v12 + 32) & 4) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 801);
LABEL_41:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v17) = 4;
            WPP_RECORDER_SF_dDD(
              v20,
              v17,
              v19,
              24,
              (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids,
              *(_DWORD *)v12,
              *(_DWORD *)(v12 + 8),
              *(_DWORD *)(v12 + 2660));
          }
          if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v12) && (*(_DWORD *)(v12 + 32) & 4) == 0 )
          {
            v21 = 817;
            goto LABEL_50;
          }
          goto LABEL_51;
        }
        if ( (unsigned int)(*(_DWORD *)(v2 + 24) - 5) > 1 )
          goto LABEL_41;
        if ( (v20 & 4) == 0 )
        {
          if ( (*(_DWORD *)(v12 + 32) & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 787);
          if ( (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, v2, v12 + 2408) )
            goto LABEL_41;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v17) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v17, 1, 23, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
          }
        }
        RIMCmRemoveContactSuppressionReasons(v2, v12, 1LL);
        if ( (unsigned int)RIMCmIsContactSuppressed(v12) )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 807);
      }
      else if ( (unsigned int)RIMCmIsContactSuppressed(v18)
             && !(unsigned int)RIMCmIsContactDeliveringPointerData(v12)
             && !(unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(v12) )
      {
        v21 = 831;
LABEL_50:
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, v21);
LABEL_51:
        *(_DWORD *)(v12 + 2340) &= ~1u;
      }
    }
    RIMCmActiveContactsNext(v2, &v22);
  }
}

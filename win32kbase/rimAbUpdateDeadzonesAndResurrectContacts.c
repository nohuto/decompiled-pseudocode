__int64 __fastcall rimAbUpdateDeadzonesAndResurrectContacts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 active; // rax
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  __int64 result; // rax
  int v16; // ecx
  __int64 v17; // rbx
  __int64 v18; // rdx
  int v19; // edx
  int v20; // r8d
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // r8d
  __int64 v25; // r9
  int v26; // ecx
  int v27; // edx
  int v28; // edi
  int v29; // r8d
  int v30; // [rsp+28h] [rbp-71h]
  __int128 v31; // [rsp+78h] [rbp-21h] BYREF
  __int64 v32; // [rsp+88h] [rbp-11h]
  __int128 v33; // [rsp+90h] [rbp-9h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+7h]
  _BYTE v35[72]; // [rsp+A8h] [rbp+Fh] BYREF

  v4 = *(_QWORD *)(a2 + 472);
  if ( !*(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 436) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 715);
  active = RIMCmActiveContactsBegin((__int64)&v33, v4);
  v8 = *(_QWORD *)(active + 16);
  v31 = *(_OWORD *)active;
  v32 = v8;
  while ( 1 )
  {
    v9 = RIMCmActiveContactsEnd((__int64)v35, v4);
    v12 = *(_OWORD *)v9;
    v13 = *(_QWORD *)(v9 + 16);
    v14 = *(_QWORD *)v9;
    v34 = v13;
    v33 = v12;
    if ( (_QWORD)v31 == v14 )
    {
      result = DWORD2(v33);
      if ( DWORD2(v31) == DWORD2(v33) && v32 == v34 )
        return result;
    }
    v16 = *(_DWORD *)(v32 + 16);
    v17 = v32 - 16;
    if ( (v16 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 729);
      v16 = *(_DWORD *)(v17 + 32);
    }
    if ( (*(_DWORD *)(v17 + 2364) & 1) == 0 )
      goto LABEL_74;
    v18 = *(unsigned int *)(v4 + 24);
    if ( (unsigned int)(v18 - 5) <= 1 )
    {
      if ( (v16 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 740);
      if ( (*(_DWORD *)(v17 + 2444) & 2) != 0 )
      {
        if ( *(_DWORD *)(a1 + 492) )
        {
          rimAbRemoveGlobalPenDeadzone(a1, v18, v10, v11);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v21) = 0;
          }
          if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v21,
              v22,
              (_DWORD)gRimLog,
              4,
              1,
              21,
              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
          }
        }
      }
      else
      {
        rimAbCreateGlobalPenDeadzone(a1, (_OWORD *)(v4 + 156), (_OWORD *)(v17 + 2432), v11);
      }
    }
    else if ( (unsigned int)(v18 - 1) <= 3 )
    {
      if ( (v16 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 761);
      if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, *(_QWORD *)(a2 + 472) + 156LL, v17 + 2432, v11) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v19) = 0;
        }
        if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v19,
            v20,
            (_DWORD)gRimLog,
            4,
            1,
            22,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
        if ( !*(_DWORD *)(a1 + 492) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 771);
        *(_DWORD *)(a1 + 704) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                              + 250;
      }
    }
    if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v17) )
    {
      v26 = *(_DWORD *)(v17 + 2444);
      v27 = 2;
      v28 = 0;
      if ( (v26 & 2) == 0 )
      {
        if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v17) && (*(_DWORD *)(v17 + 32) & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 809);
LABEL_58:
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v27) = 0;
        }
        if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dDD(
            WPP_GLOBAL_Control->AttachedDevice,
            v27,
            v24,
            24,
            4,
            v30,
            24,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
            *(_DWORD *)v17,
            *(_DWORD *)(v17 + 8),
            *(_DWORD *)(v17 + 2684));
        }
        if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v17) && (*(_DWORD *)(v17 + 32) & 4) == 0 )
        {
          v29 = 825;
          goto LABEL_68;
        }
        goto LABEL_69;
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 24) - 5) <= 1 )
      {
        if ( (v26 & 4) != 0 )
          goto LABEL_51;
        if ( (*(_DWORD *)(v17 + 32) & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 795);
        if ( !(unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, v4, v17 + 2432, v25) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v27) = 0;
          }
          if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v27,
              v24,
              (_DWORD)gRimLog,
              4,
              1,
              23,
              (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
          }
LABEL_51:
          v28 = 1;
        }
      }
      if ( !v28 )
        goto LABEL_58;
      RIMCmRemoveContactSuppressionReasons(v4, v17, 1LL);
      if ( (unsigned int)RIMCmIsContactSuppressed(v17) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 815);
      goto LABEL_74;
    }
    if ( (unsigned int)RIMCmIsContactSuppressed(v23)
      && !(unsigned int)RIMCmIsContactDeliveringPointerData(v17)
      && !(unsigned int)RIMCmIsSuppressedContactMarkedForDelivery(v17) )
    {
      v29 = 839;
LABEL_68:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v29);
LABEL_69:
      *(_DWORD *)(v17 + 2364) &= ~1u;
    }
LABEL_74:
    RIMCmActiveContactsNext(v4, &v31);
  }
}

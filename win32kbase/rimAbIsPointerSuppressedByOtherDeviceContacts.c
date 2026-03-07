__int64 __fastcall rimAbIsPointerSuppressedByOtherDeviceContacts(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  __int64 active; // rax
  __int64 v9; // xmm1_8
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int64 v16; // rax
  char v17; // bl
  int v18; // edx
  int v19; // r8d
  int v21; // [rsp+28h] [rbp-E0h]
  __int128 v22; // [rsp+90h] [rbp-78h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-68h]
  __int64 v24; // [rsp+A8h] [rbp-60h] BYREF
  int v25; // [rsp+B0h] [rbp-58h]
  __int64 v26; // [rsp+B8h] [rbp-50h]
  _OWORD v27[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v28; // [rsp+E8h] [rbp-20h]
  __int128 v29; // [rsp+F8h] [rbp-10h]
  __int128 v30; // [rsp+108h] [rbp+0h]
  __int128 v31; // [rsp+118h] [rbp+10h]

  v4 = a4;
  if ( !*(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 436) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 329);
  if ( *a1 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v24, a3);
    v9 = *(_QWORD *)(active + 16);
    v22 = *(_OWORD *)active;
    v23 = v9;
    while ( 1 )
    {
      RIMCmActiveContactsEnd((__int64)&v24, a3);
      v10 = v23;
      if ( (_QWORD)v22 == v24 && DWORD2(v22) == v25 && v23 == v26 )
        return 0LL;
      v11 = *(_DWORD *)(v23 + 16);
      v12 = v4 != 0 ? 2672LL : 2432LL;
      v13 = *(_OWORD *)(v12 + v23);
      v27[0] = *(_OWORD *)(v12 + v23 - 16);
      v27[1] = v13;
      v14 = *(_OWORD *)(v12 + v23 + 32);
      v28 = *(_OWORD *)(v12 + v23 + 16);
      v29 = v14;
      v15 = *(_OWORD *)(v12 + v23 + 64);
      v30 = *(_OWORD *)(v12 + v23 + 48);
      v31 = v15;
      if ( (v11 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 350);
      if ( (*(_DWORD *)(v10 + 16) & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 351);
      if ( (unsigned int)RIMCmIsContactSuppressed(v10 - 16) )
      {
        if ( (unsigned int)(*(_DWORD *)(a3 + 24) - 5) > 1
          || !(unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v10 - 16) )
        {
          goto LABEL_19;
        }
        v16 = *(_QWORD *)(v10 + 72);
        v17 = BYTE12(v27[0]) | 2;
        HIDWORD(v27[0]) |= 2u;
        LODWORD(v27[0]) = 3;
        *((_QWORD *)&v28 + 1) = v16;
      }
      else
      {
        v17 = BYTE12(v27[0]);
      }
      if ( (v17 & 2) != 0
        && (unsigned __int8)rimAbIsPointerSuppressedByPointer(
                              (int)a2 + 156,
                              (_DWORD)a1,
                              (int)a3 + 156,
                              (unsigned int)v27,
                              (*(_DWORD *)(a2 + 360) & 8u) >> 3) )
      {
        LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dDdddDdd(WPP_GLOBAL_Control->AttachedDevice, v18, v19, *a1, v21);
        }
        return 1LL;
      }
LABEL_19:
      RIMCmActiveContactsNext(a3, &v22);
    }
  }
  return 0LL;
}

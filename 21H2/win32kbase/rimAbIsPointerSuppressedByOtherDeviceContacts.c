/*
 * XREFs of rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0187010
 * Callers:
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0186F84 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0187718 (rimAbSuppressLowerRankActivityForFrame.c)
 * Callees:
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     rimAbIsPointerSuppressedByPointer @ 0x1C018724C (rimAbIsPointerSuppressedByPointer.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDdddDdd @ 0x1C0189298 (WPP_RECORDER_AND_TRACE_SF_dDdddDdd.c)
 *     RIMGetPointerInputType @ 0x1C019369C (RIMGetPointerInputType.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01B609C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactSuppressed @ 0x1C01B6958 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C01B6984 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherDeviceContacts(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 active; // rax
  __int64 v9; // r8
  __int64 v10; // xmm1_8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int64 v19; // rax
  char v20; // bl
  int v21; // edx
  int v22; // r8d
  int v24; // [rsp+28h] [rbp-E0h]
  __int128 v25; // [rsp+88h] [rbp-80h] BYREF
  __int64 v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h] BYREF
  int v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  _OWORD v30[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v31; // [rsp+D8h] [rbp-30h]
  __int128 v32; // [rsp+E8h] [rbp-20h]
  __int128 v33; // [rsp+F8h] [rbp-10h]
  __int128 v34; // [rsp+108h] [rbp+0h]

  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *a1 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v27, a3);
    v10 = *(_QWORD *)(active + 16);
    v25 = *(_OWORD *)active;
    v26 = v10;
    while ( 1 )
    {
      RIMCmActiveContactsEnd((__int64)&v27, a3, v9);
      v13 = v26;
      if ( (_QWORD)v25 == v27 && DWORD2(v25) == v28 && v26 == v29 )
        return 0LL;
      v14 = *(_DWORD *)(v26 + 16);
      v15 = a4 != 0 ? 2648LL : 2408LL;
      v16 = *(_OWORD *)(v15 + v26);
      v30[0] = *(_OWORD *)(v15 + v26 - 16);
      v30[1] = v16;
      v17 = *(_OWORD *)(v15 + v26 + 32);
      v31 = *(_OWORD *)(v15 + v26 + 16);
      v32 = v17;
      v18 = *(_OWORD *)(v15 + v26 + 64);
      v33 = *(_OWORD *)(v15 + v26 + 48);
      v34 = v18;
      if ( (v14 & 2) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v11, v12);
        v14 = *(_DWORD *)(v13 + 16);
      }
      if ( (v14 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v11, v12);
      if ( (unsigned int)RIMCmIsContactSuppressed(v13 - 16) )
      {
        if ( (unsigned int)(*(_DWORD *)(a3 + 24) - 5) > 1
          || !(unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v13 - 16) )
        {
          goto LABEL_19;
        }
        v19 = *(_QWORD *)(v13 + 56);
        v20 = BYTE12(v30[0]) | 2;
        HIDWORD(v30[0]) |= 2u;
        LODWORD(v30[0]) = 3;
        *((_QWORD *)&v31 + 1) = v19;
      }
      else
      {
        v20 = BYTE12(v30[0]);
      }
      if ( (v20 & 2) != 0
        && (unsigned __int8)rimAbIsPointerSuppressedByPointer(
                              (int)a2 + 156,
                              (_DWORD)a1,
                              (int)a3 + 156,
                              (unsigned int)v30,
                              (*(_DWORD *)(a2 + 360) & 8u) >> 3) )
      {
        LOBYTE(v21) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dDdddDdd(WPP_GLOBAL_Control->AttachedDevice, v21, v22, *a1, v24);
        }
        return 1LL;
      }
LABEL_19:
      RIMCmActiveContactsNext(a3, &v25);
    }
  }
  return 0LL;
}

/*
 * XREFs of rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0158D94
 * Callers:
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0158CFC (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0159500 (rimAbSuppressLowerRankActivityForFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointerSuppressedByPointer @ 0x1C0158FF8 (rimAbIsPointerSuppressedByPointer.c)
 *     WPP_RECORDER_SF_dDdddDdd @ 0x1C015A9B0 (WPP_RECORDER_SF_dDdddDdd.c)
 *     RIMGetPointerInputType @ 0x1C015E558 (RIMGetPointerInputType.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C017FBB8 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C017FC4C (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017FCBC (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactSuppressed @ 0x1C0180370 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C01803C4 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherDeviceContacts(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 active; // rax
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  __int64 v11; // rbx
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int64 v20; // rax
  char v21; // cl
  __int64 v22; // r9
  int v23; // edx
  int v24; // r8d
  int v25; // r9d
  __int128 v27; // [rsp+80h] [rbp-88h] BYREF
  __int64 v28; // [rsp+90h] [rbp-78h]
  __int128 v29; // [rsp+98h] [rbp-70h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-60h]
  _OWORD v31[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v32; // [rsp+D8h] [rbp-30h]
  __int128 v33; // [rsp+E8h] [rbp-20h]
  __int128 v34; // [rsp+F8h] [rbp-10h]
  __int128 v35; // [rsp+108h] [rbp+0h]
  _OWORD v36[2]; // [rsp+118h] [rbp+10h] BYREF

  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 323);
  if ( *a1 != (unsigned int)RIMGetPointerInputType(a3) )
  {
    active = RIMCmActiveContactsBeginNoButton(&v29, a3);
    v9 = *(_QWORD *)(active + 16);
    v27 = *(_OWORD *)active;
    v28 = v9;
    while ( 1 )
    {
      v10 = RIMCmActiveContactsEnd(v36, a3);
      v11 = v28;
      v12 = *(_OWORD *)v10;
      v13 = *(_QWORD *)(v10 + 16);
      v14 = *(_QWORD *)v10;
      v30 = v13;
      v29 = v12;
      if ( (_QWORD)v27 == v14 && DWORD2(v27) == DWORD2(v29) && v28 == v30 )
        return 0LL;
      v15 = *(_DWORD *)(v28 + 16);
      v16 = a4 != 0 ? 2648LL : 2408LL;
      v17 = *(_OWORD *)(v16 + v28);
      v31[0] = *(_OWORD *)(v16 + v28 - 16);
      v31[1] = v17;
      v18 = *(_OWORD *)(v16 + v28 + 32);
      v32 = *(_OWORD *)(v16 + v28 + 16);
      v33 = v18;
      v19 = *(_OWORD *)(v16 + v28 + 64);
      v34 = *(_OWORD *)(v16 + v28 + 48);
      v35 = v19;
      if ( (v15 & 2) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 344);
        v15 = *(_DWORD *)(v11 + 16);
      }
      if ( (v15 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 345);
      if ( (unsigned int)RIMCmIsContactSuppressed(v11 - 16) )
      {
        if ( (unsigned int)(*(_DWORD *)(a3 + 24) - 5) > 1
          || !(unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v11 - 16) )
        {
          goto LABEL_19;
        }
        v20 = *(_QWORD *)(v11 + 56);
        v21 = BYTE12(v31[0]) | 2;
        HIDWORD(v31[0]) |= 2u;
        LODWORD(v31[0]) = 3;
        *((_QWORD *)&v32 + 1) = v20;
      }
      else
      {
        v21 = BYTE12(v31[0]);
      }
      if ( (v21 & 2) != 0 )
      {
        v22 = (unsigned int)-__CFSHR__(*(_DWORD *)(a2 + 312), 4);
        v36[0] = *(_OWORD *)(a3 + 176);
        if ( (unsigned int)rimAbIsPointerSuppressedByPointer(v36, a1, v31, v22) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dDdddDdd(*a1, v23, v24, v25);
          return 1LL;
        }
      }
LABEL_19:
      RIMCmActiveContactsNext(a3, &v27);
    }
  }
  return 0LL;
}

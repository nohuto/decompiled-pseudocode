/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x1C0172AA8
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01714F4 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     rimFindHoldingFrame @ 0x1C00A6778 (rimFindHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013705C (WPP_RECORDER_SF_Dd.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C017FC88 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C017FD1C (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017FD8C (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1C018039C (RIMCmGetButtonContact.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r15
  __int64 v6; // rdi
  int v7; // edx
  _QWORD *HoldingFrame; // rbx
  unsigned int v9; // ecx
  void *v10; // rax
  __int64 ButtonContact; // rsi
  int v13; // ecx
  _OWORD *v14; // rax
  _OWORD *v15; // rax
  __int64 active; // rax
  __int64 v17; // xmm1_8
  __int64 v18; // rax
  __int64 v19; // rdi
  __int128 v20; // xmm1
  __int64 v21; // xmm0_8
  __int64 v22; // rax
  int v23; // eax
  _OWORD *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  _OWORD *v27; // rax
  _OWORD *v28; // rsi
  __int128 v29; // [rsp+48h] [rbp-21h] BYREF
  __int64 v30; // [rsp+58h] [rbp-11h]
  __int128 v31; // [rsp+60h] [rbp-9h] BYREF
  __int64 v32; // [rsp+70h] [rbp+7h]
  _BYTE v33[72]; // [rsp+78h] [rbp+Fh] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  v6 = a3;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !(_DWORD)v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 646);
  if ( !HoldingFrame )
    return 0LL;
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 653);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 654);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 655);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 656);
  if ( (_DWORD)v6 && (v9 = 192 * v6, (unsigned __int64)(192 * v6) <= 0xFFFFFFFF) && v9 )
    v10 = Win32AllocPoolZInit(v9, 1701868370LL);
  else
    v10 = 0LL;
  HoldingFrame[9] = v10;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 47, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
    }
    return 0LL;
  }
  *((_DWORD *)HoldingFrame + 10) = v6;
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 667);
  if ( a4 )
  {
    ButtonContact = RIMCmGetButtonContact(v4);
    v13 = *(_DWORD *)(ButtonContact + 32);
    if ( (v13 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 673);
      v13 = *(_DWORD *)(ButtonContact + 32);
    }
    if ( (v13 & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 674);
    if ( (*(_DWORD *)(ButtonContact + 2420) & 0x2000) != 0 )
    {
      if ( HoldingFrame[10] )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 677);
      v14 = (_OWORD *)HoldingFrame[9];
      HoldingFrame[10] = v14;
    }
    else
    {
      v14 = (_OWORD *)HoldingFrame[9];
    }
    *v14 = *(_OWORD *)(ButtonContact + 2392);
    v14[1] = *(_OWORD *)(ButtonContact + 2408);
    v14[2] = *(_OWORD *)(ButtonContact + 2424);
    v14[3] = *(_OWORD *)(ButtonContact + 2440);
    v14[4] = *(_OWORD *)(ButtonContact + 2456);
    v14[5] = *(_OWORD *)(ButtonContact + 2472);
    v14[6] = *(_OWORD *)(ButtonContact + 2488);
    v15 = v14 + 8;
    *(v15 - 1) = *(_OWORD *)(ButtonContact + 2504);
    *v15 = *(_OWORD *)(ButtonContact + 2520);
    v15[1] = *(_OWORD *)(ButtonContact + 2536);
    v15[2] = *(_OWORD *)(ButtonContact + 2552);
    v15[3] = *(_OWORD *)(ButtonContact + 2568);
    *((_DWORD *)HoldingFrame + 11) = 1;
  }
  else
  {
    active = RIMCmActiveContactsBeginNoButton(&v31, v4);
    v17 = *(_QWORD *)(active + 16);
    v29 = *(_OWORD *)active;
    v30 = v17;
    while ( 1 )
    {
      v18 = RIMCmActiveContactsEnd(v33, v4);
      v19 = v30;
      v20 = *(_OWORD *)v18;
      v21 = *(_QWORD *)(v18 + 16);
      v22 = *(_QWORD *)v18;
      v32 = v21;
      v31 = v20;
      if ( (_QWORD)v29 == v22 && DWORD2(v29) == DWORD2(v31) && v30 == v32 )
        break;
      v23 = *(_DWORD *)(v30 + 16);
      v24 = (_OWORD *)(v30 + 2376);
      if ( (v23 & 2) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 692);
        v23 = *(_DWORD *)(v19 + 16);
      }
      if ( (v23 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 693);
      if ( (*(_DWORD *)(v19 + 2324) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v19 + 2404) & 0x2000) != 0 )
        {
          if ( HoldingFrame[10] )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 706);
          v25 = *((unsigned int *)HoldingFrame + 11);
          v26 = HoldingFrame[9];
          HoldingFrame[10] = v26 + 192 * v25;
        }
        else
        {
          LODWORD(v25) = *((_DWORD *)HoldingFrame + 11);
          v26 = HoldingFrame[9];
        }
        v27 = (_OWORD *)(v26 + 192LL * (unsigned int)v25);
        *v27 = *v24;
        v27[1] = *(_OWORD *)(v19 + 2392);
        v27[2] = *(_OWORD *)(v19 + 2408);
        v27[3] = *(_OWORD *)(v19 + 2424);
        v27[4] = *(_OWORD *)(v19 + 2440);
        v27[5] = *(_OWORD *)(v19 + 2456);
        v27[6] = *(_OWORD *)(v19 + 2472);
        v27 += 8;
        v28 = v24 + 8;
        *(v27 - 1) = *(_OWORD *)(v19 + 2488);
        *v27 = *v28;
        v27[1] = v28[1];
        v27[2] = v28[2];
        v27[3] = v28[3];
        ++*((_DWORD *)HoldingFrame + 11);
      }
      RIMCmActiveContactsNext(v4, &v29);
    }
  }
  if ( *((_DWORD *)HoldingFrame + 11) != *((_DWORD *)HoldingFrame + 10) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dd(
        (__int64)gRimLog,
        4u,
        1u,
        0x30u,
        (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
        *((_DWORD *)HoldingFrame + 11),
        *((_DWORD *)HoldingFrame + 10));
    return 0LL;
  }
  return 1LL;
}

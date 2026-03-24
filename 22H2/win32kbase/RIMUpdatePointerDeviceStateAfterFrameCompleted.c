/*
 * XREFs of RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C017889C
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x1C0171344 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0171424 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMRemoveFromActiveDevices @ 0x1C015F42C (RIMRemoveFromActiveDevices.c)
 *     RIMUpdatePrimaryDevice @ 0x1C015FC9C (RIMUpdatePrimaryDevice.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C01786A4 (RIMResetPointerDevicePrimaryContact.c)
 *     RIMCmActiveContactsBegin @ 0x1C017FB48 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C017FC4C (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017FCBC (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C01800E0 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0180324 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmResetContactFrameState @ 0x1C01805B8 (RIMCmResetContactFrameState.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C01CA6DC (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceStateAfterFrameCompleted(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rbx
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // [rsp+28h] [rbp-48h] BYREF
  __int64 v36; // [rsp+38h] [rbp-38h]
  __int128 v37; // [rsp+40h] [rbp-30h] BYREF
  __int64 v38; // [rsp+50h] [rbp-20h]
  _BYTE v39[24]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  v8 = *(_QWORD *)(v4 + 712);
  v9 = v8;
  if ( a3 && a4 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 774);
    v9 = *(_QWORD *)(v4 + 712);
  }
  if ( v9 )
    *(_DWORD *)(v8 + 36) = 0;
  active = RIMCmActiveContactsBegin(&v37, v4);
  v11 = *(_QWORD *)(active + 16);
  v35 = *(_OWORD *)active;
  v36 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v39, v4);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v38 = v14;
    v37 = v13;
    if ( (_QWORD)v35 == v15 )
    {
      result = DWORD2(v37);
      if ( DWORD2(v35) == DWORD2(v37) && v36 == v38 )
        break;
    }
    v17 = v36 - 16;
    if ( (*(_DWORD *)(v36 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v4, &v35);
    if ( a3 && (*(_DWORD *)(v17 + 2340) & 1) != 0 )
    {
      if ( (*(_DWORD *)(v17 + 2660) & 4) == 0 )
      {
        v18 = *(_DWORD *)(v17 + 2420);
        if ( (v18 & 4) != 0 )
        {
          v19 = *(unsigned int *)(v17 + 32);
          if ( (v19 & 4) == 0 && (v18 & 0x10000) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 803);
            v19 = *(unsigned int *)(v17 + 32);
          }
          v20 = (unsigned int)(*(_DWORD *)(a1 + 468) + 1);
          *(_DWORD *)(a1 + 468) = v20;
          if ( (v19 & 4) == 0 )
            ++*(_DWORD *)(a1 + 472);
          goto LABEL_28;
        }
      }
      if ( (*(_DWORD *)(v17 + 2660) & 4) != 0 )
      {
        v21 = *(_DWORD *)(v17 + 2420);
        if ( (v21 & 4) == 0 )
        {
          v19 = *(unsigned int *)(v17 + 32);
          if ( (v19 & 4) == 0 && (v21 & 0x40000) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 812);
            v19 = *(unsigned int *)(v17 + 32);
          }
          v20 = (unsigned int)(*(_DWORD *)(a1 + 468) - 1);
          *(_DWORD *)(a1 + 468) = v20;
          if ( (v19 & 4) == 0 )
            --*(_DWORD *)(a1 + 472);
LABEL_28:
          ApiSetDwmAsyncNotifyDigitizerActiveContacts(v19, v20);
        }
      }
      if ( (*(_DWORD *)(v17 + 32) & 8) != 0 && (*(_DWORD *)(v17 + 2660) & 2) != 0 && (*(_DWORD *)(v17 + 2420) & 2) == 0 )
      {
        if ( *(_QWORD *)(v4 + 960) != v17 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 820);
        RIMResetPointerDevicePrimaryContact(v4);
      }
      v22 = *(_OWORD *)(v17 + 2360);
      *(_OWORD *)(v17 + 2584) = *(_OWORD *)(v17 + 2344);
      v23 = *(_OWORD *)(v17 + 2376);
      *(_OWORD *)(v17 + 2600) = v22;
      v24 = *(_OWORD *)(v17 + 2392);
      *(_OWORD *)(v17 + 2616) = v23;
      v25 = *(_OWORD *)(v17 + 2408);
      *(_OWORD *)(v17 + 2632) = v24;
      v26 = *(_OWORD *)(v17 + 2424);
      *(_OWORD *)(v17 + 2648) = v25;
      v27 = *(_OWORD *)(v17 + 2440);
      *(_OWORD *)(v17 + 2664) = v26;
      v28 = *(_OWORD *)(v17 + 2456);
      *(_OWORD *)(v17 + 2680) = v27;
      *(_OWORD *)(v17 + 2696) = v28;
      v29 = *(_OWORD *)(v17 + 2488);
      *(_OWORD *)(v17 + 2712) = *(_OWORD *)(v17 + 2472);
      v30 = *(_OWORD *)(v17 + 2504);
      *(_OWORD *)(v17 + 2728) = v29;
      v31 = *(_OWORD *)(v17 + 2520);
      *(_OWORD *)(v17 + 2744) = v30;
      v32 = *(_OWORD *)(v17 + 2536);
      *(_OWORD *)(v17 + 2760) = v31;
      v33 = *(_OWORD *)(v17 + 2552);
      *(_OWORD *)(v17 + 2776) = v32;
      v34 = *(_OWORD *)(v17 + 2568);
      *(_OWORD *)(v17 + 2792) = v33;
      *(_OWORD *)(v17 + 2808) = v34;
    }
    if ( a4 || (*(_DWORD *)(v17 + 2340) & 4) == 0 )
    {
      RIMCmResetContactFrameState(v17);
    }
    else
    {
      if ( (*(_DWORD *)(v17 + 32) & 8) != 0 )
      {
        if ( *(_QWORD *)(v4 + 960) != v17 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 836);
        RIMResetPointerDevicePrimaryContact(v4);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v17) )
      {
        if ( (*(_DWORD *)(v17 + 32) & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 842);
      }
      RIMCmDeactivateContact(v4, v17);
    }
  }
  if ( !a4 )
  {
    if ( v4 == *(_QWORD *)(a1 + 480) && !*(_DWORD *)(v4 + 956) )
      result = RIMUpdatePrimaryDevice(a1, 0LL);
    if ( !*(_DWORD *)(v4 + 952) )
    {
      RIMRemoveFromActiveDevices(a1, v4, 0, 0LL);
      result = 0LL;
      *(_OWORD *)(v4 + 784) = 0LL;
      *(_OWORD *)(v4 + 800) = 0LL;
      *(_OWORD *)(v4 + 816) = 0LL;
      *(_QWORD *)(v4 + 832) = 0LL;
    }
  }
  return result;
}

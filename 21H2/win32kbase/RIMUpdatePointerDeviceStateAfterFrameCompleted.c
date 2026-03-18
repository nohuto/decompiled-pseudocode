/*
 * XREFs of RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01ADFB4
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C0191610 (RIMEndAllActiveContacts.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01A614C (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01AF120 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     RIMCmActiveContactsBegin @ 0x1C00E74FA (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0194D44 (RIMRemoveFromActiveDevices.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0195A10 (RIMUpdatePrimaryDevice.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C01ADE28 (RIMResetPointerDevicePrimaryContact.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C01B6684 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01B6928 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmResetContactFrameState @ 0x1C01B6A90 (RIMCmResetContactFrameState.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C0205F80 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceStateAfterFrameCompleted(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  int v6; // r15d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 active; // rax
  __int64 v11; // r8
  __int64 v12; // xmm1_8
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int128 v41; // [rsp+20h] [rbp-50h] BYREF
  __int64 v42; // [rsp+30h] [rbp-40h]
  __int128 v43; // [rsp+38h] [rbp-38h] BYREF
  __int64 v44; // [rsp+48h] [rbp-28h]
  _BYTE v45[32]; // [rsp+50h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a2 + 472);
  v6 = a3;
  v8 = *(_QWORD *)(v4 + 760);
  v9 = v8;
  if ( (_DWORD)a3 && a4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v9 = *(_QWORD *)(v4 + 760);
  }
  if ( v9 )
    *(_DWORD *)(v8 + 36) = 0;
  active = RIMCmActiveContactsBegin((__int64)&v43, v4, a3);
  v12 = *(_QWORD *)(active + 16);
  v41 = *(_OWORD *)active;
  v42 = v12;
  while ( 1 )
  {
    v13 = RIMCmActiveContactsEnd((__int64)v45, v4, v11);
    v14 = *(_OWORD *)v13;
    v15 = *(_QWORD *)(v13 + 16);
    v16 = *(_QWORD *)v13;
    v44 = v15;
    v43 = v14;
    if ( (_QWORD)v41 == v16 )
    {
      result = DWORD2(v43);
      if ( DWORD2(v41) == DWORD2(v43) && v42 == v44 )
        break;
    }
    v18 = v42 - 16;
    if ( (*(_DWORD *)(v42 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v4, &v41);
    if ( v6 && (*(_DWORD *)(v18 + 2340) & 1) != 0 )
    {
      v22 = *(_DWORD *)(v18 + 2420);
      if ( (*(_DWORD *)(v18 + 2660) & 4) != 0 )
      {
        if ( (v22 & 4) == 0 )
        {
          v23 = *(unsigned int *)(v18 + 32);
          if ( (v23 & 4) == 0 && (v22 & 0x40000) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v19, v21);
            v23 = *(unsigned int *)(v18 + 32);
          }
          v24 = (unsigned int)(*(_DWORD *)(a1 + 468) - 1);
          *(_DWORD *)(a1 + 468) = v24;
          if ( (v23 & 4) == 0 )
            --*(_DWORD *)(a1 + 472);
LABEL_27:
          ApiSetDwmAsyncNotifyDigitizerActiveContacts(v23, v24);
        }
      }
      else if ( (v22 & 4) != 0 )
      {
        v23 = *(unsigned int *)(v18 + 32);
        if ( (v23 & 4) == 0 && (v22 & 0x10000) == 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v19, v21);
          v23 = *(unsigned int *)(v18 + 32);
        }
        v24 = (unsigned int)(*(_DWORD *)(a1 + 468) + 1);
        *(_DWORD *)(a1 + 468) = v24;
        if ( (v23 & 4) == 0 )
          ++*(_DWORD *)(a1 + 472);
        goto LABEL_27;
      }
      if ( (*(_DWORD *)(v18 + 32) & 8) != 0 && (*(_DWORD *)(v18 + 2660) & 2) != 0 && (*(_DWORD *)(v18 + 2420) & 2) == 0 )
      {
        if ( *(_QWORD *)(v4 + 1016) != v18 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
        RIMResetPointerDevicePrimaryContact(v4, v19, v21);
      }
      v19 = 128LL;
      v25 = *(_OWORD *)(v18 + 2360);
      *(_OWORD *)(v18 + 2584) = *(_OWORD *)(v18 + 2344);
      v26 = *(_OWORD *)(v18 + 2376);
      *(_OWORD *)(v18 + 2600) = v25;
      v27 = *(_OWORD *)(v18 + 2392);
      *(_OWORD *)(v18 + 2616) = v26;
      v28 = *(_OWORD *)(v18 + 2408);
      *(_OWORD *)(v18 + 2632) = v27;
      v29 = *(_OWORD *)(v18 + 2424);
      *(_OWORD *)(v18 + 2648) = v28;
      v30 = *(_OWORD *)(v18 + 2440);
      *(_OWORD *)(v18 + 2664) = v29;
      v31 = *(_OWORD *)(v18 + 2456);
      *(_OWORD *)(v18 + 2680) = v30;
      v20 = v18 + 2712;
      *(_OWORD *)(v18 + 2696) = v31;
      v32 = *(_OWORD *)(v18 + 2488);
      *(_OWORD *)(v18 + 2712) = *(_OWORD *)(v18 + 2472);
      v33 = *(_OWORD *)(v18 + 2504);
      *(_OWORD *)(v18 + 2728) = v32;
      v34 = *(_OWORD *)(v18 + 2520);
      *(_OWORD *)(v18 + 2744) = v33;
      v35 = *(_OWORD *)(v18 + 2536);
      *(_OWORD *)(v18 + 2760) = v34;
      v36 = *(_OWORD *)(v18 + 2552);
      *(_OWORD *)(v18 + 2776) = v35;
      v37 = *(_OWORD *)(v18 + 2568);
      *(_OWORD *)(v18 + 2792) = v36;
      *(_OWORD *)(v18 + 2808) = v37;
    }
    if ( a4 || (*(_DWORD *)(v18 + 2340) & 4) == 0 )
    {
      RIMCmResetContactFrameState(v18);
    }
    else
    {
      if ( (*(_DWORD *)(v18 + 32) & 8) != 0 )
      {
        if ( *(_QWORD *)(v4 + 1016) != v18 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
        RIMResetPointerDevicePrimaryContact(v4, v19, v21);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v18) )
      {
        if ( (*(_DWORD *)(v18 + 32) & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
      }
      RIMCmDeactivateContact(v4, v18);
    }
  }
  if ( !a4 )
  {
    if ( v4 == *(_QWORD *)(a1 + 504) && !*(_DWORD *)(v4 + 1012) )
      result = RIMUpdatePrimaryDevice(a1, 0LL);
    if ( !*(_DWORD *)(v4 + 1008) )
    {
      RIMRemoveFromActiveDevices(a1, v4, 0, 0LL);
      result = 0LL;
      *(_OWORD *)(v4 + 832) = 0LL;
      *(_OWORD *)(v4 + 848) = 0LL;
      *(_OWORD *)(v4 + 864) = 0LL;
      *(_QWORD *)(v4 + 880) = 0LL;
    }
  }
  return result;
}

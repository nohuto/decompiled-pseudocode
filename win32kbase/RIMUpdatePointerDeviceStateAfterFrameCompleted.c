__int64 __fastcall RIMUpdatePointerDeviceStateAfterFrameCompleted(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdi
  __int64 active; // rax
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdi
  _DWORD *v17; // rsi
  int v18; // eax
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // [rsp+28h] [rbp-48h] BYREF
  __int64 v34; // [rsp+38h] [rbp-38h]
  __int128 v35; // [rsp+40h] [rbp-30h] BYREF
  __int64 v36; // [rsp+50h] [rbp-20h]
  _BYTE v37[24]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a2 + 472);
  v8 = *(_QWORD *)(v4 + 760);
  if ( a3 && a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 789);
  if ( *(_QWORD *)(v4 + 760) )
    *(_DWORD *)(v8 + 36) = 0;
  active = RIMCmActiveContactsBegin((__int64)&v35, v4);
  v10 = *(_QWORD *)(active + 16);
  v33 = *(_OWORD *)active;
  v34 = v10;
  while ( 1 )
  {
    v11 = RIMCmActiveContactsEnd((__int64)v37, v4);
    v12 = *(_OWORD *)v11;
    v13 = *(_QWORD *)(v11 + 16);
    v14 = *(_QWORD *)v11;
    v36 = v13;
    v35 = v12;
    if ( (_QWORD)v33 == v14 )
    {
      result = DWORD2(v35);
      if ( DWORD2(v33) == DWORD2(v35) && v34 == v36 )
        break;
    }
    v16 = v34 - 16;
    if ( (*(_DWORD *)(v34 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v4, &v33);
    if ( a3 && (*(_DWORD *)(v16 + 2364) & 1) != 0 )
    {
      v17 = (_DWORD *)(v16 + 2444);
      if ( (*(_DWORD *)(v16 + 2684) & 4) != 0 || (*v17 & 4) == 0 )
      {
        if ( (*(_DWORD *)(v16 + 2684) & 4) != 0 && (*v17 & 4) == 0 )
        {
          if ( (*(_DWORD *)(v16 + 32) & 4) == 0 && (*v17 & 0x40000) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 827);
          v19 = -__CFSHR__(*(_DWORD *)(v16 + 32), 3);
          --*(_DWORD *)(a1 + 468);
          if ( !v19 )
            --*(_DWORD *)(a1 + 472);
        }
      }
      else
      {
        if ( (*(_DWORD *)(v16 + 32) & 4) == 0 && (*v17 & 0x10000) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 818);
        v18 = -__CFSHR__(*(_DWORD *)(v16 + 32), 3);
        ++*(_DWORD *)(a1 + 468);
        if ( !v18 )
          ++*(_DWORD *)(a1 + 472);
      }
      if ( (*(_DWORD *)(v16 + 32) & 8) != 0 && (*(_DWORD *)(v16 + 2684) & 2) != 0 && (*v17 & 2) == 0 )
      {
        if ( *(_QWORD *)(v4 + 1016) != v16 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 835);
        RIMResetPointerDevicePrimaryContact(v4);
      }
      v20 = *(_OWORD *)(v16 + 2384);
      *(_OWORD *)(v16 + 2608) = *(_OWORD *)(v16 + 2368);
      v21 = *(_OWORD *)(v16 + 2400);
      *(_OWORD *)(v16 + 2624) = v20;
      v22 = *(_OWORD *)(v16 + 2416);
      *(_OWORD *)(v16 + 2640) = v21;
      v23 = *(_OWORD *)(v16 + 2432);
      *(_OWORD *)(v16 + 2656) = v22;
      v24 = *(_OWORD *)(v16 + 2448);
      *(_OWORD *)(v16 + 2672) = v23;
      v25 = *(_OWORD *)(v16 + 2464);
      *(_OWORD *)(v16 + 2688) = v24;
      v26 = *(_OWORD *)(v16 + 2480);
      *(_OWORD *)(v16 + 2704) = v25;
      *(_OWORD *)(v16 + 2720) = v26;
      v27 = *(_OWORD *)(v16 + 2512);
      *(_OWORD *)(v16 + 2736) = *(_OWORD *)(v16 + 2496);
      v28 = *(_OWORD *)(v16 + 2528);
      *(_OWORD *)(v16 + 2752) = v27;
      v29 = *(_OWORD *)(v16 + 2544);
      *(_OWORD *)(v16 + 2768) = v28;
      v30 = *(_OWORD *)(v16 + 2560);
      *(_OWORD *)(v16 + 2784) = v29;
      v31 = *(_OWORD *)(v16 + 2576);
      *(_OWORD *)(v16 + 2800) = v30;
      v32 = *(_OWORD *)(v16 + 2592);
      *(_OWORD *)(v16 + 2816) = v31;
      *(_OWORD *)(v16 + 2832) = v32;
    }
    if ( a4 || (*(_DWORD *)(v16 + 2364) & 4) == 0 )
    {
      RIMCmResetContactFrameState((_DWORD *)v16);
    }
    else
    {
      if ( (*(_DWORD *)(v16 + 32) & 8) != 0 )
      {
        if ( *(_QWORD *)(v4 + 1016) != v16 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 851);
        RIMResetPointerDevicePrimaryContact(v4);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v16) )
      {
        if ( (*(_DWORD *)(v16 + 32) & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 857);
      }
      RIMCmDeactivateContact(v4, v16);
    }
  }
  if ( !a4 )
  {
    if ( v4 == *(_QWORD *)(a1 + 480) && !*(_DWORD *)(v4 + 1012) )
      result = RIMUpdatePrimaryDevice(a1, 0LL);
    if ( !*(_DWORD *)(v4 + 1008) )
    {
      RIMRemoveFromActiveDevices(a1, v4);
      result = 0LL;
      *(_OWORD *)(v4 + 832) = 0LL;
      *(_OWORD *)(v4 + 848) = 0LL;
      *(_OWORD *)(v4 + 864) = 0LL;
      *(_QWORD *)(v4 + 880) = 0LL;
    }
  }
  return result;
}

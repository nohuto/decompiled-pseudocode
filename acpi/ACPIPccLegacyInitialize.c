__int64 __fastcall ACPIPccLegacyInitialize(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // r8
  int v3; // ebx
  _QWORD *v4; // rcx
  __int64 Pool2; // rax
  int v6; // edx
  __int64 v7; // rdi
  __int64 v9; // rcx
  int v10[4]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v11[44]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v12; // [rsp+6Ch] [rbp-4h]
  int v13; // [rsp+80h] [rbp+10h] BYREF
  int v14; // [rsp+84h] [rbp+14h]
  int v15; // [rsp+88h] [rbp+18h] BYREF
  int v16; // [rsp+8Ch] [rbp+1Ch]

  v14 = HIDWORD(a1);
  v1 = RootDeviceExtension;
  v13 = 1;
  memset(v11, 0, sizeof(v11));
  v12 = 0;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v13);
  if ( v13 == 2 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v15 = 0;
    v16 = 1;
    v4 = *(_QWORD **)(v1 + 760);
    *(_OWORD *)v10 = SB_OSC_PCC_UUID;
    ACPIAmliEvaluateOsc(v4, (__int64)v10, v2, 2u, &v15);
    Pool2 = ExAllocatePool2(64LL, 656LL, 1299211073LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      *(_BYTE *)Pool2 = -1;
      v3 = ACPIAmliEvaluatePcch(
             *(_QWORD **)(v1 + 760),
             (__int64)v11,
             Pool2 + 88,
             (_QWORD *)(Pool2 + 72),
             (_QWORD *)(Pool2 + 64));
      if ( v3 >= 0 )
      {
        if ( !v11[3] && (v11[4] & 4) != 0 && (v11[4] & 8) != 0 && (v11[5] & 1) != 0 )
        {
          *(_DWORD *)(v7 + 112) = *(_DWORD *)&v11[38];
          *(_QWORD *)(v7 + 104) = *(_QWORD *)&v11[14];
          v3 = AcpiPccInitializeSubspace((PVOID)v7);
          if ( v3 >= 0 )
          {
            v9 = *(_QWORD *)(v7 + 40);
            *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 112);
            *(_QWORD *)(v7 + 24) = v9;
            AcpiPccLegacySubspace = v7;
            *(_QWORD *)(v7 + 48) = v9 + 12;
            *(_QWORD *)(v7 + 56) = v9 + 14;
            *(_DWORD *)(v7 + 4) = *(_DWORD *)(v7 + 4) & 0xFFFFFFE1 | 4;
            return (unsigned int)v3;
          }
        }
        else
        {
          v3 = -1073741823;
        }
      }
      ExFreePoolWithTag((PVOID)v7, 0x4D706341u);
    }
    else
    {
      v3 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          21,
          10,
          (__int64)&WPP_cb83180b771632eba63c2d8b4b5a28e5_Traceguids);
      }
    }
  }
  return (unsigned int)v3;
}

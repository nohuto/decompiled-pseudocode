char __fastcall IrqArbpFindSuitableRangePci(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // edx
  unsigned __int64 v9; // r15
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+38h] BYREF
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF

  v20 = a1;
  v2 = a2[4];
  v21 = 0;
  v22 = 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  LOBYTE(v20) = 0;
  if ( (int)LinkNodeCrackPrt(v4, &v22, &v21, 1) < 0 )
    return 0;
  if ( !v22 )
  {
    if ( (int)IcGetPossibleInput(v21, v5, &v20) >= 0 && (v20 & 0xB) != 3
      || (unsigned __int64)v21 < a2[2]
      || (unsigned __int64)v21 > a2[3]
      || !(unsigned __int8)IcIsInputValid(v21) )
    {
      return 0;
    }
    v13 = a2[5];
    *a2 = v12;
    a2[1] = v12;
    *(_QWORD *)(v13 + 16) = 1LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        20,
        25,
        (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
        v12);
    }
LABEL_21:
    v14 = a2[5];
    v15 = a2[9];
    v16 = *(_DWORD *)(v14 + 36);
    v17 = *(_QWORD *)(v14 + 40);
    v18 = a2[4];
    LODWORD(v20) = *(_BYTE *)(*(_QWORD *)(a2[7] + 40LL) + 4LL) & 1;
    if ( (int)((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, unsigned int, _DWORD, int, int))ProcessorFindIdtEntries)(
                *(_QWORD *)(v18 + 32),
                v17,
                v15,
                1LL,
                v21,
                v20,
                v16 & 1,
                1) >= 0 )
      return 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v19,
        20,
        26,
        (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
    }
    return 0;
  }
  if ( (int)LinkNodeGetPossibleGsiv(v22, &v21) < 0 )
  {
    if ( (int)IrqArbpAssignIrqFromLinkNode(v6, a2, v6) < 0 )
      return 0;
    v21 = IrqArbGsivFromIrq(*(unsigned int *)a2);
    goto LABEL_21;
  }
  v7 = IrqArbIrqFromGsiv(v21);
  v9 = v7;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      20,
      23,
      (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
      v7);
  }
  if ( a2[2] <= v9 && a2[3] >= v9 )
  {
    *a2 = v9;
    a2[1] = v9;
    *(_QWORD *)(a2[5] + 16LL) = 1LL;
    return 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_DD(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      20,
      24,
      (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
      *(_DWORD *)a2,
      *((_DWORD *)a2 + 2));
  }
  return 0;
}

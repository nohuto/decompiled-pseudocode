char __fastcall HUBMISC_IsBootDeviceReady(__int64 a1)
{
  __int64 v1; // rax
  char v2; // bl
  volatile __int32 *v4; // r14
  unsigned __int16 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  unsigned __int16 v8; // r9
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v10 = 0;
  if ( (*(_DWORD *)(v1 + 2352) & 0x10) != 0 )
  {
    v2 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x65u,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
    goto LABEL_26;
  }
  v4 = (volatile __int32 *)(a1 + 2240);
  *(_DWORD *)(a1 + 2240) = 0;
  if ( (int)HUBHTX_GetPortStatusForBootDevice(a1, &v10) >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 1636) & 0x400) != 0 && (v10 & 0x10000) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v5 = 103;
      goto LABEL_29;
    }
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v6 + 1424) == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v7 = *(_QWORD *)(v6 + 1432);
      v5 = 104;
      goto LABEL_30;
    }
    if ( (v10 & 1) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 105;
LABEL_24:
        WPP_RECORDER_SF_(*(_QWORD *)(v6 + 1432), 4u, 5u, v8, (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
      }
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 1456) & 0x800) == 0 || (v10 & 0x1E0) != 0xC0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v6 + 1336), 0xFFFFFFF7);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v5 = 108;
        goto LABEL_29;
      }
      if ( (*(_DWORD *)(v6 + 1336) & 8) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(v6 + 1336), 8u);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v5 = 106;
        goto LABEL_29;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 107;
        goto LABEL_24;
      }
    }
    v2 = 1;
LABEL_26:
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 1336LL), 0xFFFFFFF7);
    HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice(a1);
    return v2;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_31;
  v5 = 102;
LABEL_29:
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
LABEL_30:
  WPP_RECORDER_SF_(v7, 4u, 5u, v5, (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
LABEL_31:
  if ( _InterlockedExchange(v4, 1) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x6Du,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
    return 1;
  }
  return v2;
}

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase1(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // r14d
  __int64 v3; // rbp
  const ULONG_PTR *v4; // rdx
  int v5; // r15d
  int v6; // r13d
  char v7; // r12
  __int64 *v8; // rsi
  signed __int32 v9; // r14d
  __int64 *v10; // rdx
  __int64 *v11; // rcx
  bool v12; // r9
  char v13; // bl
  __int64 *v14; // r8
  __int64 v15; // r10
  bool v16; // al
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // edx
  __int64 result; // rax
  __int128 v23; // [rsp+48h] [rbp-70h] BYREF
  __int128 v24; // [rsp+58h] [rbp-60h]
  __int64 v25; // [rsp+68h] [rbp-50h]
  int v27; // [rsp+D0h] [rbp+18h]

  v1 = a1;
  v2 = 0;
  v25 = 0LL;
  v3 = 0LL;
  v23 = 0LL;
  *(_DWORD *)(a1 + 212) = 4;
  v24 = 0LL;
  v4 = &WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v4,
      10,
      62,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      4);
  }
  v5 = *(_DWORD *)(v1 + 104);
  v6 = *(_DWORD *)(v1 + 112);
  v27 = v6;
  if ( v5 != 6 || (v7 = 1, v6 != 5) )
    v7 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v8 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = v8;
      v11 = v8;
      v8 = (__int64 *)*v8;
      v12 = 0;
      v13 = 0;
      v14 = (__int64 *)v10[6];
      if ( v14 != v10 + 6 )
      {
        do
        {
          v15 = *(v14 - 1);
          v14 = (__int64 *)*v14;
          if ( !v12 )
          {
            v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 736), 0, 0);
            v12 = v9 != 0;
          }
          if ( v5 == 1 && _bittest64((const signed __int64 *)(v15 + 1008), 0x33u) )
          {
            *(_BYTE *)(v15 + 665) = 1;
            v13 = 1;
          }
        }
        while ( (!v12 || !v13) && v14 != v10 + 6 );
        v6 = v27;
      }
      if ( v12 )
        _InterlockedOr64(v10 + 2, 0x20000uLL);
      else
        _InterlockedAnd64(v10 + 2, 0xFFFFFFFFFFFDFFFFuLL);
      v16 = v5 == 5 || v6 == 3;
      if ( v9 && v16 || v7 == 1 )
      {
        if ( (v10[2] & 0x40) != 0 )
          goto LABEL_29;
      }
      else
      {
        v17 = v10[2];
        if ( *((_DWORD *)v11 + 11) < v5 )
        {
          if ( (v17 & 0x200) == 0 )
            _InterlockedOr64(v10 + 2, 0x40uLL);
          goto LABEL_35;
        }
        if ( (v17 & 0x40) != 0 )
        {
LABEL_29:
          _InterlockedAnd64(v10 + 2, 0xFFFFFFFFFFFFFFBFuLL);
LABEL_35:
          if ( _InterlockedCompareExchange((volatile signed __int32 *)v11 + 16, 3, 0) == 1 )
            *((_DWORD *)v11 + 17) = 3;
          goto LABEL_37;
        }
        if ( (v17 & 0x2000) != 0 )
          goto LABEL_35;
      }
LABEL_37:
      if ( v8 == &AcpiPowerNodeList )
      {
        v1 = a1;
        v2 = 0;
        break;
      }
    }
  }
  v18 = (unsigned int)AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v5 != 1 )
    goto LABEL_47;
  v19 = AMLIGetParent(*(_QWORD *)(*(_QWORD *)(v1 + 40) + 760LL));
  v3 = AMLIGetNamedChild(v19, 1262573407LL);
  AMLIDereferenceHandleEx(v19);
  if ( !v3 )
    goto LABEL_47;
  WORD1(v23) = 1;
  v20 = (unsigned int)v18 < 7 ? (unsigned int)AcpiSystemStateTranslation[v18] : 0xFFFFFFFFLL;
  *(_QWORD *)&v24 = v20;
  v2 = AMLIAsyncEvalObject(v3, 0, 1, (unsigned int)&v23, (__int64)ACPIDeviceCompleteGenericPhase, v1);
  AMLIDereferenceHandleEx(v3);
  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v21,
      10,
      63,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      v1,
      v2);
  }
  result = 259LL;
  if ( v2 != 259 )
  {
LABEL_47:
    ACPIDeviceCompleteGenericPhase(v3, v2, 0LL, v1);
    return 0LL;
  }
  return result;
}

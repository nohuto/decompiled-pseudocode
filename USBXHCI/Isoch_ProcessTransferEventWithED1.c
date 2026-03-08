/*
 * XREFs of Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C0001E90 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     Isoch_MapTransfers @ 0x1C0001C9C (Isoch_MapTransfers.c)
 *     Isoch_Stage_Find @ 0x1C0002870 (Isoch_Stage_Find.c)
 *     Isoch_Stage_CompleteTD @ 0x1C00029D0 (Isoch_Stage_CompleteTD.c)
 *     Isoch_RetrieveNextStage @ 0x1C0003800 (Isoch_RetrieveNextStage.c)
 *     Isoch_MapStage @ 0x1C0004810 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C0004AD0 (Isoch_PrepareStage.c)
 *     TR_AttemptStateChange @ 0x1C0008120 (TR_AttemptStateChange.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     StageQueue_Release @ 0x1C0011840 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C001187C (TR_ReleaseSegments.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0012EEC (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001E054 (WPP_RECORDER_SF_DDD.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C00202C0 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_DDi @ 0x1C004207C (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_DDqD @ 0x1C00437B0 (WPP_RECORDER_SF_DDqD.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0045238 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0045590 (Isoch_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDLDDi @ 0x1C0046334 (WPP_RECORDER_SF_DDLDDi.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C00533B4 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED1(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rax
  KIRQL v9; // dl
  bool v10; // cc
  KSPIN_LOCK *v11; // rcx
  unsigned __int8 **v12; // rsi
  int v13; // r12d
  unsigned __int8 *v14; // r13
  unsigned __int8 *v15; // rdi
  unsigned __int8 *v16; // rsi
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int8 *v19; // rax
  unsigned __int8 **v20; // rcx
  unsigned __int8 **v21; // rax
  int v22; // r9d
  __int64 *v23; // rsi
  int v24; // r12d
  __int64 *v25; // rax
  __int64 i; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r15
  int v31; // eax
  unsigned __int8 *v32; // rdi
  unsigned __int8 v33; // cl
  __int64 v34; // rsi
  int v35; // edx
  __int64 v36; // rax
  __int64 NextStage; // r10
  unsigned int v38; // edi
  unsigned int v39; // edi
  __int64 v40; // rax
  _QWORD *v41; // r10
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  int v44; // r15d
  int v45; // edx
  char j; // di
  int v47; // edx
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  int v54; // [rsp+60h] [rbp-19h] BYREF
  int v55; // [rsp+64h] [rbp-15h]
  __int64 v56; // [rsp+68h] [rbp-11h]
  __int64 *v57; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int8 *v58; // [rsp+80h] [rbp+7h]
  char v60; // [rsp+E8h] [rbp+6Fh] BYREF
  char v61; // [rsp+F0h] [rbp+77h] BYREF
  int v62; // [rsp+F8h] [rbp+7Fh] BYREF

  v62 = 0;
  v60 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v4 = *(_QWORD *)(a2 + 56);
    v5 = HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F;
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_DDLDDi(*(_QWORD *)(v4 + 80), v5, *(_DWORD *)(a1 + 8) & 0xFFFFFF, 27);
  }
  if ( (*(_QWORD *)a1 & 3) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = HIBYTE(*(_DWORD *)(a1 + 12));
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        v6,
        *(_QWORD *)a1,
        28,
        (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
        HIBYTE(*(_DWORD *)(a1 + 12)),
        HIWORD(*(_DWORD *)(a1 + 12)) & 0x1F,
        *(_QWORD *)a1);
    }
    Controller_ReportFatalErrorEx(*(_QWORD *)(a2 + 40), 2, 4126, 0, 0LL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), a2);
    return 0;
  }
  *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  if ( *(_BYTE *)(a1 + 11) == 36 )
  {
    *(_DWORD *)(a2 + 328) |= 0x80u;
    v7 = *(_QWORD *)(a2 + 40);
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 516));
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 560));
    *(_BYTE *)(v7 + 472) = 1;
  }
  if ( (*(_DWORD *)(a2 + 328) & 0x40) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
    return 0;
  }
  v8 = Isoch_Stage_Find(a2, a1, a1);
  v9 = *(_BYTE *)(a2 + 104);
  v10 = (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) <= 2u;
  v56 = v8;
  v11 = (KSPIN_LOCK *)(a2 + 96);
  v12 = (unsigned __int8 **)v8;
  if ( v10 )
  {
    v38 = *(_DWORD *)(a2 + 328) | 0x40;
    *(_DWORD *)(a2 + 328) = v38;
    if ( v8 )
    {
      KeReleaseSpinLock(v11, v9);
      Isoch_Stage_CompleteTD(
        (_DWORD)v12,
        HIBYTE(*(_DWORD *)(a1 + 8)),
        *(_DWORD *)(a1 + 8) & 0xFFFFFF,
        0,
        (__int64)&v60,
        (__int64)&v62);
    }
    else
    {
      v39 = (v38 >> 7) & 1;
      KeReleaseSpinLock(v11, v9);
      v40 = *(_QWORD *)(a2 + 40);
      if ( *(_DWORD *)(v40 + 244) == 1 )
        MicrosoftTelemetryAssertTriggeredArgsMsgKM(
          "USBXHCI.SYS",
          *(unsigned __int16 *)(v40 + 252) | (*(unsigned __int16 *)(v40 + 248) << 16),
          v39,
          "Stale Stopped Event With Event Data = 1 Received");
      else
        MicrosoftTelemetryAssertTriggeredMsgKM("Stale Stopped Event With Event Data = 1 Received (ACPI)");
    }
    v41 = *(_QWORD **)(a2 + 56);
    _m_prefetchw(v41 + 4);
    v42 = *((_DWORD *)v41 + 8);
    do
    {
      v43 = v42;
      v42 = _InterlockedCompareExchange((volatile signed __int32 *)v41 + 8, v42 | 0x10, v42);
    }
    while ( v43 != v42 );
    if ( (v42 & 0x10) != 0 )
    {
      Controller_HwVerifierBreakIfEnabled(
        *v41,
        v41[1],
        v41[3],
        0x2000000,
        (__int64)"Received duplicate Stopped Transfer Events",
        0LL,
        0LL);
    }
    else
    {
      _m_prefetchw(v41 + 4);
      if ( (_InterlockedXor((volatile signed __int32 *)v41 + 8, 8u) & 8) != 0 )
        ESM_AddEvent(v41 + 37);
    }
  }
  else
  {
    KeReleaseSpinLock(v11, v9);
    if ( !v12 )
      return 0;
    v13 = *(_DWORD *)(a1 + 8);
    v14 = *v12;
    v58 = (unsigned __int8 *)&v57;
    v55 = v13 & 0xFFFFFF;
    v57 = (__int64 *)&v57;
    *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v15 = *(unsigned __int8 **)(a2 + 384);
    if ( v15 != (unsigned __int8 *)(a2 + 384) )
    {
      while ( 1 )
      {
        if ( v15 == v14 )
          goto LABEL_22;
        v16 = *(unsigned __int8 **)v15;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = *((_QWORD *)v15 + 6);
          v18 = *(_DWORD *)(v17 + 128);
          LOBYTE(v17) = 4;
          WPP_RECORDER_SF_DDqD(
            *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
            v17,
            *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
            23,
            (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
            *((_QWORD *)v15 + 3),
            v18);
        }
        v19 = *(unsigned __int8 **)v15;
        if ( *(unsigned __int8 **)(*(_QWORD *)v15 + 8LL) != v15 )
          break;
        v20 = (unsigned __int8 **)*((_QWORD *)v15 + 1);
        if ( *v20 != v15 )
          break;
        *v20 = v19;
        *((_QWORD *)v19 + 1) = v20;
        v21 = (unsigned __int8 **)v58;
        if ( *(__int64 ***)v58 != &v57 )
          break;
        *((_QWORD *)v15 + 1) = v58;
        *(_QWORD *)v15 = &v57;
        *v21 = v15;
        v58 = v15;
        v15 = v16;
        if ( v16 == (unsigned __int8 *)(a2 + 384) )
          goto LABEL_22;
      }
LABEL_30:
      __fastfail(3u);
    }
LABEL_22:
    while ( 1 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
      v23 = v57;
      if ( v57 == (__int64 *)&v57 )
        break;
      v24 = 0;
      if ( (__int64 **)v57[1] != &v57 )
        goto LABEL_30;
      v25 = (__int64 *)*v57;
      if ( *(__int64 **)(*v57 + 8) != v57 )
        goto LABEL_30;
      v57 = (__int64 *)*v57;
      v25[1] = (__int64)&v57;
      *((_BYTE *)v23 + 133) = *((_BYTE *)v23 + 132);
      *((_BYTE *)v23 + 134) = *((_BYTE *)v23 + 130);
      v23[1] = (__int64)v23;
      *v23 = (__int64)v23;
      for ( i = StageQueue_ForwardScanGetNextStage(v23 + 16); i; i = StageQueue_ForwardScanGetNextStage(v23 + 16) )
      {
        Isoch_Stage_FreeScatterGatherList(a2, i, v27, v28);
        *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
        v30 = *(_QWORD *)i;
        if ( *(_BYTE *)(i + 56) )
        {
          IoFreeMdl(*(PMDL *)(i + 64));
          *(_QWORD *)(i + 64) = 0LL;
          *(_BYTE *)(i + 56) = 0;
        }
        LOBYTE(v29) = 1;
        TR_ReleaseSegments(a2, i + 8, v29);
        TR_ReleaseSegments(a2, i + 24, 0LL);
        StageQueue_Release(v30 + 128, i);
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
        ++v24;
      }
      *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      Isoch_Transfer_CompleteCancelable(a2, (_DWORD)v23, -1, -1, 1, 0);
      *(_DWORD *)(a2 + 376) -= v24;
    }
    v31 = v14[132];
    v32 = v14 + 128;
    v33 = v14[130];
    v54 = 0;
    v61 = 0;
    v14[133] = v31;
    v14[134] = v33;
    v34 = v56;
    if ( v33 )
    {
      v35 = v31;
      v36 = v31 * (unsigned int)*v32;
      v14[134] = v33 - 1;
      NextStage = (__int64)&v14[v36 + 144];
      for ( v14[133] = (v35 + 1) % (unsigned int)v14[129]; NextStage; NextStage = StageQueue_ForwardScanGetNextStage(v32) )
      {
        if ( NextStage == v34 )
          break;
        LOBYTE(v22) = 1;
        *(_DWORD *)(NextStage + 48) = *(_DWORD *)(NextStage + 44) + 1;
        Isoch_Stage_CompleteTD(NextStage, 23, 0, v22, (__int64)&v61, (__int64)&v54);
      }
    }
    LOBYTE(v22) = 1;
    Isoch_Stage_CompleteTD(v34, *(unsigned __int8 *)(a1 + 11), v55, v22, (__int64)&v60, (__int64)&v62);
  }
  if ( !v60 )
    return 0;
  _InterlockedExchange((volatile __int32 *)(a2 + 344), 1);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) != 2 )
  {
    if ( !v62 && _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 4) == 4 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a2 + 320),
        0LL);
      Isoch_MapTransfers(a2);
    }
    return 0;
  }
  v44 = 0;
  while ( 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v45 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
      LOBYTE(v45) = 5;
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        v45,
        14,
        67,
        (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
        v44);
    }
    for ( j = 0; ; ++j )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v47 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
        LOBYTE(v47) = 5;
        WPP_RECORDER_SF_DDD(
          *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
          v47,
          14,
          66,
          (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
          j);
      }
      *(_QWORD *)(a2 + 344) = 0LL;
      if ( !(unsigned __int8)Isoch_RetrieveNextStage(a2) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 2, 3) != 3
          && _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 0, 1) == 1 )
        {
          v50 = *(_QWORD *)(a2 + 56);
          if ( !*(_BYTE *)(v50 + 37)
            || (v51 = *(_QWORD *)(v50 + 136),
                _InterlockedIncrement((volatile signed __int32 *)(v51 + 20)) == *(_DWORD *)(v51 + 8)) )
          {
            ESM_AddEvent((PVOID)(v50 + 296));
          }
        }
        goto LABEL_76;
      }
      v48 = Isoch_PrepareStage(a2);
      if ( v48 != 1 )
        break;
LABEL_65:
      ;
    }
    if ( v48 == 3 )
      goto LABEL_76;
    if ( v48 != 2 )
    {
      if ( v48 == 4 )
      {
        TR_AttemptStateChange(a2, 3LL, 2LL);
        goto LABEL_76;
      }
      v49 = Isoch_MapStage(a2);
      if ( v49 == 2 )
        goto LABEL_76;
      if ( v49 == 4 )
      {
        if ( (unsigned int)TR_AttemptStateChange(a2, 3LL, 4LL) != 3 )
          goto LABEL_76;
        goto LABEL_67;
      }
      if ( (unsigned int)TR_AttemptStateChange(a2, 3LL, 3LL) != 3 )
        goto LABEL_76;
      goto LABEL_65;
    }
    if ( (unsigned int)TR_AttemptStateChange(a2, 3LL, 4LL) == 3 )
LABEL_67:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
        WdfDriverGlobals,
        *(_QWORD *)(a2 + 320),
        -100000000LL);
LABEL_76:
    v52 = *(_DWORD *)(a2 + 108);
    if ( v52 == 2 )
    {
      if ( *(_DWORD *)(a2 + 344) && _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) == 2 )
      {
        ++v44;
        continue;
      }
    }
    else if ( v52 == 4
           && *(_DWORD *)(a2 + 348)
           && _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 4) == 4 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a2 + 320),
        0LL);
      ++v44;
      continue;
    }
    return 0;
  }
}

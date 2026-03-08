/*
 * XREFs of Isoch_MapStage @ 0x1C0004810
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0001D18 (Isoch_MappingLoop.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 * Callees:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     StageQueue_Release @ 0x1C0011840 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C001187C (TR_ReleaseSegments.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0045590 (Isoch_Transfer_CompleteCancelable.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C0052050 (SecureDmaEnabler_PrepareMemoryForDma.c)
 */

__int64 __fastcall Isoch_MapStage(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // r14
  __int64 v4; // rbp
  _QWORD *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // r12
  int v9; // esi
  __int64 result; // rax
  int v11; // r8d
  bool v12; // zf
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // ecx
  __int128 v18; // xmm0
  __int64 v19; // r8
  __int64 v20; // r14
  int v21; // [rsp+20h] [rbp-48h]
  bool v22; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 368);
  v2 = 0;
  v4 = *(_QWORD *)v1;
  *(_DWORD *)(a1 + 352) = 0;
  if ( *(_BYTE *)(a1 + 280) )
  {
    v11 = *(_DWORD *)(a1 + 296);
    v12 = v11 == -1;
    v13 = v11 + 1;
    *(_DWORD *)(a1 + 296) = v13;
    if ( v12 )
    {
      *(_DWORD *)(a1 + 296) = 1;
      v13 = 1;
    }
    *(_DWORD *)(v1 + 160) = v13;
    v14 = *(_QWORD *)(v4 + 48);
    switch ( *(_WORD *)(v14 + 2) )
    {
      case '9':
      case ':':
        v15 = *(_QWORD *)(v1 + 72);
        v16 = (unsigned int)(*(_DWORD *)(v4 + 88) + *(_DWORD *)(v4 + 92));
        v17 = *(_DWORD *)(v1 + 52);
        *(_OWORD *)(v1 + 128) = 0LL;
        *(_OWORD *)(v1 + 144) = 0LL;
        *(_DWORD *)(v1 + 136) = v17;
        *(_DWORD *)(v1 + 132) = v16;
        *(_DWORD *)v15 = 1;
        *(_QWORD *)(v15 + 16) = v16;
        *(_DWORD *)(v15 + 24) = v17;
        *(_DWORD *)(v1 + 140) = v13;
        v18 = *(_OWORD *)(v14 + 36);
        *(_DWORD *)(v1 + 128) = 2;
        *(_OWORD *)(v1 + 144) = v18;
        goto LABEL_15;
      default:
        if ( (int)SecureDmaEnabler_PrepareMemoryForDma(
                    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
                    *(_QWORD *)(v1 + 64),
                    v13,
                    *(_DWORD *)(v1 + 52),
                    v13,
                    v1 + 128,
                    *(_QWORD *)(v1 + 72)) < 0 )
        {
          *(_DWORD *)(v1 + 160) = 0;
          goto LABEL_23;
        }
LABEL_15:
        if ( **(_DWORD **)(v1 + 72) != 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(
              WPP_GLOBAL_Control->DeviceExtension,
              v15,
              v13,
              v14,
              v21,
              (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\isoch.c",
              240,
              (__int64)"ScatterGatherList->NumberOfElements must be 1");
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
        }
        Isoch_Stage_MapIntoRing((__int64 *)v1);
        result = *(_DWORD *)(a1 + 352) != 0 ? 4 : 0;
        break;
    }
  }
  else
  {
    v5 = *(_QWORD **)(a1 + 40);
    v6 = *(_QWORD *)(v4 + 48);
    v7 = *(_QWORD *)(v5[12] + 24LL);
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 248))(WdfDriverGlobals, *v5);
    if ( KeGetCurrentIrql() != 2 )
      v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
    v22 = (*(_DWORD *)(v6 + 32) & 1) == 0;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *), __int64, bool))(*(_QWORD *)(v7 + 8) + 88LL))(
           v7,
           v8,
           *(_QWORD *)(v1 + 64),
           *(_QWORD *)(*(_QWORD *)(v1 + 64) + 32LL) + *(unsigned int *)(*(_QWORD *)(v1 + 64) + 44LL),
           *(_DWORD *)(v1 + 52),
           Isoch_EvtDmaCallback,
           v1,
           v22);
    if ( v2 && KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD *)(a1 + 40));
    if ( v9 < 0 )
    {
LABEL_23:
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v20 = *(_QWORD *)v1;
      if ( *(_BYTE *)(v1 + 56) )
      {
        IoFreeMdl(*(PMDL *)(v1 + 64));
        *(_QWORD *)(v1 + 64) = 0LL;
        *(_BYTE *)(v1 + 56) = 0;
      }
      LOBYTE(v19) = 1;
      TR_ReleaseSegments(a1, v1 + 8, v19);
      TR_ReleaseSegments(a1, v1 + 24, 0LL);
      StageQueue_Release(v20 + 128, v1);
      if ( *(_DWORD *)(v4 + 112) == *(_DWORD *)(v4 + 116) )
        Isoch_Transfer_CompleteCancelable(a1, v4, -1, -1073737728, 0, 0);
      else
        *(_DWORD *)(v4 + 108) = *(_DWORD *)(v4 + 96) - *(_DWORD *)(v4 + 104);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      return 1LL;
    }
    else if ( _InterlockedXor((volatile signed __int32 *)(a1 + 340), 1u) )
    {
      return 2LL;
    }
    else if ( *(_DWORD *)(a1 + 352) )
    {
      return 4LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}

/*
 * XREFs of Isoch_ProcessTransferRingEmptyEvent @ 0x1C004503C
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0044CF4 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     Isoch_MapTransfers @ 0x1C0001C9C (Isoch_MapTransfers.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0007C90 (WPP_RECORDER_SF_DD.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_GetFrameNumber @ 0x1C0033490 (Controller_GetFrameNumber.c)
 *     WPP_RECORDER_SF_DDDL @ 0x1C0046128 (WPP_RECORDER_SF_DDDL.c)
 */

void __fastcall Isoch_ProcessTransferRingEmptyEvent(__int64 a1, __int64 a2)
{
  char v4; // r14
  int FrameNumber; // ebp
  KIRQL v6; // al
  int v7; // ecx
  unsigned int v8; // ecx
  int v9; // edx
  int v10; // edx
  __int64 v11; // rdx

  v4 = 0;
  FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 1, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDL(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(unsigned __int8 *)(a2 + 11),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL));
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_DWORD *)(a1 + 328);
  ++*(_DWORD *)(a1 + 268);
  v8 = v7 & 0xFFFFFFEF;
  v9 = *(_DWORD *)(a1 + 376);
  *(_BYTE *)(a1 + 104) = v6;
  *(_DWORD *)(a1 + 328) = v8;
  if ( !v9 )
  {
    v8 &= ~0x20u;
    *(_DWORD *)(a1 + 328) = v8;
  }
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 336LL), 0x2Au)
    && v9
    && (v8 & 0x20) != 0
    && FrameNumber - *(_DWORD *)(a1 + 364) >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v10,
        14,
        39,
        (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
    }
    v4 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  if ( v4 )
  {
    v11 = *(_QWORD *)(a1 + 56);
    _m_prefetchw((const void *)(v11 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)(v11 + 296), 130);
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 348), 1);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 3, 4) == 4 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 320),
        0LL);
      Isoch_MapTransfers(a1);
    }
  }
}

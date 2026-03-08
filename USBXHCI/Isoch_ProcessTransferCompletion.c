/*
 * XREFs of Isoch_ProcessTransferCompletion @ 0x1C0044B2C
 * Callers:
 *     Isoch_WdfEvtDpcForTransferCompletion @ 0x1C0045AC0 (Isoch_WdfEvtDpcForTransferCompletion.c)
 *     Isoch_WdfEvtWorkItemForTransferCompletion @ 0x1C0045F40 (Isoch_WdfEvtWorkItemForTransferCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0007C90 (WPP_RECORDER_SF_DD.c)
 *     TR_TransfersReclaimed @ 0x1C000E578 (TR_TransfersReclaimed.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Isoch_CompleteTransfers @ 0x1C0043E28 (Isoch_CompleteTransfers.c)
 *     Isoch_DoesDriverOwnRequests @ 0x1C004400C (Isoch_DoesDriverOwnRequests.c)
 */

void __fastcall Isoch_ProcessTransferCompletion(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rdi
  KIRQL v5; // al
  KIRQL v6; // r8
  int v7; // edx
  int v8; // edx
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+48h] [rbp-10h]

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063388);
  v10 = &v9;
  v9 = (__int64)&v9;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  *(_BYTE *)(v2 + 104) = v3;
  if ( *(_BYTE *)(v2 + 332) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v3);
  }
  else
  {
    *(_BYTE *)(v2 + 332) = 1;
    v4 = v2 + 416;
    do
    {
      if ( *(_QWORD *)v4 != v4 )
      {
        *v10 = *(_QWORD *)v4;
        *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v10;
        **(_QWORD **)(v2 + 424) = &v9;
        v10 = *(__int64 **)(v2 + 424);
        *(_QWORD *)(v2 + 424) = v2 + 416;
        *(_QWORD *)v4 = v4;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), *(_BYTE *)(v2 + 104));
      Isoch_CompleteTransfers(v2, &v9);
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
      *(_BYTE *)(v2 + 104) = v5;
      v6 = v5;
    }
    while ( *(_QWORD *)v4 != v4 );
    if ( (*(_DWORD *)(v2 + 328) & 8) != 0 && !Isoch_DoesDriverOwnRequests((_QWORD *)v2) )
    {
      v1 = 1;
      *(_DWORD *)(v2 + 328) = v7 & 0xFFFFFFF7;
    }
    *(_BYTE *)(v2 + 332) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v6);
    if ( v1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v8 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 48) + 135LL);
          LOBYTE(v8) = 5;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v2 + 56) + 80LL),
            v8,
            14,
            43,
            (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
            *(_BYTE *)(*(_QWORD *)(v2 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v2 + 56) + 144LL));
        }
      }
      TR_TransfersReclaimed(v2);
    }
  }
}

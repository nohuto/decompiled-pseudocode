/*
 * XREFs of Isoch_CompleteTransfers @ 0x1C0043E28
 * Callers:
 *     Isoch_ProcessTransferCompletion @ 0x1C0044B2C (Isoch_ProcessTransferCompletion.c)
 * Callees:
 *     StageQueue_Release @ 0x1C0011840 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C001187C (TR_ReleaseSegments.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0012EEC (StageQueue_ForwardScanGetNextStage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0045238 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0045590 (Isoch_Transfer_CompleteCancelable.c)
 */

void __fastcall Isoch_CompleteTransfers(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  KIRQL v6; // bl
  int v7; // r12d
  unsigned __int8 *i; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  unsigned __int8 *v12; // rbx
  KIRQL v13; // dl

  while ( 1 )
  {
    v4 = (_QWORD *)*a2;
    if ( (_QWORD *)*a2 == a2 )
      break;
    if ( (_QWORD *)v4[1] != a2 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *a2 = v5;
    *(_QWORD *)(v5 + 8) = a2;
    v4[1] = v4;
    *v4 = v4;
    if ( *((_DWORD *)v4 + 17) == 259 )
    {
      *((_BYTE *)v4 + 133) = *((_BYTE *)v4 + 132);
      v7 = 0;
      *((_BYTE *)v4 + 134) = *((_BYTE *)v4 + 130);
      for ( i = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v4 + 128);
            ;
            i = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v4 + 128) )
      {
        v12 = i;
        if ( !i )
          break;
        Isoch_Stage_FreeScatterGatherList(a1, i, v9, v10);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        v11 = *(_QWORD *)v12;
        if ( v12[56] )
        {
          IoFreeMdl(*((PMDL *)v12 + 8));
          *((_QWORD *)v12 + 8) = 0LL;
          v12[56] = 0;
        }
        TR_ReleaseSegments(a1, (const signed __int64 **)v12 + 1, 1);
        TR_ReleaseSegments(a1, (const signed __int64 **)v12 + 3, 0);
        StageQueue_Release((unsigned __int8 *)(v11 + 128), v12);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        ++*((_DWORD *)v4 + 28);
        ++v7;
      }
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v4, -1, -1073676288, 1, 0);
      v13 = *(_BYTE *)(a1 + 104);
      *(_DWORD *)(a1 + 376) -= v7;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v13);
    }
    else
    {
      v6 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2104))(
        WdfDriverGlobals,
        v4[3],
        *((unsigned int *)v4 + 17));
      KeLowerIrql(v6);
    }
  }
}

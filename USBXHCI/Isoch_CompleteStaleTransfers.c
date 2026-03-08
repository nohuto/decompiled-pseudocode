/*
 * XREFs of Isoch_CompleteStaleTransfers @ 0x1C0043B94
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0044CF4 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     StageQueue_Release @ 0x1C0011840 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C001187C (TR_ReleaseSegments.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0012EEC (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDqD @ 0x1C00437B0 (WPP_RECORDER_SF_DDqD.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0045238 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0045590 (Isoch_Transfer_CompleteCancelable.c)
 */

__int64 **__fastcall Isoch_CompleteStaleTransfers(__int64 a1, __int64 ***a2)
{
  KSPIN_LOCK *v3; // r14
  __int64 ****v5; // rsi
  __int64 ***v6; // rbx
  __int64 **v7; // r15
  __int64 **v8; // rdx
  int v9; // eax
  __int64 **v10; // rax
  __int64 ****v11; // rcx
  _QWORD *v12; // rax
  __int64 *v13; // rbx
  __int64 **result; // rax
  int v15; // r15d
  __int64 *v16; // rax
  __int64 v17; // r13
  unsigned __int8 *NextStage; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 *v21; // rsi
  __int64 *v22; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v23; // [rsp+58h] [rbp-8h]

  v23 = &v22;
  v3 = (KSPIN_LOCK *)(a1 + 96);
  v22 = (__int64 *)&v22;
  v5 = (__int64 ****)(a1 + 384);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = *v5;
  if ( *v5 != (__int64 ***)v5 )
  {
    while ( 1 )
    {
      if ( v6 == a2 )
        goto LABEL_9;
      v7 = *v6;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = v6[6];
        v9 = *((_DWORD *)v8 + 32);
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_DDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          (_DWORD)v8,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          23,
          (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          (char)v6[3],
          v9);
      }
      v10 = *v6;
      if ( (*v6)[1] != (__int64 *)v6 )
        break;
      v11 = (__int64 ****)v6[1];
      if ( *v11 != v6 )
        break;
      *v11 = (__int64 ***)v10;
      v10[1] = (__int64 *)v11;
      v12 = v23;
      if ( *v23 != (__int64 *)&v22 )
        break;
      v6[1] = v23;
      *v6 = &v22;
      *v12 = v6;
      v23 = (__int64 **)v6;
      v6 = (__int64 ***)v7;
      if ( v7 == (__int64 **)v5 )
        goto LABEL_9;
    }
LABEL_18:
    __fastfail(3u);
  }
LABEL_9:
  while ( 1 )
  {
    KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 104));
    v13 = v22;
    result = &v22;
    if ( v22 == (__int64 *)&v22 )
      return result;
    v15 = 0;
    if ( (__int64 **)v22[1] != &v22 )
      goto LABEL_18;
    v16 = (__int64 *)*v22;
    if ( *(__int64 **)(*v22 + 8) != v22 )
      goto LABEL_18;
    v22 = (__int64 *)*v22;
    v16[1] = (__int64)&v22;
    *((_BYTE *)v13 + 133) = *((_BYTE *)v13 + 132);
    *((_BYTE *)v13 + 134) = *((_BYTE *)v13 + 130);
    v13[1] = (__int64)v13;
    *v13 = (__int64)v13;
    while ( 1 )
    {
      NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v13 + 128);
      v21 = NextStage;
      if ( !NextStage )
        break;
      Isoch_Stage_FreeScatterGatherList(a1, NextStage, v19, v20);
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v3);
      v17 = *(_QWORD *)v21;
      if ( v21[56] )
      {
        IoFreeMdl(*((PMDL *)v21 + 8));
        *((_QWORD *)v21 + 8) = 0LL;
        v21[56] = 0;
      }
      TR_ReleaseSegments(a1, (const signed __int64 **)v21 + 1, 1);
      TR_ReleaseSegments(a1, (const signed __int64 **)v21 + 3, 0);
      StageQueue_Release((unsigned __int8 *)(v17 + 128), v21);
      KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 104));
      ++v15;
    }
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v3);
    Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v13, -1, -1, 1, 0);
    *(_DWORD *)(a1 + 376) -= v15;
  }
}

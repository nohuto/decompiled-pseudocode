/*
 * XREFs of Bulk_ProcessTransferEventWithED1 @ 0x1C0011324
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C0009BA0 (Endpoint_TransferEventHandler.c)
 *     Bulk_EP_TransferEventHandler @ 0x1C0011300 (Bulk_EP_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x1C0041CD4 (TR_TransferEventHandler.c)
 * Callees:
 *     Endpoint_HaltedCompletionCode @ 0x1C0006D98 (Endpoint_HaltedCompletionCode.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C000DFBC (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000E120 (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_FindStage @ 0x1C000E218 (Bulk_FindStage.c)
 *     StageQueue_Release @ 0x1C0011840 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C001187C (TR_ReleaseSegments.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C00118C4 (Bulk_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDDqLDDi @ 0x1C0011914 (WPP_RECORDER_SF_DDDqLDDi.c)
 *     WPP_RECORDER_SF_DDDqqq @ 0x1C0011A28 (WPP_RECORDER_SF_DDDqqq.c)
 *     Bulk_MapTransfers @ 0x1C0011EA8 (Bulk_MapTransfers.c)
 *     Bulk_ValidateStagePointer @ 0x1C0012E28 (Bulk_ValidateStagePointer.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0012F30 (Bulk_Transfer_CompleteCancelable.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     memmove @ 0x1C0020400 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0041E20 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0046FFC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     WPP_RECORDER_SF_DDDi @ 0x1C0047998 (WPP_RECORDER_SF_DDDi.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED1(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  bool v5; // r13
  __int64 *v6; // rsi
  char v7; // bl
  __int64 v8; // rdi
  int v10; // edx
  __int64 v11; // rbx
  unsigned int v12; // r8d
  unsigned int v13; // ebp
  int v14; // edx
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // r10
  KSPIN_LOCK *v20; // rcx
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r14
  int v25; // eax
  int v26; // edx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v31; // [rsp+20h] [rbp-88h]
  char v32; // [rsp+40h] [rbp-68h]
  unsigned int v33; // [rsp+B8h] [rbp+10h] BYREF
  __int64 *v34; // [rsp+C0h] [rbp+18h] BYREF

  v4 = *a1;
  v5 = 0;
  v34 = 0LL;
  v6 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
  v7 = 0;
  v8 = a2;
  if ( !a2 )
  {
    v11 = *v6;
    v8 = *(_QWORD *)(*v6 + 56);
LABEL_9:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDqLDDi(
        *(_QWORD *)(*(_QWORD *)(v8 + 56) + 80LL),
        *((unsigned __int8 *)a1 + 15),
        *((unsigned __int8 *)a1 + 11),
        a1[1] & 0xFFFFFF);
    v12 = *((_DWORD *)v6 + 10);
    v13 = a1[1] & 0xFFFFFF;
    if ( v13 > v12 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v8 + 56) + 80LL),
          3,
          v12,
          56,
          (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v8 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v8 + 56) + 144LL),
          *(_DWORD *)(v8 + 64),
          *((_BYTE *)a1 + 8),
          *((_DWORD *)v6 + 10));
      v13 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDqqq(
        *(_QWORD *)(*(_QWORD *)(v8 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v8 + 48) + 135LL),
        v12,
        a4,
        v31,
        *(_BYTE *)(*(_QWORD *)(v8 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v8 + 56) + 144LL),
        *(_DWORD *)(v8 + 64),
        *(_QWORD *)(v11 + 24),
        v11,
        (char)v6);
    if ( Endpoint_HaltedCompletionCode(*(__m128i ***)(v8 + 56), *((unsigned __int8 *)a1 + 11)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = v14;
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(v15 + 80),
          v14,
          14,
          58,
          (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v8 + 48) + 135LL),
          *(_DWORD *)(v15 + 144),
          *(_DWORD *)(v8 + 64),
          v32);
      }
      Bulk_ProcessTransferEventWithHaltedCompletion(v8, v6, *((unsigned __int8 *)a1 + 11), v13);
      goto LABEL_45;
    }
    if ( (unsigned __int8)(v14 - 26) > 2u )
    {
      *(_DWORD *)(v11 + 108) += v13;
      v22 = *(_QWORD *)(v11 + 48);
      *(_DWORD *)(v11 + 68) = v14;
      if ( (*(_DWORD *)(v22 + 32) & 1) != 0 && *(_DWORD *)(v11 + 76) == 2 )
        memmove((void *)v6[8], *(const void **)(v6[9] + 16), v13);
      Bulk_Stage_FreeScatterGatherList(v8, v6);
      *(_BYTE *)(v8 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 96));
      v24 = *v6;
      if ( *((_BYTE *)v6 + 44) )
      {
        IoFreeMdl((PMDL)v6[6]);
        v6[6] = 0LL;
        *((_BYTE *)v6 + 44) = 0;
      }
      LOBYTE(v23) = 1;
      TR_ReleaseSegments(v8, v6 + 1, v23);
      TR_ReleaseSegments(v8, v6 + 3, 0LL);
      StageQueue_Release(v24 + 128, v6);
      ++*(_DWORD *)(v11 + 116);
      if ( *(_DWORD *)(v11 + 68) == 13 || *(_DWORD *)(v11 + 112) == *(_DWORD *)(v11 + 104) )
        Bulk_Transfer_CompleteCancelable(v8, v11, 0xFFFFFFFFLL, 0LL);
      --*(_DWORD *)(v8 + 348);
      v25 = *(_DWORD *)(v8 + 352);
      if ( v25 )
      {
        v26 = v25 - 1;
        v27 = *(_DWORD *)(v8 + 324);
        *(_DWORD *)(v8 + 352) = v26;
        if ( (v27 & 2) != 0 )
          v5 = v26 == 0;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 96), *(_BYTE *)(v8 + 104));
      if ( !v5 )
        goto LABEL_45;
      v28 = *(_QWORD *)(v8 + 56);
      if ( *(_BYTE *)(v28 + 37) )
      {
        v29 = *(_QWORD *)(v28 + 136);
        if ( _InterlockedIncrement((volatile signed __int32 *)(v29 + 20)) != *(_DWORD *)(v29 + 8) )
          goto LABEL_45;
      }
      v20 = (KSPIN_LOCK *)(v28 + 296);
      v21 = 150;
    }
    else
    {
      v16 = v6[12];
      v17 = 16LL * *((unsigned int *)v6 + 26);
      v33 = 0;
      v18 = *(_QWORD *)(v16 + 24) + v17;
      *(_BYTE *)(v8 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 96));
      if ( Bulk_FindStage(v8, v18, (__int64 *)&v34, &v33) && v34 == v6 )
        Bulk_ProcessTransferEventWithStoppedCompletion(v8, v6, *((unsigned __int8 *)a1 + 11), v13, v33);
      *(_DWORD *)(v8 + 324) |= 8u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 96), *(_BYTE *)(v8 + 104));
      v19 = *(_QWORD **)(v8 + 56);
      _m_prefetchw(v19 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)v19 + 8, 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *v19,
          v19[1],
          v19[3],
          0x2000000,
          (__int64)"Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
LABEL_45:
        v7 = 1;
        goto LABEL_46;
      }
      _m_prefetchw(v19 + 4);
      if ( (_InterlockedXor((volatile signed __int32 *)v19 + 8, 8u) & 8) == 0 )
        goto LABEL_45;
      v20 = v19 + 37;
      v21 = 118;
    }
    ESM_AddEvent(v20, v21);
    goto LABEL_45;
  }
  if ( (unsigned __int8)Bulk_ValidateStagePointer(a2, v6) )
  {
    v11 = *v6;
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(v8 + 64) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = *((unsigned __int8 *)a1 + 15);
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(*(_QWORD *)(v8 + 56) + 80LL), v10, *((_WORD *)a1 + 7) & 0x1F, 54);
    }
    Controller_ReportFatalErrorEx(*(_QWORD *)(v8 + 40), 2, 4126, 0, 0LL, *(_QWORD *)(v8 + 48), *(_QWORD *)(v8 + 56), v8);
  }
LABEL_46:
  _InterlockedExchange((volatile __int32 *)(v8 + 340), 1);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 108), 3, 2) == 2 )
    Bulk_MapTransfers(v8);
  return v7;
}

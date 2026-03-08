/*
 * XREFs of Bulk_ProcessTransferEventWithED0 @ 0x1C000DAC4
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C0009BA0 (Endpoint_TransferEventHandler.c)
 *     Bulk_EP_TransferEventHandler @ 0x1C0011300 (Bulk_EP_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x1C0041CD4 (TR_TransferEventHandler.c)
 * Callees:
 *     Endpoint_HaltedCompletionCode @ 0x1C0006D98 (Endpoint_HaltedCompletionCode.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_dddqLddi @ 0x1C000D9B0 (WPP_RECORDER_SF_dddqLddi.c)
 *     Bulk_Stage_CalculateBytesTransferred @ 0x1C000DF50 (Bulk_Stage_CalculateBytesTransferred.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C000DFBC (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000E120 (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_FindStage @ 0x1C000E218 (Bulk_FindStage.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0041E20 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0046FFC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C00471E8 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // di
  _BYTE *v5; // r14
  __m128i ***v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // edx
  __m128i **v13; // r10
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // [rsp+20h] [rbp-88h]
  int v18; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+10h] BYREF

  v2 = 0;
  v18 = 0;
  v19 = 0LL;
  v5 = (_BYTE *)(a1 + 11);
  v6 = (__m128i ***)(a2 + 56);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dddqLddi(
      (__int64)(*v6)[10],
      (unsigned __int8)*v5,
      *(unsigned __int8 *)(a1 + 15),
      *(_DWORD *)(a1 + 8) & 0xFFFFFF,
      v17);
  if ( (unsigned __int8)(*v5 - 26) <= 2u && (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 32LL) & 0x40) != 0 )
    return 1;
  *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  if ( !(unsigned __int8)Bulk_FindStage(a2, *(_QWORD *)a1, &v19, &v18) )
  {
    if ( !*(_DWORD *)(a2 + 64) )
      Bulk_ValidateED0TrbPointerOnMismatch(a2, a1);
    goto LABEL_17;
  }
  v8 = v19;
  if ( v19 )
  {
    v9 = Bulk_Stage_CalculateBytesTransferred(v7, v19, a1);
    v10 = *(_DWORD *)(v8 + 40);
    if ( v9 <= v10 )
      goto LABEL_8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = *(_QWORD *)(a2 + 48);
      v16 = *(unsigned __int8 *)(v15 + 135);
      LOBYTE(v15) = 3;
      WPP_RECORDER_SF_DDDDD(
        (unsigned int)(*v6)[10],
        v15,
        v16,
        52,
        (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
        v16,
        *((_DWORD *)*v6 + 36),
        *(_DWORD *)(a2 + 64),
        v9,
        v10);
    }
  }
  v9 = 0;
LABEL_8:
  if ( Endpoint_HaltedCompletionCode(*v6, (unsigned __int8)*v5) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
    if ( v8 )
      Bulk_ProcessTransferEventWithHaltedCompletion(a2, v8, (unsigned __int8)*v5, v9);
    return 1;
  }
  if ( (unsigned __int8)(v11 - 26) > 2u )
  {
LABEL_17:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
    return v2;
  }
  Bulk_ProcessTransferEventWithStoppedCompletion(a2, v8, v11, v9, v18);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_DDDD(
      (unsigned int)(*v6)[10],
      v12,
      14,
      53,
      (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
      *((_DWORD *)*v6 + 36),
      *(_DWORD *)(a2 + 64),
      *(_DWORD *)(a2 + 352));
  }
  *(_DWORD *)(a2 + 324) |= 8u;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
  v13 = *v6;
  _m_prefetchw(*v6 + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)v13 + 8, 0x10u) & 0x10) != 0 )
  {
    Controller_HwVerifierBreakIfEnabled(
      (unsigned int)*v13,
      (unsigned int)v13[1],
      (unsigned int)v13[3],
      0x2000000,
      (__int64)"Received duplicate Stopped Transfer Events",
      0LL,
      0LL);
  }
  else
  {
    _m_prefetchw(v13 + 4);
    if ( (_InterlockedXor((volatile signed __int32 *)v13 + 8, 8u) & 8) != 0 )
      ESM_AddEvent((KSPIN_LOCK *)v13 + 37, 118);
  }
  return 1;
}

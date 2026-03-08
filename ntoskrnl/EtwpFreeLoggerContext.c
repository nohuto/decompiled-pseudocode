/*
 * XREFs of EtwpFreeLoggerContext @ 0x1406F29FC
 * Callers:
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x1406926A0 (EtwpLogger.c)
 *     EtwpStopTrace @ 0x140745044 (EtwpStopTrace.c)
 * Callees:
 *     ExDeleteTimer @ 0x140203F60 (ExDeleteTimer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     EtwpClearPartitionContext @ 0x14028DAAC (EtwpClearPartitionContext.c)
 *     KeRemoveQueueDpc @ 0x14028DB30 (KeRemoveQueueDpc.c)
 *     EtwpFreeStackWalkApcs @ 0x14028DCA0 (EtwpFreeStackWalkApcs.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14028E0C0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x14028E180 (ExReInitializeRundownProtectionCacheAware.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14028E24C (EtwpCancelPendingStackWalkApcs.c)
 *     EtwpFreeCompression @ 0x14028E2C4 (EtwpFreeCompression.c)
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     KeGenericCallDpc @ 0x1403008E0 (KeGenericCallDpc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ObDereferenceSecurityDescriptor @ 0x140696920 (ObDereferenceSecurityDescriptor.c)
 *     SeDeleteClientSecurity @ 0x1406D4FF0 (SeDeleteClientSecurity.c)
 *     EtwpFreeTraceBufferPool @ 0x1406F2CFC (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406F4184 (EtwpRealtimeDisconnectAllConsumers.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     EtwpFreeStackCache @ 0x1408A39B8 (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x1409EA4E0 (EtwpCancelMemoryPreservation.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  UNICODE_STRING *v6; // rbx
  unsigned int v7; // esi
  unsigned int i; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  void *v14; // rcx
  char *v15; // rbx
  char *v16; // rbx
  _QWORD *v17; // rcx
  void *v18; // rcx
  char *v19; // rcx
  PRKEVENT *v20; // rbx
  void *v21; // rcx
  ULONG_PTR v22; // rcx
  void *v23; // rcx
  PVOID *v24; // rsi
  _QWORD *v25; // rbx
  __int64 v26; // rbp
  _DWORD *v27; // rax
  char *v28; // rcx
  __int128 v29; // [rsp+20h] [rbp-38h] BYREF
  __int64 v30; // [rsp+30h] [rbp-28h]

  v1 = *((_QWORD *)P + 137);
  EtwpRealtimeDisconnectAllConsumers(P);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 688), 0LL);
  *((_DWORD *)P + 204) |= 0x200u;
  if ( (*((_DWORD *)P + 206) & 0x20) != 0 )
  {
    v20 = (PRKEVENT *)*((_QWORD *)P + 44);
    *((_QWORD *)P + 44) = 0LL;
    *((_DWORD *)P + 10) = 0;
    _InterlockedAnd((volatile signed __int32 *)P + 206, 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)P + 19, 0, 0);
    KeSetEvent(v20[6], 0, 0);
    ObfDereferenceObject(v20);
  }
  ExReleasePushLockEx((__int64 *)P + 86, 0LL);
  v3 = *(unsigned int *)P;
  EtwpCancelPendingStackWalkApcs((unsigned int *)P);
  v4 = (unsigned int)v3;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v3), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v3));
  if ( *((_WORD *)P + 532) )
  {
    v21 = (void *)*((_QWORD *)P + 134);
    *((_WORD *)P + 532) = 0;
    ExFreePoolWithTag(v21, 0);
    *((_QWORD *)P + 134) = 0LL;
  }
  v5 = *((_QWORD *)P + 135);
  if ( v5 )
  {
    v22 = *(_QWORD *)(v5 + 8);
    if ( v22 )
    {
      v30 = 0LL;
      v29 = 0LL;
      ExDeleteTimer(v22, 1, 1, (unsigned int *)&v29);
    }
    v23 = *(void **)(*((_QWORD *)P + 135) + 24LL);
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    ExFreePoolWithTag(*((PVOID *)P + 135), 0);
    *((_QWORD *)P + 135) = 0LL;
  }
  if ( *((_DWORD *)P + 75) != 1 )
    KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 504));
  KeRemoveQueueDpc((PRKDPC)(P + 568));
  v6 = (UNICODE_STRING *)*((_QWORD *)P + 136);
  if ( v6 )
  {
    EtwpCancelMemoryPreservation(P);
    RtlFreeUnicodeString(v6 + 1);
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)P + 136) = 0LL;
  }
  EtwpFreeTraceBufferPool(P);
  v7 = KeNumberProcessors_0;
  for ( i = 0; i < v7; *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8 * v4) = 0LL )
  {
    v9 = *((_QWORD *)P + 137);
    if ( v9 == EtwpHostSiloState )
      v10 = *(_QWORD *)(KeGetPrcb(i) + 34472) + 320LL;
    else
      v10 = *(_QWORD *)(v9 + 4144) + ((unsigned __int64)i << 6);
    ++i;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 152));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 168));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 184));
  RtlFreeUnicodeString((PUNICODE_STRING)P + 23);
  if ( *((_QWORD *)P + 90) )
    SeDeleteClientSecurity((__int64)(P + 704));
  v11 = (void *)*((_QWORD *)P + 97);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = _InterlockedExchange64((volatile __int64 *)P + 98, 0LL);
  ObDereferenceSecurityDescriptor(v12 & 0xFFFFFFFFFFFFFFF0uLL, (v12 & 0xF) + 1);
  EtwpFreeStackWalkApcs((__int64)P);
  if ( (*((_DWORD *)P + 204) & 0x80u) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 125), 0);
  if ( (*((_DWORD *)P + 204) & 0x2000) != 0 )
    _InterlockedDecrement(&dword_140C6B070);
  if ( (*((_DWORD *)P + 204) & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 126));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 4248), (unsigned __int8)P[818]);
  if ( *((_QWORD *)P + 127) )
  {
    v24 = (PVOID *)*((_QWORD *)P + 127);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v25 = v24 + 3;
      v26 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *v25 )
          off_140C01BF0[0]();
        ++v25;
        --v26;
      }
      while ( v26 );
    }
    if ( *v24 )
      ExFreePoolWithTag(*v24, 0);
    ExFreePoolWithTag(v24, 0);
  }
  if ( *((_QWORD *)P + 128) )
  {
    if ( (*((_DWORD *)P + 204) & 0x8000) != 0 )
      _InterlockedDecrement(&dword_140C6B090);
    v27 = (_DWORD *)*((_QWORD *)P + 128);
    if ( v27 )
    {
      if ( *v27 )
        off_140C01DC8[0]();
      ExFreePoolWithTag(*((PVOID *)P + 128), 0);
      *((_QWORD *)P + 128) = 0LL;
    }
  }
  v13 = (_QWORD *)*((_QWORD *)P + 129);
  if ( v13 )
  {
    if ( v13[2] )
    {
      if ( *v13 )
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        (*(void (__fastcall **)(_QWORD))(v13[2] + 8LL))(*v13);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
    }
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)P + 129) = 0LL;
  }
  v14 = (void *)*((_QWORD *)P + 161);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = (char *)*((_QWORD *)P + 12);
  while ( v15 != P + 96 )
  {
    v19 = v15;
    v15 = *(char **)v15;
    ExFreePoolWithTag(v19, 0);
  }
  v16 = (char *)*((_QWORD *)P + 130);
  while ( v16 != P + 1040 )
  {
    v28 = v16;
    v16 = *(char **)v16;
    ExFreePoolWithTag(v28, 0);
  }
  while ( 1 )
  {
    v17 = (_QWORD *)*((_QWORD *)P + 14);
    if ( !v17 )
      break;
    *((_QWORD *)P + 14) = *v17;
    ExFreePoolWithTag(v17, 0);
  }
  EtwpClearPartitionContext((__int64 *)P + 165);
  v18 = (void *)*((_QWORD *)P + 166);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v4));
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8 * v4) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4132));
}

/*
 * XREFs of PspThreadFromTicket @ 0x140625D50
 * Callers:
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14025C298 (PsIsProcessInSilo.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14031C3B4 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x140625E70 (PspReferenceCidTableEntry.c)
 */

__int64 __fastcall PspThreadFromTicket(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 CurrentServerSilo; // rsi
  bool v8; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp+8h]

  v2 = a2;
  CurrentThread = KeGetCurrentThread();
  v11 = PspWorkOnBehalfEncodingKey ^ *a1;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(a2) = 6;
  v6 = PspReferenceCidTableEntry((int)v11, a2);
  if ( v6 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo(v5, v4);
    if ( (*(_DWORD *)(v6 + 1296) & 2) == 0 )
    {
      _InterlockedOr(v10, 0);
      if ( (*(_QWORD *)(v6 + 1280) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v6 + 1280));
      if ( (*(_DWORD *)(v6 + 1296) & 2) == 0 )
        goto LABEL_7;
    }
    if ( !PsIsProcessInSilo(*(struct _KPROCESS **)(v6 + 544), CurrentServerSilo) )
    {
LABEL_7:
      HalPutDmaAdapter((PADAPTER_OBJECT)v6);
      v6 = 0LL;
    }
  }
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v5);
  if ( !v6 )
    return 3221225483LL;
  *v2 = v6;
  if ( *(_DWORD *)(v6 + 1072) == HIDWORD(v11) )
    return 0LL;
  HalPutDmaAdapter((PADAPTER_OBJECT)v6);
  return 3221226021LL;
}

/*
 * XREFs of PspThreadFromTicket @ 0x14068F5A0
 * Callers:
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140241564 (ExfAcquireReleasePushLockExclusive.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14027DFA8 (PsIsProcessInSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     PspReferenceCidTableEntry @ 0x14068F6C0 (PspReferenceCidTableEntry.c)
 */

__int64 __fastcall PspThreadFromTicket(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 CurrentServerSilo; // rsi
  bool v6; // zf
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp+8h]

  v2 = a2;
  CurrentThread = KeGetCurrentThread();
  v9 = PspWorkOnBehalfEncodingKey ^ *a1;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(a2) = 6;
  v4 = PspReferenceCidTableEntry((int)v9, a2);
  if ( v4 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( (*(_DWORD *)(v4 + 1296) & 2) == 0 )
    {
      _InterlockedOr(v8, 0);
      if ( (*(_QWORD *)(v4 + 1280) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive(v4 + 1280);
      if ( (*(_DWORD *)(v4 + 1296) & 2) == 0 )
        goto LABEL_7;
    }
    if ( !PsIsProcessInSilo(*(struct _KPROCESS **)(v4 + 544), CurrentServerSilo) )
    {
LABEL_7:
      HalPutDmaAdapter((PADAPTER_OBJECT)v4);
      v4 = 0LL;
    }
  }
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !v4 )
    return 3221225483LL;
  *v2 = v4;
  if ( *(_DWORD *)(v4 + 1072) == HIDWORD(v9) )
    return 0LL;
  HalPutDmaAdapter((PADAPTER_OBJECT)v4);
  return 3221226021LL;
}

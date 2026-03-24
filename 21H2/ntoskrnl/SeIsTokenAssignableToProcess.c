/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x14071694C
 * Callers:
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x1407BBA40 (PspAssignPrimaryToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     RtlSidDominates @ 0x140252890 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14025299C (SepCopyTokenIntegrity.c)
 *     ObFastDereferenceObject @ 0x14027C610 (ObFastDereferenceObject.c)
 *     RtlSidDominatesForTrust @ 0x14027DDE0 (RtlSidDominatesForTrust.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     PsReferencePrimaryToken @ 0x140706D00 (PsReferencePrimaryToken.c)
 *     SepIsSiblingTokenByPointer @ 0x140716B0C (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x140716C00 (SepIsChildTokenByPointer.c)
 */

__int64 __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v6; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r12
  struct _KTHREAD *v10; // rax
  int v11; // ebx
  int v12; // r15d
  __int64 v13; // r13
  char v14; // bl
  bool v15; // [rsp+88h] [rbp+48h] BYREF
  char v16; // [rsp+90h] [rbp+50h] BYREF
  char v17; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  *a2 = 0;
  v16 = 0;
  v17 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v15 = 0;
  v6 = PsReferencePrimaryToken(Process);
  if ( !v6 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)v6 + 6), 1u);
  SepCopyTokenIntegrity((__int64)v6);
  v9 = *((_QWORD *)v6 + 138);
  ExReleaseResourceLite(*((PERESOURCE *)v6 + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (struct _DMA_ADAPTER *)v6);
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity(a1);
  v11 = *(_DWORD *)(a1 + 192);
  v12 = *(_DWORD *)(a1 + 196);
  v13 = *(_QWORD *)(a1 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v11 == 2 && v12 < 2 )
    return 3221225637LL;
  result = RtlSidDominates(0LL, 0LL, &v15);
  if ( (int)result >= 0 )
  {
    if ( !v15 )
      goto LABEL_13;
    v15 = 0;
    result = RtlSidDominatesForTrust(v9, v13, &v15);
    if ( (int)result < 0 )
      return result;
    if ( v15 )
    {
      result = SepIsChildTokenByPointer(a1, &v16);
      v14 = v16;
      if ( !v16 )
      {
        if ( (int)result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v17);
      }
    }
    else
    {
LABEL_13:
      v14 = v16;
    }
    if ( (int)result >= 0 )
    {
      if ( v14 || v17 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}

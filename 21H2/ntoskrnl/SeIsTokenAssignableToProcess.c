/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x1406C4F9C
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x1407BC1D0 (PspAssignPrimaryToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     RtlSidDominatesForTrust @ 0x14026BD80 (RtlSidDominatesForTrust.c)
 *     RtlSidDominates @ 0x140285740 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14028584C (SepCopyTokenIntegrity.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     SepIsSiblingTokenByPointer @ 0x1406C515C (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1406C5250 (SepIsChildTokenByPointer.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 */

NTSTATUS __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  struct _KPROCESS *Process; // rcx
  PERESOURCE *v6; // rbx
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *v13; // rax
  int v14; // ebx
  int v15; // r15d
  void *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // bl
  BOOLEAN Dominates; // [rsp+88h] [rbp+48h] BYREF
  char v22; // [rsp+90h] [rbp+50h] BYREF
  char v23; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  *a2 = 0;
  v22 = 0;
  v23 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  Dominates = 0;
  v6 = (PERESOURCE *)PsReferencePrimaryToken(Process);
  if ( !v6 )
    return -1073741823;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v6[6], 1u);
  SepCopyTokenIntegrity();
  v9 = v6[138];
  ExReleaseResourceLite(v6[6]);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (struct _DMA_ADAPTER *)v6);
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity();
  v14 = *(_DWORD *)(a1 + 192);
  v15 = *(_DWORD *)(a1 + 196);
  v16 = *(void **)(a1 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
  if ( v14 == 2 && v15 < 2 )
    return -1073741659;
  result = RtlSidDominates(0LL, 0LL, &Dominates);
  if ( result >= 0 )
  {
    if ( !Dominates )
      goto LABEL_13;
    Dominates = 0;
    result = RtlSidDominatesForTrust(v9, v16, &Dominates);
    if ( result < 0 )
      return result;
    if ( Dominates )
    {
      result = SepIsChildTokenByPointer(a1, &v22);
      v20 = v22;
      if ( !v22 )
      {
        if ( result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v23);
      }
    }
    else
    {
LABEL_13:
      v20 = v22;
    }
    if ( result >= 0 )
    {
      if ( v20 || v23 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}

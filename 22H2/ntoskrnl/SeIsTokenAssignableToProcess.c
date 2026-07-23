/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x14070DAF4
 * Callers:
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x1407BC200 (PspAssignPrimaryToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     RtlSidDominates @ 0x1402520F0 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x1402521FC (SepCopyTokenIntegrity.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     RtlSidDominatesForTrust @ 0x140346DF0 (RtlSidDominatesForTrust.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 *     SepIsSiblingTokenByPointer @ 0x14070DCB4 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x14070DDA8 (SepIsChildTokenByPointer.c)
 */

NTSTATUS __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  struct _KPROCESS *Process; // rcx
  PERESOURCE *v6; // rbx
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE v9; // r12
  struct _KTHREAD *v10; // rax
  int v11; // ebx
  int v12; // r15d
  void *v13; // r13
  char v14; // bl
  BOOLEAN Dominates; // [rsp+88h] [rbp+48h] BYREF
  char v16; // [rsp+90h] [rbp+50h] BYREF
  char v17; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  *a2 = 0;
  v16 = 0;
  v17 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  Dominates = 0;
  v6 = (PERESOURCE *)PsReferencePrimaryToken(Process);
  if ( !v6 )
    return -1073741823;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v6[6], 1u);
  SepCopyTokenIntegrity((__int64)v6);
  v9 = v6[138];
  ExReleaseResourceLite(v6[6]);
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
  v13 = *(void **)(a1 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v11 == 2 && v12 < 2 )
    return -1073741659;
  result = RtlSidDominates(0LL, 0LL, &Dominates);
  if ( result >= 0 )
  {
    if ( !Dominates )
      goto LABEL_13;
    Dominates = 0;
    result = RtlSidDominatesForTrust(v9, v13, &Dominates);
    if ( result < 0 )
      return result;
    if ( Dominates )
    {
      result = SepIsChildTokenByPointer(a1, &v16);
      v14 = v16;
      if ( !v16 )
      {
        if ( result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v17);
      }
    }
    else
    {
LABEL_13:
      v14 = v16;
    }
    if ( result >= 0 )
    {
      if ( v14 || v17 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}

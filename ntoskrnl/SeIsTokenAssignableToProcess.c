/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x140776104
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x14083F864 (PspAssignPrimaryToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     RtlSidDominatesForTrust @ 0x140247D00 (RtlSidDominatesForTrust.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     SepCopyTokenIntegrity @ 0x14030FED0 (SepCopyTokenIntegrity.c)
 *     RtlSidDominates @ 0x14030FF10 (RtlSidDominates.c)
 *     SepIsChildTokenByPointer @ 0x1407762B8 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140776354 (SepIsSiblingTokenByPointer.c)
 */

__int64 __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  _KPROCESS *Process; // r15
  ULONG_PTR v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r12
  struct _KTHREAD *v9; // rax
  int v10; // ebx
  int v11; // r15d
  __int64 v12; // r13
  __int64 result; // rax
  char v14; // bl
  void *Buf2[2]; // [rsp+20h] [rbp-20h] BYREF
  void *Buf1[2]; // [rsp+30h] [rbp-10h] BYREF
  bool v17; // [rsp+88h] [rbp+48h] BYREF
  char v18; // [rsp+90h] [rbp+50h] BYREF
  char v19; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  *a2 = 0;
  v18 = 0;
  v19 = 0;
  v17 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_OWORD *)Buf2 = 0LL;
  *(_OWORD *)Buf1 = 0LL;
  v6 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
  if ( !v6 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
  SepCopyTokenIntegrity(v6, (__int64)Buf1);
  v8 = *(_QWORD *)(v6 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.StaticBitmap[5], v6, 0x746C6644u);
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity(a1, (__int64)Buf2);
  v10 = *(_DWORD *)(a1 + 192);
  v11 = *(_DWORD *)(a1 + 196);
  v12 = *(_QWORD *)(a1 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v10 == 2 && v11 < 2 )
    return 3221225637LL;
  result = RtlSidDominates((_DWORD *)Buf1[0], (_DWORD *)Buf2[0], &v17);
  if ( (int)result >= 0 )
  {
    if ( !v17 )
      goto LABEL_16;
    v17 = 0;
    result = RtlSidDominatesForTrust(v8, v12, &v17);
    if ( (int)result < 0 )
      return result;
    if ( !v17 )
    {
LABEL_16:
      v14 = v18;
LABEL_11:
      if ( v14 || v19 )
        v2 = 1;
      *a2 = v2;
      return result;
    }
    result = SepIsChildTokenByPointer(a1, &v18);
    v14 = v18;
    if ( !v18 )
    {
      if ( (int)result < 0 )
        return result;
      result = SepIsSiblingTokenByPointer(a1, &v19);
    }
    if ( (int)result >= 0 )
      goto LABEL_11;
  }
  return result;
}

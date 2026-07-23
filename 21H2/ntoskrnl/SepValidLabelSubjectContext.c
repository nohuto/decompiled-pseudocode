/*
 * XREFs of SepValidLabelSubjectContext @ 0x1406974CC
 * Callers:
 *     RtlpSetSecurityObject @ 0x1406531E0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominates @ 0x140285740 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14028584C (SepCopyTokenIntegrity.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     SeSinglePrivilegeCheckEx @ 0x1406937A8 (SeSinglePrivilegeCheckEx.c)
 */

BOOLEAN __fastcall SepValidLabelSubjectContext(struct _SECURITY_SUBJECT_CONTEXT *a1, void *a2, char a3)
{
  PSID SeMediumMandatorySid; // rdi
  PACCESS_TOKEN ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  BOOLEAN result; // al
  BOOLEAN Dominates; // [rsp+40h] [rbp+8h] BYREF

  Dominates = 0;
  SeMediumMandatorySid = a2;
  if ( !a2 )
    SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
  ClientToken = a1->ClientToken;
  if ( !a1->ClientToken )
    ClientToken = a1->PrimaryToken;
  if ( *((_DWORD *)ClientToken + 48) == 2 && *((int *)ClientToken + 49) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
  SepCopyTokenIntegrity();
  ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  if ( (a3 & 8) != 0 )
  {
    if ( RtlSidDominates(SeMediumMandatorySid, SeExports->SeMediumMandatorySid, &Dominates) < 0 )
      return 0;
    if ( !Dominates )
      SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
  }
  if ( RtlSidDominates(0LL, SeMediumMandatorySid, &Dominates) < 0 )
    return 0;
  result = Dominates;
  if ( !Dominates )
    return SeSinglePrivilegeCheckEx((LUID)SeRelabelPrivilege, a1, 1);
  return result;
}

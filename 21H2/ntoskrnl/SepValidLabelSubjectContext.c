/*
 * XREFs of SepValidLabelSubjectContext @ 0x14079DB4C
 * Callers:
 *     RtlpSetSecurityObject @ 0x140726700 (RtlpSetSecurityObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlSidDominates @ 0x1402ED880 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x1402ED98C (SepCopyTokenIntegrity.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     SeSinglePrivilegeCheckEx @ 0x140724418 (SeSinglePrivilegeCheckEx.c)
 */

BOOLEAN __fastcall SepValidLabelSubjectContext(struct _SECURITY_SUBJECT_CONTEXT *a1, _DWORD *a2, char a3)
{
  _DWORD *SeMediumMandatorySid; // rdi
  __int64 ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al
  BOOLEAN v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  SeMediumMandatorySid = a2;
  if ( !a2 )
    SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
  ClientToken = (__int64)a1->ClientToken;
  if ( !a1->ClientToken )
    ClientToken = (__int64)a1->PrimaryToken;
  if ( *(_DWORD *)(ClientToken + 192) == 2 && *(int *)(ClientToken + 196) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(ClientToken + 48), 1u);
  SepCopyTokenIntegrity(ClientToken);
  ExReleaseResourceLite(*(PERESOURCE *)(ClientToken + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (a3 & 8) != 0 )
  {
    if ( (int)RtlSidDominates(SeMediumMandatorySid, (_DWORD *)SeExports->SeMediumMandatorySid, (bool *)&v9) < 0 )
      return 0;
    if ( !v9 )
      SeMediumMandatorySid = SeExports->SeMediumMandatorySid;
  }
  if ( (int)RtlSidDominates(0LL, SeMediumMandatorySid, (bool *)&v9) < 0 )
    return 0;
  result = v9;
  if ( !v9 )
    return SeSinglePrivilegeCheckEx((LUID)SeRelabelPrivilege, a1, 1);
  return result;
}

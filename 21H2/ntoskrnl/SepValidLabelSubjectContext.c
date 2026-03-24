/*
 * XREFs of SepValidLabelSubjectContext @ 0x140607A3C
 * Callers:
 *     RtlpSetSecurityObject @ 0x14065E3C0 (RtlpSetSecurityObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     RtlSidDominates @ 0x140252890 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14025299C (SepCopyTokenIntegrity.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     SeSinglePrivilegeCheckEx @ 0x140627698 (SeSinglePrivilegeCheckEx.c)
 */

char __fastcall SepValidLabelSubjectContext(__int64 *a1, char *a2, char a3)
{
  char *SeMediumMandatorySid; // rdi
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  char result; // al
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0;
  SeMediumMandatorySid = a2;
  if ( !a2 )
    SeMediumMandatorySid = (char *)SeExports->SeMediumMandatorySid;
  v6 = *a1;
  if ( !*a1 )
    v6 = a1[2];
  if ( *(_DWORD *)(v6 + 192) == 2 && *(int *)(v6 + 196) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
  SepCopyTokenIntegrity(v6);
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (a3 & 8) != 0 )
  {
    if ( (int)RtlSidDominates(SeMediumMandatorySid, (char *)SeExports->SeMediumMandatorySid, (bool *)&v10) < 0 )
      return 0;
    if ( !v10 )
      SeMediumMandatorySid = (char *)SeExports->SeMediumMandatorySid;
  }
  if ( (int)RtlSidDominates(0LL, SeMediumMandatorySid, (bool *)&v10) < 0 )
    return 0;
  result = v10;
  if ( !v10 )
  {
    LOBYTE(v8) = 1;
    return SeSinglePrivilegeCheckEx(SeRelabelPrivilege, a1, v8);
  }
  return result;
}

/*
 * XREFs of SepValidOwnerSubjectContext @ 0x1406816CC
 * Callers:
 *     RtlpNewSecurityObject @ 0x14064CD10 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1406D7180 (RtlpSetSecurityObject.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     RtlEqualSid @ 0x1403459F0 (RtlEqualSid.c)
 *     SeSinglePrivilegeCheckEx @ 0x140627AB8 (SeSinglePrivilegeCheckEx.c)
 *     SepIdAssignableAsOwner @ 0x1406817CC (SepIdAssignableAsOwner.c)
 */

BOOLEAN __fastcall SepValidOwnerSubjectContext(struct _SECURITY_SUBJECT_CONTEXT *a1, void *a2, char a3)
{
  bool v3; // di
  PACCESS_TOKEN PrimaryToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // esi
  unsigned int v9; // ebp
  __int64 v10; // r12

  v3 = 0;
  if ( !a2 )
    return 0;
  if ( a3 || (PrimaryToken = a1->ClientToken) == 0LL )
    PrimaryToken = a1->PrimaryToken;
  if ( *((_DWORD *)PrimaryToken + 48) == 2 && *((int *)PrimaryToken + 49) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)PrimaryToken + 6), 1u);
  v9 = *((_DWORD *)PrimaryToken + 31);
  if ( v9 )
  {
    v10 = *((_QWORD *)PrimaryToken + 19);
    while ( !RtlEqualSid(a2, *(PSID *)(v10 + 16LL * v8)) )
    {
      if ( ++v8 >= v9 )
        goto LABEL_10;
    }
    v3 = (unsigned __int8)SepIdAssignableAsOwner(PrimaryToken, v8) != 0;
  }
LABEL_10:
  ExReleaseResourceLite(*((PERESOURCE *)PrimaryToken + 6));
  KeLeaveCriticalRegion();
  if ( !v3 )
    return SeSinglePrivilegeCheckEx(SeRestorePrivilege, a1, 1);
  return v3;
}

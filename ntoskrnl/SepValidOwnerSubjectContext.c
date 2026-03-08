/*
 * XREFs of SepValidOwnerSubjectContext @ 0x14069D3EC
 * Callers:
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SepIdAssignableAsOwner @ 0x14069D4F0 (SepIdAssignableAsOwner.c)
 *     SeSinglePrivilegeCheckEx @ 0x1406BA46C (SeSinglePrivilegeCheckEx.c)
 */

char __fastcall SepValidOwnerSubjectContext(__int64 *a1, void *a2, char a3)
{
  bool v3; // di
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // esi
  unsigned int v9; // r15d
  __int64 v10; // r12
  __int64 v11; // r8

  v3 = 0;
  if ( !a2 )
    return 0;
  if ( a3 || (v6 = *a1) == 0 )
    v6 = a1[2];
  if ( *(_DWORD *)(v6 + 192) == 2 && *(int *)(v6 + 196) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
  v9 = *(_DWORD *)(v6 + 124);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v6 + 152);
    while ( !RtlEqualSid(a2, *(PSID *)(v10 + 16LL * v8)) )
    {
      if ( ++v8 >= v9 )
        goto LABEL_10;
    }
    v3 = (unsigned __int8)SepIdAssignableAsOwner(v6, v8) != 0;
  }
LABEL_10:
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
  KeLeaveCriticalRegion();
  if ( !v3 )
  {
    LOBYTE(v11) = 1;
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeSinglePrivilegeCheckEx)(SeRestorePrivilege, a1, v11);
  }
  return v3;
}

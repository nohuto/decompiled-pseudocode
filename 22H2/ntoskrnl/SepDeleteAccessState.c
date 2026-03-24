/*
 * XREFs of SepDeleteAccessState @ 0x140345670
 * Callers:
 *     SeDeleteAccessState @ 0x1405DC900 (SeDeleteAccessState.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     SeSubProcessToken @ 0x140603E44 (SeSubProcessToken.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140607670 (PspOneDirectionSecurityDomainCombine.c)
 *     NtCreateUserProcess @ 0x14060A630 (NtCreateUserProcess.c)
 *     PsOpenThread @ 0x140626120 (PsOpenThread.c)
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x140653F10 (ObOpenObjectByPointer.c)
 *     PspCombineSecurityDomains @ 0x140685D04 (PspCombineSecurityDomains.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140688794 (CmpCheckKeySecurityDescriptorAccess.c)
 *     WmipCreateGuidObject @ 0x1406B8578 (WmipCreateGuidObject.c)
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 *     ObOpenObjectByNameEx @ 0x1406CEA90 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1406D9EC0 (ObReferenceObjectByName.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FE5C (CmpDoAccessCheckOnKCB.c)
 *     PspDeleteObjectAccessState @ 0x14090A12C (PspDeleteObjectAccessState.c)
 *     CMFCheckAccess @ 0x1409582C4 (CMFCheckAccess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     SeDeassignSecurity @ 0x1406842B0 (SeDeassignSecurity.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteAccessState(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void (*v5)(void); // rax

  v2 = *(_QWORD *)(a1 + 72);
  if ( *(_BYTE *)(a1 + 11) )
    ExFreePoolWithTag(*(PVOID *)v2, 0);
  v3 = *(void **)(a1 + 136);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(void **)(a1 + 152);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 48) )
      SeDeassignSecurity((PSECURITY_DESCRIPTOR *)(v2 + 48));
    v5 = *(void (**)(void))(v2 + 72);
    if ( v5 && *(_QWORD *)(v2 + 80) )
    {
      if ( *(_QWORD *)(v2 + 56) )
        v5();
      if ( *(_QWORD *)(v2 + 64) )
        (*(void (__fastcall **)(_QWORD))(v2 + 72))(*(_QWORD *)(v2 + 80));
    }
  }
}

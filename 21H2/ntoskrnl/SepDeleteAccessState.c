/*
 * XREFs of SepDeleteAccessState @ 0x14026A600
 * Callers:
 *     PspCombineSecurityDomains @ 0x140600714 (PspCombineSecurityDomains.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406038E0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     WmipCreateGuidObject @ 0x1406345A8 (WmipCreateGuidObject.c)
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     ObOpenObjectByNameEx @ 0x14064AAF0 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140655F20 (ObReferenceObjectByName.c)
 *     PsOpenThread @ 0x140691E18 (PsOpenThread.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140696CA0 (PspOneDirectionSecurityDomainCombine.c)
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 *     SeDeleteAccessState @ 0x1406CC080 (SeDeleteAccessState.c)
 *     ObReferenceObjectByNameEx @ 0x1406CDDFC (ObReferenceObjectByNameEx.c)
 *     SeSubProcessToken @ 0x1406F328C (SeSubProcessToken.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FF6C (CmpDoAccessCheckOnKCB.c)
 *     PspDeleteObjectAccessState @ 0x14090A23C (PspDeleteObjectAccessState.c)
 *     CMFCheckAccess @ 0x140958444 (CMFCheckAccess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     SeDeassignSecurity @ 0x1405FED30 (SeDeassignSecurity.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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

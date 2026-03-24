/*
 * XREFs of SepDeleteAccessState @ 0x14027C660
 * Callers:
 *     SeDeleteAccessState @ 0x1405DC900 (SeDeleteAccessState.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     SeSubProcessToken @ 0x140603B5C (SeSubProcessToken.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140607210 (PspOneDirectionSecurityDomainCombine.c)
 *     NtCreateUserProcess @ 0x14060A1D0 (NtCreateUserProcess.c)
 *     PsOpenThread @ 0x140625D00 (PsOpenThread.c)
 *     WmipCreateGuidObject @ 0x14063F798 (WmipCreateGuidObject.c)
 *     PspInsertThread @ 0x140649028 (PspInsertThread.c)
 *     ObOpenObjectByNameEx @ 0x140655CD0 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140661100 (ObReferenceObjectByName.c)
 *     PspCombineSecurityDomains @ 0x1406A0F84 (PspCombineSecurityDomains.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406A5CB0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x140706880 (ObOpenObjectByPointer.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FE0C (CmpDoAccessCheckOnKCB.c)
 *     PspDeleteObjectAccessState @ 0x14090A0DC (PspDeleteObjectAccessState.c)
 *     CMFCheckAccess @ 0x140958274 (CMFCheckAccess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     SeDeassignSecurity @ 0x14069F9F0 (SeDeassignSecurity.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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

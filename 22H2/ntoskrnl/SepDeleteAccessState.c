/*
 * XREFs of SepDeleteAccessState @ 0x140232250
 * Callers:
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     SeSubProcessToken @ 0x1406B71F8 (SeSubProcessToken.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7EA8 (PspOneDirectionSecurityDomainCombine.c)
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     PspInsertProcess @ 0x1406B9FA4 (PspInsertProcess.c)
 *     ObReferenceObjectByName @ 0x1406C2D00 (ObReferenceObjectByName.c)
 *     WmipCreateGuidObject @ 0x1406C50E0 (WmipCreateGuidObject.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E23B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObOpenObjectByNameEx @ 0x1406ED090 (ObOpenObjectByNameEx.c)
 *     PsOpenProcess @ 0x1406F3DB0 (PsOpenProcess.c)
 *     ObDuplicateObject @ 0x1406FB9A0 (ObDuplicateObject.c)
 *     ObReferenceObjectByNameEx @ 0x1407153CC (ObReferenceObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x1407379D0 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x140737BD0 (NtOpenProcessTokenEx.c)
 *     PspInsertThread @ 0x14073F3AC (PspInsertThread.c)
 *     PsOpenThread @ 0x1407BBD70 (PsOpenThread.c)
 *     PspCombineSecurityDomains @ 0x1407C729C (PspCombineSecurityDomains.c)
 *     NtGetNextProcess @ 0x1407D4BE0 (NtGetNextProcess.c)
 *     SeDeleteAccessState @ 0x1407DB4C0 (SeDeleteAccessState.c)
 *     NtGetNextThread @ 0x1407DF590 (NtGetNextThread.c)
 *     PsCreateMinimalProcess @ 0x140853DBC (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14085CC20 (PspCreateProcess.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9410 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x140A01994 (CMFCheckAccess.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18024 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A182E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A18FDC (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x140A1916C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     SeDeassignSecurity @ 0x1407BF990 (SeDeassignSecurity.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteAccessState(__int64 a1)
{
  __int64 v2; // rbx
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
    if ( *(_QWORD *)(v2 + 48) && (*(_DWORD *)(a1 + 12) & 0x4000000) == 0 )
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

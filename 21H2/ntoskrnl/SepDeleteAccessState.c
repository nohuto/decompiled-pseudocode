/*
 * XREFs of SepDeleteAccessState @ 0x1403478A0
 * Callers:
 *     PsOpenThread @ 0x1406634A0 (PsOpenThread.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     SeDeleteAccessState @ 0x14066C150 (SeDeleteAccessState.c)
 *     PspInsertProcess @ 0x14066D0AC (PspInsertProcess.c)
 *     SeSubProcessToken @ 0x140671BE0 (SeSubProcessToken.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406B5158 (CmpCheckKeySecurityDescriptorAccess.c)
 *     NtGetNextProcess @ 0x1406D2920 (NtGetNextProcess.c)
 *     NtGetNextThread @ 0x1406D7150 (NtGetNextThread.c)
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x1407279B0 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x1407292A0 (PsOpenProcess.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     PspCombineSecurityDomains @ 0x1407527F4 (PspCombineSecurityDomains.c)
 *     WmipCreateGuidObject @ 0x140782F2C (WmipCreateGuidObject.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     PspDeleteObjectAccessState @ 0x140882484 (PspDeleteObjectAccessState.c)
 *     CmKeyBodyRemapToVirtual @ 0x140915DB8 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14091607C (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoAccessCheckOnKCB @ 0x140916788 (CmpDoAccessCheckOnKCB.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C6000 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x140A03FB4 (CMFCheckAccess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     SeDeassignSecurity @ 0x1406BC2D0 (SeDeassignSecurity.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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

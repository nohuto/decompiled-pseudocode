/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x14070C300
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x14023FE88 (FsRtlpAttachOplockKey.c)
 *     IopDeleteFileObjectExtension @ 0x140298CFC (IopDeleteFileObjectExtension.c)
 *     FsRtlpCleanupEcps @ 0x14070C240 (FsRtlpCleanupEcps.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14070C280 (FsRtlFreeExtraCreateParameterList.c)
 *     PspCreateUserProcessEcp @ 0x14070D8D0 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14077E41C (IopSymlinkAllocateAndAddECP.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopCreateFile @ 0x1407CE5A0 (IopCreateFile.c)
 *     IopGraftName @ 0x14087A8D0 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x14087BDFC (IopSymlinkUpdateECP.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  char *v1; // rbx
  __int64 v2; // rdi
  void (__fastcall *v3)(PVOID, char *); // rax
  struct _PAGED_LOOKASIDE_LIST *v5; // rcx

  v1 = (char *)EcpContext - 72;
  v2 = 0LL;
  v3 = (void (__fastcall *)(PVOID, char *))*((_QWORD *)EcpContext - 4);
  if ( v3 )
    v3(EcpContext, v1 + 24);
  if ( (*((_DWORD *)v1 + 12) & 0x20) != 0 && FltMgrCallbacks )
  {
    v2 = *((_QWORD *)v1 + 8);
    (*(void (__fastcall **)(__int64, PVOID))FltMgrCallbacks)(v2, EcpContext);
  }
  v5 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)v1 + 7);
  if ( v5 )
    ExFreeToNPagedLookasideList(v5, v1);
  else
    ExFreePoolWithTag(v1, 0);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(FltMgrCallbacks + 8))(v2);
}

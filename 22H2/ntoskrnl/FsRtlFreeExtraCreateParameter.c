/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x14060CE40
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1402524EC (IopDeleteFileObjectExtension.c)
 *     FsRtlCheckOplockEx2 @ 0x1402D44D0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x1402DA25C (FsRtlpAttachOplockKey.c)
 *     IopCreateFile @ 0x14060B920 (IopCreateFile.c)
 *     FsRtlpCleanupEcps @ 0x14060CD20 (FsRtlpCleanupEcps.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14060CD80 (FsRtlFreeExtraCreateParameterList.c)
 *     PspCreateUserProcessEcp @ 0x14060D1E4 (PspCreateUserProcessEcp.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140650C60 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkUpdateECP @ 0x140682B0C (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14068303C (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x140683164 (IopGraftName.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  void (__fastcall *v1)(PVOID, char *); // rax
  __int64 v2; // rdi
  __int64 v4; // rcx

  v1 = (void (__fastcall *)(PVOID, char *))*((_QWORD *)EcpContext - 4);
  v2 = 0LL;
  if ( v1 )
    v1(EcpContext, (char *)EcpContext - 48);
  if ( (*((_DWORD *)EcpContext - 6) & 0x20) != 0 && FltMgrCallbacks )
  {
    v2 = *((_QWORD *)EcpContext - 1);
    (*(void (__fastcall **)(__int64, PVOID))FltMgrCallbacks)(v2, EcpContext);
  }
  v4 = *((_QWORD *)EcpContext - 2);
  if ( v4 )
  {
    if ( (*((_DWORD *)EcpContext - 6) & 0x40) != 0 )
    {
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)v4, (char *)EcpContext - 72);
    }
    else
    {
      ++*(_DWORD *)(v4 + 28);
      if ( *(_WORD *)v4 >= *(_WORD *)(v4 + 16) )
      {
        ++*(_DWORD *)(v4 + 32);
        (*(void (__fastcall **)(char *))(v4 + 56))((char *)EcpContext - 72);
      }
      else
      {
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v4, (PSLIST_ENTRY)((char *)EcpContext - 72));
      }
    }
  }
  else
  {
    ExFreePoolWithTag((char *)EcpContext - 72, 0);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(FltMgrCallbacks + 8))(v2);
}

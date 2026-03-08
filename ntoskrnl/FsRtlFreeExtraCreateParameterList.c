/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x14070C280
 * Callers:
 *     FsRtlpCleanupEcps @ 0x14070C240 (FsRtlpCleanupEcps.c)
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 *     PspCreateUserProcessEcp @ 0x14070D8D0 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14077E41C (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14070C300 (FsRtlFreeExtraCreateParameter.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameterList(PECP_LIST EcpList)
{
  _LIST_ENTRY *p_EcpList; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v4; // rax

  p_EcpList = &EcpList->EcpList;
  while ( 1 )
  {
    Flink = p_EcpList->Flink;
    if ( p_EcpList->Flink == p_EcpList )
      break;
    if ( Flink->Blink != p_EcpList || (v4 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_EcpList->Flink = v4;
    v4->Blink = p_EcpList;
    Flink->Blink = 0LL;
    Flink->Flink = 0LL;
    FsRtlFreeExtraCreateParameter(&Flink[4]);
  }
  if ( (EcpList->Flags & 4) != 0 )
    ExFreeToNPagedLookasideList(&FsRtlEcpListLookaside, EcpList);
  else
    ExFreePoolWithTag(EcpList, 0);
}

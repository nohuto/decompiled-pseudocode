/*
 * XREFs of FsRtlpCleanupEcps @ 0x14070C240
 * Callers:
 *     NtQueryFullAttributesFile @ 0x14070BD80 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x14070C010 (NtQueryAttributesFile.c)
 *     IopCleanupExtraCreateParameters @ 0x14076D500 (IopCleanupExtraCreateParameters.c)
 *     IopFastQueryNetworkAttributes @ 0x1409449B8 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     FsRtlFreeExtraCreateParameterList @ 0x14070C280 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14070C300 (FsRtlFreeExtraCreateParameter.c)
 */

char __fastcall FsRtlpCleanupEcps(struct _ECP_LIST *a1)
{
  unsigned int Flags; // eax
  _LIST_ENTRY *p_EcpList; // rdi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v5; // rdx
  struct _LIST_ENTRY *Blink; // rax

  Flags = a1->Flags;
  if ( (Flags & 0x3F0) != 0 )
  {
    a1->Flags = Flags - 16;
    return 1;
  }
  if ( (Flags & 1) == 0 )
  {
    FsRtlFreeExtraCreateParameterList(a1);
    return 1;
  }
  p_EcpList = &a1->EcpList;
  Flink = a1->EcpList.Flink;
  while ( Flink != p_EcpList )
  {
    v5 = Flink;
    Flink = Flink->Flink;
    if ( ((__int64)v5[2].Blink & 1) == 0 )
    {
      if ( Flink->Blink != v5 || (Blink = v5->Blink, Blink->Flink != v5) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      v5->Blink = 0LL;
      v5->Flink = 0LL;
      FsRtlFreeExtraCreateParameter(&v5[4]);
    }
  }
  return 0;
}

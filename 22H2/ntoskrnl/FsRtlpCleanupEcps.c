/*
 * XREFs of FsRtlpCleanupEcps @ 0x14060CD20
 * Callers:
 *     NtQueryFullAttributesFile @ 0x14060C860 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x14060CAF0 (NtQueryAttributesFile.c)
 *     IopCleanupExtraCreateParameters @ 0x1406A6714 (IopCleanupExtraCreateParameters.c)
 *     IopFastQueryNetworkAttributes @ 0x140894198 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     FsRtlFreeExtraCreateParameterList @ 0x14060CD80 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060CE40 (FsRtlFreeExtraCreateParameter.c)
 */

char __fastcall FsRtlpCleanupEcps(struct _ECP_LIST *a1)
{
  unsigned int Flags; // eax
  _LIST_ENTRY *p_EcpList; // rdi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v5; // rdx
  struct _LIST_ENTRY *v6; // rcx
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
    v6 = Flink;
    Flink = Flink->Flink;
    if ( ((__int64)v5[2].Blink & 1) == 0 )
    {
      if ( Flink->Blink != v6 || (Blink = v6->Blink, Blink->Flink != v6) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      v6->Flink = 0LL;
      v5->Blink = 0LL;
      FsRtlFreeExtraCreateParameter(&v5[4]);
    }
  }
  return 0;
}

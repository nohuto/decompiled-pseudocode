PSLIST_ENTRY __fastcall EtwpReleaseStackLookasideListEntry(__int64 a1)
{
  return RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)(a1 - 16));
}

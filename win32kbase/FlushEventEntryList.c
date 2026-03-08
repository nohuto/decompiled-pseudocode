/*
 * XREFs of FlushEventEntryList @ 0x1C0301BD8
 * Callers:
 *     FlushLookUpTableBucket @ 0x1C00C6034 (FlushLookUpTableBucket.c)
 * Callees:
 *     DestroyEventEntry @ 0x1C00C6144 (DestroyEventEntry.c)
 */

void __fastcall FlushEventEntryList(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor)
{
  PCEVENT_DESCRIPTOR v2; // rdi
  int v4; // edx
  __int64 v5; // rcx
  const EVENT_DESCRIPTOR *Keyword; // rbx

  if ( EventDescriptor )
  {
    v2 = EventDescriptor;
    do
    {
      v4 = 2;
      if ( (unsigned int)BYTE5(v2[2].Keyword) + 2 > 2 )
      {
        v5 = 32LL;
        do
        {
          v5 += 16LL;
          ++v4;
          *(_BYTE *)(v5 + *(_QWORD *)&v2[1].Id - 3) = 0;
        }
        while ( v4 < BYTE5(v2[2].Keyword) + 2 );
      }
      EtwWriteTransfer(RegHandle, v2, 0LL, 0LL, BYTE4(v2[2].Keyword), *(PEVENT_DATA_DESCRIPTOR *)&v2[1].Id);
      Keyword = (const EVENT_DESCRIPTOR *)v2[1].Keyword;
      DestroyEventEntry((__int64)v2);
      v2 = Keyword;
    }
    while ( Keyword );
  }
}

/*
 * XREFs of EtwpCovSampLookasidePop @ 0x140461CA8
 * Callers:
 *     EtwpCovSampCaptureBufferGet @ 0x14046197C (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampSampleBufferReserve @ 0x140461E06 (EtwpCovSampSampleBufferReserve.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406010A0 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140461C2A (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampCaptureQueueRebalance @ 0x1406012C8 (EtwpCovSampCaptureQueueRebalance.c)
 */

PSLIST_ENTRY __fastcall EtwpCovSampLookasidePop(__int64 a1, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( *(_WORD *)a2 && (result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)a2)) != 0LL )
  {
    if ( *(_DWORD *)(a2 + 40) )
    {
      result->Next = (_SLIST_ENTRY *)6941;
      return result;
    }
    EtwpCovSampCaptureReleaseToLookaside(a1, a2, result);
  }
  else if ( *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
    EtwpCovSampCaptureQueueRebalance(a1);
  }
  return 0LL;
}

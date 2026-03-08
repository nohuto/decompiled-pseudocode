/*
 * XREFs of PfFbBufferListFlushStandby @ 0x14035B78C
 * Callers:
 *     PfSnEndTrace @ 0x1407E37B8 (PfSnEndTrace.c)
 *     PfpFlushEventBuffers @ 0x1407E5B18 (PfpFlushEventBuffers.c)
 *     PfGetCompletedTrace @ 0x1407E76DC (PfGetCompletedTrace.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     PfFbBufferListInsertInFree @ 0x14035B6E4 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall PfFbBufferListFlushStandby(_SLIST_ENTRY *RunRef)
{
  PSLIST_ENTRY v2; // rdi
  PSLIST_ENTRY v3; // rsi

  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)RunRef) )
  {
    v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)&RunRef[2]);
    while ( v2 )
    {
      v3 = v2;
      v2 = v2->Next;
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)RunRef) )
        (*((void (__fastcall **)(PSLIST_ENTRY))&RunRef[6].Next + 1))(v3);
      else
        PfFbBufferListInsertInFree(RunRef, v3, LODWORD(v3[2].Next) - (_DWORD)v3, *((_DWORD *)&v3[2].Next + 3), 0);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)RunRef);
  }
}

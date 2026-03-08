/*
 * XREFs of PfFbBufferListInsertInFree @ 0x14035B6E4
 * Callers:
 *     PfTFullEventListAdd @ 0x1402EE12C (PfTFullEventListAdd.c)
 *     PfFbBufferListAllocateTemporary @ 0x14035B4C8 (PfFbBufferListAllocateTemporary.c)
 *     PfFbBufferListFlushStandby @ 0x14035B78C (PfFbBufferListFlushStandby.c)
 *     PfFbBufferListAllocate @ 0x14039C990 (PfFbBufferListAllocate.c)
 *     PfpFlushEventBuffers @ 0x1407E5B18 (PfpFlushEventBuffers.c)
 *     PfpRepurposeNameLoggingTrace @ 0x1407E6908 (PfpRepurposeNameLoggingTrace.c)
 *     PfTCleanup @ 0x14097C168 (PfTCleanup.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PfFbBufferListInsertInFree(_SLIST_ENTRY *RunRef, struct _SLIST_ENTRY *P, int a3, int a4, int a5)
{
  _SLIST_ENTRY *v7; // r8
  __int64 Next_low; // rcx
  char *v9; // rcx

  if ( (a4 & 1) != 0 && LOWORD(RunRef[1].Next) + (unsigned int)LOWORD(RunRef[2].Next) >= (int)KeNumberProcessors_0 + 1 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[7], -a3);
    ExFreePoolWithTag(P, HIDWORD(RunRef[4].Next));
  }
  else
  {
    v7 = (struct _SLIST_ENTRY *)((char *)P + a3);
    P[1].Next = RunRef;
    P[2].Next = v7;
    Next_low = LODWORD(RunRef[5].Next);
    *((_DWORD *)&P[2].Next + 2) = 0;
    v9 = (char *)P + Next_low;
    *((_QWORD *)&P[1].Next + 1) = v9;
    *((_DWORD *)&P[2].Next + 3) = a4;
    memset(v9, 0, (char *)v7 - v9);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[1], P);
  }
  if ( a5 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)RunRef);
}

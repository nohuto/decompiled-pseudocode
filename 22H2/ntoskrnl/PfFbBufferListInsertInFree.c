/*
 * XREFs of PfFbBufferListInsertInFree @ 0x14026E808
 * Callers:
 *     PfFbBufferListFlushStandby @ 0x14026E8B0 (PfFbBufferListFlushStandby.c)
 *     PfTFullEventListAdd @ 0x14030F56C (PfTFullEventListAdd.c)
 *     PfFbBufferListAllocateTemporary @ 0x140323064 (PfFbBufferListAllocateTemporary.c)
 *     PfFbBufferListAllocate @ 0x1403C4C84 (PfFbBufferListAllocate.c)
 *     PfpFlushEventBuffers @ 0x140631270 (PfpFlushEventBuffers.c)
 *     PfpRepurposeNameLoggingTrace @ 0x140634B24 (PfpRepurposeNameLoggingTrace.c)
 *     PfTCleanup @ 0x1408E040C (PfTCleanup.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PfFbBufferListInsertInFree(_SLIST_ENTRY *RunRef, _SLIST_ENTRY *P, int a3, int a4, int a5)
{
  _SLIST_ENTRY *v7; // r8
  __int64 v8; // rcx
  char *v9; // rcx

  if ( (a4 & 1) != 0 && LOWORD(RunRef[1].Next) + (unsigned int)LOWORD(RunRef[2].Next) >= (int)KeNumberProcessors_0 + 1 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, -a3);
    ExFreePoolWithTag(P, HIDWORD(RunRef[4].Next));
  }
  else
  {
    v7 = (_SLIST_ENTRY *)((char *)P + a3);
    P[1].Next = RunRef;
    P[2].Next = v7;
    v8 = *((unsigned int *)&RunRef[4].Next + 3);
    *((_DWORD *)&P[2].Next + 2) = 0;
    v9 = (char *)P + v8;
    *((_QWORD *)&P[1].Next + 1) = v9;
    *((_DWORD *)&P[2].Next + 3) = a4;
    memset(v9, 0, (char *)v7 - v9);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[1], P);
  }
  if ( a5 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)RunRef);
}

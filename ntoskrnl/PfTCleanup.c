/*
 * XREFs of PfTCleanup @ 0x14097C168
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1407E2A94 (PfSetSuperfetchInformation.c)
 *     PfTStart @ 0x140844B00 (PfTStart.c)
 *     PfpParametersPropagate @ 0x14097D050 (PfpParametersPropagate.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PfFbBufferListInsertInFree @ 0x14035B6E4 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 *     PfFbBufferListShutdown @ 0x140580BA4 (PfFbBufferListShutdown.c)
 *     PfTTraceListFree @ 0x1407E7AC8 (PfTTraceListFree.c)
 *     PfTCleanupBuffers @ 0x14097C31C (PfTCleanupBuffers.c)
 *     PfTTraceListTrim @ 0x14097C3AC (PfTTraceListTrim.c)
 *     PfFbBufferListCleanup @ 0x14097D380 (PfFbBufferListCleanup.c)
 *     PfTAccessTracingCleanup @ 0x140A844E0 (PfTAccessTracingCleanup.c)
 */

LONG_PTR __fastcall PfTCleanup(__int64 a1, __int64 a2)
{
  bool v4; // bp
  PSLIST_ENTRY v5; // rbx
  PSLIST_ENTRY v6; // rdx
  LONG_PTR result; // rax
  void *v8; // rcx
  _QWORD *v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v9[1] = v9;
  v9[0] = v9;
  v4 = KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 104);
  PfTAccessTracingCleanup(a1, a2, 1LL);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
  *(_DWORD *)(a1 + 540) = 0;
  *(_DWORD *)(a1 + 548) = 0;
  PfTTraceListTrim(0LL, 0LL, v9);
  PfTTraceListTrim(1LL, 0LL, v9);
  *(_DWORD *)(a1 + 552) = 0;
  PfTAccessTracingCleanup(a1, a2, 2LL);
  ExReleaseFastMutex((PFAST_MUTEX)(a1 + 560));
  PfTTraceListFree(v9);
  *(_DWORD *)(a1 + 496) = 0;
  v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 480));
  while ( v5 )
  {
    v6 = v5;
    v5 = v5->Next;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)(a1 + 352),
      v6,
      LODWORD(v6[2].Next) - (_DWORD)v6,
      *((_DWORD *)&v6[2].Next + 3),
      1);
  }
  PfFbBufferListShutdown((struct _EX_RUNDOWN_REF *)(a1 + 224));
  PfFbBufferListShutdown((struct _EX_RUNDOWN_REF *)(a1 + 352));
  if ( !v4 && *(_QWORD *)(a1 + 104) )
  {
    KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
    KeWaitForSingleObject(*(PVOID *)(a1 + 104), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(a1 + 104));
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  PfTCleanupBuffers(&unk_140C64DD8);
  PfTCleanupBuffers(&unk_140C64E00);
  PfFbBufferListCleanup(a1 + 224);
  result = PfFbBufferListCleanup(a1 + 352);
  v8 = *(void **)(a1 + 616);
  if ( v8 )
  {
    result = ObfDereferenceObject(v8);
    *(_QWORD *)(a1 + 616) = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}

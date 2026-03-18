/*
 * XREFs of PfTCleanup @ 0x14097F218
 * Callers:
 *     PfSetSuperfetchInformation @ 0x14075FEA4 (PfSetSuperfetchInformation.c)
 *     PfTStart @ 0x140847C60 (PfTStart.c)
 *     PfpParametersPropagate @ 0x140980100 (PfpParametersPropagate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     PfFbBufferListInsertInFree @ 0x1402F5694 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x140428870 (RtlpInterlockedFlushSList.c)
 *     PfFbBufferListShutdown @ 0x1405830D4 (PfFbBufferListShutdown.c)
 *     PfTTraceListFree @ 0x140760950 (PfTTraceListFree.c)
 *     PfTCleanupBuffers @ 0x14097F3CC (PfTCleanupBuffers.c)
 *     PfTTraceListTrim @ 0x14097F45C (PfTTraceListTrim.c)
 *     PfFbBufferListCleanup @ 0x140980430 (PfFbBufferListCleanup.c)
 *     PfTAccessTracingCleanup @ 0x140A874E0 (PfTAccessTracingCleanup.c)
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
  PfTCleanupBuffers(&unk_140C65258);
  PfTCleanupBuffers(&unk_140C65280);
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

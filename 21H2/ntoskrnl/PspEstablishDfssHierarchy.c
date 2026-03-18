/*
 * XREFs of PspEstablishDfssHierarchy @ 0x1409B01E0
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1406822EC (PspEstablishJobHierarchy.c)
 * Callees:
 *     KeRemoveSchedulingGroup @ 0x1402075A4 (KeRemoveSchedulingGroup.c)
 *     KeInsertSchedulingGroup @ 0x140208434 (KeInsertSchedulingGroup.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionObjectByProcess @ 0x14059973C (MmGetSessionObjectByProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x14070F320 (MmGetSessionSchedulingGroupByProcess.c)
 */

LONG_PTR __fastcall PspEstablishDfssHierarchy(__int64 a1, __int64 a2, int a3)
{
  LONG_PTR result; // rax
  __int64 SessionSchedulingGroupByProcess; // rdi
  __int64 v6; // rcx
  int v7; // r8d
  void *v8; // rsi
  void *v9; // rcx

  result = (unsigned int)(a3 - 1);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(a2);
    result = MmGetSessionObjectByProcess(v6);
    v8 = (void *)result;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 1272) + 1200LL) || *(_QWORD *)(a1 + 1208) == SessionSchedulingGroupByProcess )
    {
      if ( v7 == 1 )
      {
        result = *(_QWORD *)(a1 + 1272);
        if ( result == a1 && *(_QWORD *)(a1 + 1200) && !*(_DWORD *)(a1 + 216) && *(void **)(a1 + 1304) != v8 )
        {
          KeRemoveSchedulingGroup(*(unsigned __int16 **)(a1 + 1208));
          KeInsertSchedulingGroup(
            *(_QWORD *)(a1 + 1200) + 128LL,
            *(_QWORD *)(*(_QWORD *)(a1 + 1200) + 128LL),
            SessionSchedulingGroupByProcess);
          v9 = *(void **)(a1 + 1304);
          if ( v9 )
            ObfDereferenceObjectWithTag(v9, 0x624A7350u);
          *(_QWORD *)(a1 + 1304) = v8;
          return ObfReferenceObjectWithTag(v8, 0x624A7350u);
        }
      }
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 1272) + 1208LL) != SessionSchedulingGroupByProcess )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1272) + 1208LL) = SessionSchedulingGroupByProcess;
        result = *(_QWORD *)(a1 + 1272);
        *(_QWORD *)(result + 1304) = v8;
      }
      *(_QWORD *)(a1 + 1208) = SessionSchedulingGroupByProcess;
    }
  }
  return result;
}

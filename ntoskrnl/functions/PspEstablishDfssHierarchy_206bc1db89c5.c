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
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 1296) + 1224LL) || *(_QWORD *)(a1 + 1232) == SessionSchedulingGroupByProcess )
    {
      if ( v7 == 1 )
      {
        result = *(_QWORD *)(a1 + 1296);
        if ( result == a1 && *(_QWORD *)(a1 + 1224) && !*(_DWORD *)(a1 + 216) && *(void **)(a1 + 1328) != v8 )
        {
          KeRemoveSchedulingGroup(*(unsigned __int16 **)(a1 + 1232));
          KeInsertSchedulingGroup(
            *(_QWORD *)(a1 + 1224) + 128LL,
            *(_QWORD *)(*(_QWORD *)(a1 + 1224) + 128LL),
            SessionSchedulingGroupByProcess);
          v9 = *(void **)(a1 + 1328);
          if ( v9 )
            ObfDereferenceObjectWithTag(v9, 0x624A7350u);
          *(_QWORD *)(a1 + 1328) = v8;
          return ObfReferenceObjectWithTag(v8, 0x624A7350u);
        }
      }
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 1296) + 1232LL) != SessionSchedulingGroupByProcess )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1296) + 1232LL) = SessionSchedulingGroupByProcess;
        result = *(_QWORD *)(a1 + 1296);
        *(_QWORD *)(result + 1328) = v8;
      }
      *(_QWORD *)(a1 + 1232) = SessionSchedulingGroupByProcess;
    }
  }
  return result;
}

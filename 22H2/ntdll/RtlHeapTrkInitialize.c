/*
 * XREFs of RtlHeapTrkInitialize @ 0x1800FD9C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDestroyHeap @ 0x180009680 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlSetHeapInformation @ 0x180074DB0 (RtlSetHeapInformation.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D9E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DA20 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x18009DB00 (NtQueryPerformanceCounter.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F2B38 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800FDD5C (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800FE26C (RtlpHeapTrkGenerateHashRandoms.c)
 */

NTSTATUS __fastcall RtlHeapTrkInitialize(void *a1)
{
  NTSTATUS result; // eax
  PVOID Heap; // rax
  char *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r9
  char *v8; // r8
  char *v9; // rcx
  _QWORD *v10; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v12[2]; // [rsp+60h] [rbp-1h] BYREF
  __int128 v13; // [rsp+70h] [rbp+Fh]
  __int64 v14; // [rsp+80h] [rbp+1Fh]
  __int64 (__fastcall *v15)(); // [rsp+88h] [rbp+27h]
  int HeapInformation; // [rsp+C8h] [rbp+67h] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+6Fh] BYREF
  ULONG_PTR ViewSize; // [rsp+D8h] [rbp+77h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+E0h] [rbp+7Fh] BYREF

  ViewSize = 0x10000LL;
  BaseAddress = 0LL;
  SectionOffset.QuadPart = 0LL;
  if ( SectionHandle )
    return -1073741823;
  if ( !a1
    || ZwMapViewOfSection(
         a1,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewShare,
         0,
         4u) < 0 )
  {
    return -1073741811;
  }
  if ( *(_QWORD *)BaseAddress < 0x400uLL )
    return -1073741789;
  if ( *((_DWORD *)BaseAddress + 13) > 0x40u
    || *((_DWORD *)BaseAddress + 14) > 2u
    || !*((_QWORD *)BaseAddress + 1)
    || *((_QWORD *)BaseAddress + 1) == -1LL
    || !*((_QWORD *)BaseAddress + 2)
    || *((_QWORD *)BaseAddress + 2) == -1LL
    || !*((_QWORD *)BaseAddress + 3)
    || *((_QWORD *)BaseAddress + 3) == -1LL )
  {
    return -1073741811;
  }
  result = NtQueryPerformanceCounter(&PerformanceCounter, &PerformanceFrequency);
  if ( result >= 0 )
  {
    if ( PerformanceFrequency.QuadPart )
    {
      dword_18016DA68 = *((_DWORD *)BaseAddress + 14);
      RtlpHeapTrkGenerateHashRandoms();
      Heap = RtlCreateHeap(
               *((_DWORD *)BaseAddress + 13) == 0 ? 2 : 0,
               0LL,
               (unsigned int)(*((_DWORD *)BaseAddress + 13) << 20),
               0LL,
               0LL,
               0LL);
      HeapHandle = Heap;
      if ( Heap )
      {
        HeapInformation = 2;
        RtlSetHeapInformation(Heap, HeapCompatibilityInformation, &HeapInformation, 4uLL);
        dword_18016DBD0 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_18016D740, &qword_18016DBF0, 32LL) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_18016DBC0, &qword_18016DBB8, 8LL) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_18016DBD8, &qword_18016DBB0, 8LL) )
            {
              qword_18016DA50 = (__int64)RtlAllocateHeap(HeapHandle, 0, 0x1EEF0uLL);
              if ( qword_18016DA50 )
              {
                v4 = (char *)RtlAllocateHeap(HeapHandle, 0, 0x1EEF0uLL);
                qword_18016DA60 = (__int64)v4;
                if ( v4 )
                {
                  v5 = (_QWORD *)qword_18016DA50;
                  v6 = 7919LL;
                  SectionHandle = a1;
                  v7 = qword_18016DA50 - (_QWORD)v4;
                  dword_18016DA58 = 0;
                  v8 = &v4[-qword_18016DA50];
                  do
                  {
                    v9 = (char *)v5 + (_QWORD)v8;
                    *v5 = v5;
                    *(_QWORD *)&v9[v7 + 8] = v5;
                    v10 = (_QWORD *)((char *)v5 + (_QWORD)v8);
                    v5 += 2;
                    *((_QWORD *)v9 + 1) = v10;
                    *v10 = v10;
                    --v6;
                  }
                  while ( v6 );
                  v12[0] = RtlpHeapTrkInterceptor;
                  v12[1] = 0LL;
                  v14 = 0LL;
                  v15 = RtlpHeapTrkLeakCallback;
                  v13 = 0LL;
                  if ( (int)RtlSetHeapDebuggingInformation(0LL, (__int64)v12) >= 0 )
                  {
                    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                    return 0;
                  }
                }
              }
            }
          }
        }
        RtlDestroyHeap(HeapHandle);
        HeapHandle = 0LL;
        qword_18016DBF0 = 0LL;
        qword_18016DA50 = 0LL;
        qword_18016DBC0 = 0LL;
        qword_18016DBB8 = 0LL;
        qword_18016DA60 = 0LL;
        qword_18016DBD8 = 0LL;
        qword_18016DBB0 = 0LL;
        if ( BaseAddress )
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        if ( SectionHandle )
        {
          NtClose(SectionHandle);
          SectionHandle = 0LL;
        }
      }
    }
    return -1073741823;
  }
  return result;
}

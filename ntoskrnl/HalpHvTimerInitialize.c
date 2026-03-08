/*
 * XREFs of HalpHvTimerInitialize @ 0x1403C8870
 * Callers:
 *     <none>
 * Callees:
 *     HalSocRequestApi @ 0x1403737EC (HalSocRequestApi.c)
 *     HalQueryMaximumProcessorCount @ 0x140375910 (HalQueryMaximumProcessorCount.c)
 *     HalMapIoSpace @ 0x14037AD90 (HalMapIoSpace.c)
 *     HalpHvTimerAcknowledgeInterrupt @ 0x1403C88B0 (HalpHvTimerAcknowledgeInterrupt.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpHvTimerInitialize(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  PVOID v6; // rax
  __int64 MaximumProcessorCount; // rdi
  LARGE_INTEGER v8; // rax
  PVOID v9; // rax
  __int64 *v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rax

  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = 3 * v1;
  if ( *(_QWORD *)(a1 + 24 * v1 + 8) )
  {
    HalpHvTimerAcknowledgeInterrupt();
    return 0LL;
  }
  if ( HalpHvCpuManager )
  {
    v5 = __readmsr(0x40000083u) & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)(a1 + 8 * v3 + 16) = v5;
    v6 = HalMapIoSpace((LARGE_INTEGER)v5, 0x1000uLL, MmCached);
    *(_QWORD *)(a1 + 8 * v3 + 8) = v6;
    if ( v6 )
      return 0LL;
    return 3221225626LL;
  }
  result = HalSocRequestApi(a1, 0LL, 4, 8LL, &HalpHvPhysicalMemoryApi);
  if ( (int)result >= 0 )
  {
    MaximumProcessorCount = (unsigned int)HalQueryMaximumProcessorCount();
    v8.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))HalpHvPhysicalMemoryApi)(-1LL, MaximumProcessorCount);
    if ( v8.QuadPart )
    {
      *(LARGE_INTEGER *)(a1 + 16) = v8;
      v9 = HalMapIoSpace(v8, (unsigned __int64)(unsigned int)MaximumProcessorCount << 12, MmCached);
      v10 = (__int64 *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v9;
      if ( v9 )
      {
        if ( (unsigned int)MaximumProcessorCount > 1 )
        {
          v11 = (_QWORD *)(a1 + 32);
          v12 = (unsigned int)(MaximumProcessorCount - 1);
          do
          {
            v11[1] = v10[1] + 4096;
            v13 = *v10;
            v10 += 3;
            *v11 = v13 + 4096;
            v11 += 3;
            --v12;
          }
          while ( v12 );
        }
        return 0LL;
      }
    }
    return 3221225626LL;
  }
  return result;
}

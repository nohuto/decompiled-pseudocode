/*
 * XREFs of HalpInterruptInitializeIpis @ 0x14037B310
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x140379DFC (HalpInitializeInterruptsPn.c)
 *     HalpInitializeInterrupts @ 0x140B3D448 (HalpInitializeInterrupts.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x1403644D0 (KeGetProcessorNumberFromIndex.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

NTSTATUS HalpInterruptInitializeIpis()
{
  ULONG v0; // edi
  _DWORD *v1; // rbx
  int *v2; // rsi
  NTSTATUS result; // eax
  int v4; // r8d
  unsigned __int64 v5; // rdx
  unsigned __int16 Group; // ax
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _DWORD *v10; // r8
  int v11; // r9d
  int v12; // eax
  unsigned int v13; // edi
  _DWORD *MemoryInternal; // rax
  _DWORD *v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  if ( HalpInterruptIpiLines )
    goto LABEL_2;
  v8 = 0LL;
  v9 = *(_QWORD **)(HalpInterruptController + 264);
  while ( v9 != (_QWORD *)(HalpInterruptController + 264) )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    v11 = v10[6] - v10[5];
    v12 = v10[8];
    if ( v12 == 5 && v11 )
    {
      HalpInterruptIpiLines = (__int64)v10;
      goto LABEL_2;
    }
    if ( v12 == 4 && v11 && !v8 )
      v8 = (__int64)v10;
  }
  HalpInterruptIpiLines = v8;
  if ( v8 )
  {
LABEL_2:
    if ( HalpInterruptClusterModeEnabled )
    {
      if ( !HalpInterruptClusterData )
      {
        v13 = HalpInterruptMaxProcessors;
        if ( (_DWORD)HalpInterruptMaxCluster
          && 32 * (int)HalpInterruptMaxCluster < (unsigned int)HalpInterruptMaxProcessors )
        {
          v13 = 32 * HalpInterruptMaxCluster;
        }
        MemoryInternal = (_DWORD *)HalpMmAllocateMemoryInternal(24 * v13, 1u);
        HalpInterruptClusterData = (__int64)MemoryInternal;
        v15 = MemoryInternal;
        if ( !MemoryInternal )
          return -1073741801;
        memset(MemoryInternal, 0, 24 * v13);
        v16 = (unsigned __int64)&v15[6 * v13];
        while ( (unsigned __int64)v15 < v16 )
        {
          *v15 = -1;
          v15 += 6;
        }
        HalpInterruptClusterDataEnd = HalpInterruptClusterData;
        HalpInterruptClusterDataLimit = v16;
      }
      v0 = 0;
      if ( (_DWORD)HalpInterruptProcessorCount )
      {
        v1 = (_DWORD *)HalpInterruptTargets;
        v2 = KiProcessorIndexToNumberMappingTable;
        do
        {
          if ( *v1 == 6 )
          {
            result = KeGetProcessorNumberFromIndex(v0, &ProcNumber);
            if ( result < 0 )
              return result;
            v4 = v1[2];
            v5 = HalpInterruptClusterData;
            Group = ProcNumber.Group;
            while ( v5 < HalpInterruptClusterDataEnd && (*(_WORD *)(v5 + 16) != ProcNumber.Group || *(_DWORD *)v5 != v4) )
              v5 += 24LL;
            if ( v5 == HalpInterruptClusterDataEnd )
            {
              if ( v5 >= HalpInterruptClusterDataLimit )
                KeBugCheckEx(0x5Cu, 0x201uLL, 0LL, 0xFFFFFFFF80000005uLL, (unsigned int)HalpInterruptMaxCluster);
              ++HalpInterruptClusterDataCount;
              v17 = HalpInterruptClusterDataEnd + 24;
              *(_DWORD *)v5 = v4;
              HalpInterruptClusterDataEnd = v17;
              *(_WORD *)(v5 + 16) = Group;
            }
            v7 = *(_QWORD *)(v5 + 8);
            _bittestandset64(&v7, *v2 & 0x3F);
            *(_QWORD *)(v5 + 8) = v7;
          }
          ++v0;
          v1 += 6;
          ++v2;
        }
        while ( v0 < (unsigned int)HalpInterruptProcessorCount );
      }
    }
  }
  else
  {
    HalpInterruptMaxProcessors = 1;
  }
  return 0;
}

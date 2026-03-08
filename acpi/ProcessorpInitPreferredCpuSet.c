/*
 * XREFs of ProcessorpInitPreferredCpuSet @ 0x1C00AC014
 * Callers:
 *     ProcessorInitGlobalState @ 0x1C00ABF3C (ProcessorInitGlobalState.c)
 * Callees:
 *     <none>
 */

void ProcessorpInitPreferredCpuSet()
{
  int v0; // eax
  void *Pool2; // rax
  USHORT ActiveGroupCount; // ax
  __int16 v3; // cx
  unsigned __int16 v4; // si
  __int64 v5; // rdi
  ULONG v6; // ebx
  USHORT v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  v0 = KeQuerySystemCpuPartitionAffinity(0LL, 0LL, &v7);
  if ( v0 == -1073741789 )
  {
    if ( v7 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, 16LL * v7, 1232102209LL);
      ProcessorpPreferredCpuSet = Pool2;
      if ( !Pool2 )
        return;
      if ( (int)KeQuerySystemCpuPartitionAffinity(Pool2, v7, &v7) >= 0 )
      {
        ActiveGroupCount = KeQueryActiveGroupCount();
        v3 = v7;
        if ( v7 < ActiveGroupCount )
        {
LABEL_11:
          ProcessorpPreferredCpuSetActive = 1;
          ProcessorpPreferredCpuSetGroupCount = v3;
          return;
        }
        v4 = 0;
        if ( v7 )
        {
          while ( 1 )
          {
            v5 = 16LL * v4;
            v6 = KeCountSetBitsGroupAffinity((char *)ProcessorpPreferredCpuSet + v5);
            if ( v6 < KeQueryActiveProcessorCountEx(*(_WORD *)((char *)ProcessorpPreferredCpuSet + v5 + 8)) )
              break;
            if ( ++v4 >= v7 )
              goto LABEL_13;
          }
          v3 = v7;
          goto LABEL_11;
        }
      }
    }
  }
  else if ( v0 >= 0 )
  {
    return;
  }
LABEL_13:
  if ( ProcessorpPreferredCpuSet )
  {
    ExFreePoolWithTag(ProcessorpPreferredCpuSet, 0);
    ProcessorpPreferredCpuSet = 0LL;
  }
}

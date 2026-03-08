/*
 * XREFs of IopCalculateStackInformation @ 0x14055A990
 * Callers:
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14055A768 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x1403849BC (KiIsAddressRangeValid.c)
 *     IopGetMaxValidMemorySize @ 0x140550E80 (IopGetMaxValidMemorySize.c)
 */

char __fastcall IopCalculateStackInformation(__int64 a1, __int64 a2, __int64 *a3, unsigned int *a4)
{
  char v4; // bl
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  _QWORD *DpcStack; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int MaxValidMemorySize; // eax

  v4 = 0;
  if ( a1 && (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 152);
    v8 = *(_QWORD *)(a1 + 48);
    v9 = *(_QWORD *)(a1 + 56);
    if ( v8 > v7 || v7 >= v9 )
    {
      *a3 = *(_QWORD *)(a1 + 48);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && (_KTHREAD *)a1 != KeGetCurrentPrcb()->IdleThread )
      {
        DpcStack = KeGetPcr()->Prcb.DpcStack;
        if ( KiIsAddressRangeValid((__int64)DpcStack, 80LL) )
        {
          v11 = DpcStack[8];
          if ( v8 <= v11 && v11 < v9 )
            *a3 = v11;
        }
      }
    }
    else
    {
      *a3 = v7;
    }
    v12 = *a3;
    v13 = v9 - *(_DWORD *)a3;
    *a4 = v13;
    MaxValidMemorySize = IopGetMaxValidMemorySize(v12, v13);
    *a4 = MaxValidMemorySize;
    if ( *a3 && MaxValidMemorySize )
      return 1;
  }
  return v4;
}

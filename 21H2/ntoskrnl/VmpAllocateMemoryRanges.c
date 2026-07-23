/*
 * XREFs of VmpAllocateMemoryRanges @ 0x14092F6AC
 * Callers:
 *     VmpSplitMemoryRange @ 0x1405A5374 (VmpSplitMemoryRange.c)
 *     VmCreateMemoryRange @ 0x14092EF60 (VmCreateMemoryRange.c)
 *     VmPreallocateForRangeCreate @ 0x14092F270 (VmPreallocateForRangeCreate.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     VmpFreeMemoryRanges @ 0x14092F7F8 (VmpFreeMemoryRanges.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall VmpAllocateMemoryRanges(unsigned __int64 a1)
{
  _QWORD *v2; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rbx
  char *v5; // rdi
  unsigned __int64 v6; // r14
  char *v7; // rax
  char *v8; // rsi
  char **v9; // rax

  v2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72566D56u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    v5 = (char *)(PoolWithTag + 5);
    *(_OWORD *)PoolWithTag = 0LL;
    v6 = 0LL;
    *((_OWORD *)PoolWithTag + 1) = 0LL;
    *((_OWORD *)PoolWithTag + 2) = 0LL;
    PoolWithTag[6] = 0LL;
    PoolWithTag[2] = -1LL;
    PoolWithTag[6] = PoolWithTag + 5;
    PoolWithTag[5] = PoolWithTag + 5;
    if ( a1 )
    {
      while ( 1 )
      {
        v7 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x72476D56u);
        v8 = v7;
        if ( !v7 )
          break;
        memset(v7, 0, 0x40uLL);
        *((_QWORD *)v8 + 5) = -1LL;
        *((_QWORD *)v8 + 2) = v4;
        v9 = (char **)v4[6];
        if ( *v9 != v5 )
          __fastfail(3u);
        *(_QWORD *)v8 = v5;
        ++v6;
        *((_QWORD *)v8 + 1) = v9;
        *v9 = v8;
        v4[6] = v8;
        if ( v6 >= a1 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v2 = v4;
      v4 = 0LL;
    }
    if ( v4 )
      VmpFreeMemoryRanges(v4);
  }
  return v2;
}

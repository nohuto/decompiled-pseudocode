/*
 * XREFs of VmpAllocateMemoryRanges @ 0x1409D9E18
 * Callers:
 *     VmpSplitMemoryRange @ 0x14062BE2C (VmpSplitMemoryRange.c)
 *     VmCreateMemoryRange @ 0x1409D9340 (VmCreateMemoryRange.c)
 *     VmPreallocateForRangeCreate @ 0x1409D9860 (VmPreallocateForRangeCreate.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     VmpFreeMemoryRanges @ 0x1409DA014 (VmpFreeMemoryRanges.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall VmpAllocateMemoryRanges(unsigned __int64 a1)
{
  __int64 v2; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rax

  v2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x72566D56u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    v4[2] = -1LL;
    v5 = v4 + 5;
    v4[6] = v4 + 5;
    v6 = 0LL;
    v4[5] = v4 + 5;
    if ( a1 )
    {
      while ( 1 )
      {
        v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x72476D56u);
        v8 = v7;
        if ( !v7 )
          break;
        memset(v7, 0, 0x48uLL);
        v8[5] = -1LL;
        v8[2] = v4;
        v9 = (_QWORD *)v4[6];
        if ( (_QWORD *)*v9 != v5 )
          __fastfail(3u);
        *v8 = v5;
        ++v6;
        v8[1] = v9;
        *v9 = v8;
        v4[6] = v8;
        if ( v6 >= a1 )
          return v4;
      }
      VmpFreeMemoryRanges(v4);
    }
    else
    {
      return v4;
    }
  }
  return (_QWORD *)v2;
}

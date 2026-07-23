/*
 * XREFs of WheapCreatePerProcessorInfo @ 0x140A63E88
 * Callers:
 *     WheaInitialize @ 0x140A6405C (WheaInitialize.c)
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 WheapCreatePerProcessorInfo()
{
  ULONG_PTR v0; // rbp
  SIZE_T v1; // rsi
  char *PoolWithTag; // rax
  unsigned int v3; // ebx
  char *v4; // rdi
  __int64 Prcb; // rax

  v0 = (unsigned int)KeNumberProcessors_0;
  v1 = 24LL * (unsigned int)KeNumberProcessors_0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x61656857u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(WheapStatus) = WheapStatus + 1;
    HIDWORD(WheapStatus) |= 0x10u;
    KeBugCheckEx(0x122u, 2uLL, v0, 0LL, 0LL);
  }
  memset(PoolWithTag, 0, v1);
  if ( (_DWORD)v0 )
  {
    do
    {
      Prcb = KeGetPrcb(v3++);
      *(_QWORD *)(Prcb + 33568) = v4;
      v4 += 24;
    }
    while ( v3 < (unsigned int)v0 );
  }
  return 0LL;
}

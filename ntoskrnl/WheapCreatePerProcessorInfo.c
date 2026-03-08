/*
 * XREFs of WheapCreatePerProcessorInfo @ 0x140B70AF4
 * Callers:
 *     WheaInitialize @ 0x140B3E1A0 (WheaInitialize.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 WheapCreatePerProcessorInfo()
{
  ULONG_PTR v0; // rsi
  unsigned int v1; // ebx
  __int64 Pool2; // rdi
  __int64 Prcb; // rax

  v0 = (unsigned int)KeNumberProcessors_0;
  v1 = 0;
  Pool2 = ExAllocatePool2(64LL, 24LL * (unsigned int)KeNumberProcessors_0, 0x61656857u);
  if ( !Pool2 )
  {
    LODWORD(WheapStatus) = WheapStatus + 1;
    HIDWORD(WheapStatus) |= 0x10u;
    KeBugCheckEx(0x122u, 2uLL, v0, 0LL, 0LL);
  }
  if ( (_DWORD)v0 )
  {
    do
    {
      Prcb = KeGetPrcb(v1++);
      *(_QWORD *)(Prcb + 34464) = Pool2;
      Pool2 += 24LL;
    }
    while ( v1 < (unsigned int)v0 );
  }
  return 0LL;
}

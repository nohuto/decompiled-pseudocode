/*
 * XREFs of MiIssueNoPtesBugcheck @ 0x14062CC28
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MmGetNumberOfFreeSystemPtes @ 0x140299A38 (MmGetNumberOfFreeSystemPtes.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiGetHighestPteConsumer @ 0x14065EC5C (MiGetHighestPteConsumer.c)
 */

void __fastcall __noreturn MiIssueNoPtesBugcheck(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR HighestPteConsumer; // rbx
  unsigned int NumberOfFreeSystemPtes; // eax
  unsigned int v4; // eax
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp+10h] BYREF

  BugCheckParameter2a = 0LL;
  v1 = (unsigned int)BugCheckParameter2;
  HighestPteConsumer = MiGetHighestPteConsumer(&BugCheckParameter2a);
  if ( HighestPteConsumer )
  {
    NumberOfFreeSystemPtes = MmGetNumberOfFreeSystemPtes();
    KeBugCheckEx(0xD8u, HighestPteConsumer, BugCheckParameter2a, NumberOfFreeSystemPtes, 0LL);
  }
  v4 = MmGetNumberOfFreeSystemPtes();
  KeBugCheckEx(0x3Fu, 0LL, v1, v4, 0LL);
}

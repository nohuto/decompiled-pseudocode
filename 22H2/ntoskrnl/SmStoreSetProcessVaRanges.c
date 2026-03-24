/*
 * XREFs of SmStoreSetProcessVaRanges @ 0x1406FB63C
 * Callers:
 *     MmInSwapWorkingSet @ 0x140350CF4 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x140350FC0 (MmOutSwapWorkingSet.c)
 * Callees:
 *     SSHSupportAllocateNonPaged @ 0x140322FE4 (SSHSupportAllocateNonPaged.c)
 *     SmpKeyedStoreSetVaRanges @ 0x140351A08 (SmpKeyedStoreSetVaRanges.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmStoreSetProcessVaRanges(void *Src, __int64 a2)
{
  void *v2; // rbx
  _KPROCESS *Process; // rbp
  size_t v5; // rdi
  PVOID NonPaged; // rax
  int v7; // edi

  v2 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v5 = 16 * a2;
    NonPaged = SSHSupportAllocateNonPaged(16 * a2, 0x52566D73u);
    v2 = NonPaged;
    if ( !NonPaged )
      return (unsigned int)-1073741670;
    memmove(NonPaged, Src, v5);
  }
  v7 = SmpKeyedStoreSetVaRanges((ULONG_PTR)qword_140D24188, Process);
  if ( v7 >= 0 )
  {
    v2 = 0LL;
    v7 = 0;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v7;
}

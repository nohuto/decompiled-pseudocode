/*
 * XREFs of SmStoreSetProcessVaRanges @ 0x1406EC47C
 * Callers:
 *     MmInSwapWorkingSet @ 0x14025F4D4 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x140260144 (MmOutSwapWorkingSet.c)
 * Callees:
 *     SmpKeyedStoreSetVaRanges @ 0x140260A44 (SmpKeyedStoreSetVaRanges.c)
 *     SmAlloc @ 0x140260C2C (SmAlloc.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmStoreSetProcessVaRanges(void *Src, __int64 a2)
{
  void *v2; // rdi
  size_t v4; // rbx
  PVOID v5; // rax
  int v6; // ebx

  v2 = 0LL;
  if ( a2 )
  {
    v4 = 16 * a2;
    v5 = SmAlloc(16 * a2, 0x52566D73u);
    v2 = v5;
    if ( !v5 )
      return (unsigned int)-1073741670;
    memmove(v5, Src, v4);
  }
  v6 = SmpKeyedStoreSetVaRanges((ULONG_PTR)&qword_140D321C8);
  if ( v6 >= 0 )
  {
    return 0;
  }
  else if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
  }
  return (unsigned int)v6;
}

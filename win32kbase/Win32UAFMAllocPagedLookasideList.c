char **__fastcall Win32UAFMAllocPagedLookasideList(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  SIZE_T v6; // rax
  unsigned int v7; // edx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rcx
  unsigned int v9; // r8d
  USHORT v10; // r9
  __int64 v11; // rbx
  char *PagedLookasideList; // rdi
  char **Pool; // rax
  NSInstrumentation::CLeakTrackingAllocator *v14; // rcx

  v6 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize();
  v11 = 0LL;
  if ( v6 )
  {
    PagedLookasideList = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                                   v8,
                                   v6,
                                   v7,
                                   v9,
                                   v10);
    if ( PagedLookasideList )
    {
      Pool = (char **)NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(
                        68LL,
                        8LL,
                        a2,
                        a5);
      if ( Pool )
      {
        *Pool = PagedLookasideList;
        return Pool;
      }
      else
      {
        NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v14, PagedLookasideList);
      }
    }
  }
  return (char **)v11;
}

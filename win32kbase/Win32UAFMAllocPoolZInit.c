void *__fastcall Win32UAFMAllocPoolZInit(size_t Size, unsigned int a2, __int64 a3)
{
  void *Pool; // rax
  void *v5; // rbx

  Pool = (void *)NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(
                   260LL,
                   Size,
                   a2,
                   a3);
  v5 = Pool;
  if ( Pool )
    memset(Pool, 0, Size);
  return v5;
}

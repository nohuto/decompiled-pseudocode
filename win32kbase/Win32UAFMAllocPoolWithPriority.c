char *__fastcall Win32UAFMAllocPoolWithPriority(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int64 v5; // rax
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  unsigned int v7; // r8d
  enum _EX_POOL_PRIORITY v8; // r9d
  unsigned __int64 v9; // r10
  char *v10; // rbx
  _DWORD *Priority; // rdi
  int Cookie; // eax

  v5 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a2);
  v10 = 0LL;
  if ( v5 )
  {
    Priority = NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(v6, v9, v5, v7, v8);
    if ( Priority )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      Priority[3] = Cookie;
      v10 = (char *)(Priority + 4);
      *a5 = Cookie - 1;
    }
  }
  return v10;
}

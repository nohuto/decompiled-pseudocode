__int64 __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // r8d
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rdi
  int Cookie; // eax

  v5 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a2);
  v8 = 0LL;
  if ( v5 )
  {
    v9 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, v7, v5, v6);
    if ( v9 )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      *(_DWORD *)(v9 + 12) = Cookie;
      v8 = v9 + 16;
      *a4 = Cookie - 1;
    }
  }
  return v8;
}

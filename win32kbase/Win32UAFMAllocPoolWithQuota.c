__int64 __fastcall Win32UAFMAllocPoolWithQuota(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  __int64 v7; // rbx
  __int64 Quota; // rdi
  int Cookie; // eax

  v4 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a1);
  v7 = 0LL;
  if ( v4 )
  {
    Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v6, 260LL, v4, v5);
    if ( Quota )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      *(_DWORD *)(Quota + 12) = Cookie;
      v7 = Quota + 16;
      *a3 = Cookie - 1;
    }
  }
  return v7;
}

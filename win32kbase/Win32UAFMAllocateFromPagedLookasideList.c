_QWORD *__fastcall Win32UAFMAllocateFromPagedLookasideList(NSInstrumentation::CLeakTrackingAllocator *a1, _DWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *result; // rax
  int Cookie; // eax

  v3 = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(a1, *(char **)a1);
  result = 0LL;
  if ( v3 )
  {
    Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
    *((_DWORD *)v3 + 3) = Cookie;
    *a2 = Cookie - 1;
    return v3 + 2;
  }
  return result;
}

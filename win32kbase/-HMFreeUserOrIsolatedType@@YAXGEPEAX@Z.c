void __fastcall HMFreeUserOrIsolatedType(__int64 a1, char a2, void *a3)
{
  if ( (a1 & 0x200) != 0 )
  {
    LOBYTE(a1) = a2;
    HMFreeIsolatedType(a1, a3);
  }
  else if ( a3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a3);
  }
}

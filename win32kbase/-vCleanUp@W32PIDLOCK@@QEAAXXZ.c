void __fastcall W32PIDLOCK::vCleanUp(W32PIDLOCK *this)
{
  char *v2; // rdx

  REGION::vDeleteREGION(*((_QWORD *)this + 4));
  v2 = (char *)*((_QWORD *)this + 5);
  if ( v2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
}

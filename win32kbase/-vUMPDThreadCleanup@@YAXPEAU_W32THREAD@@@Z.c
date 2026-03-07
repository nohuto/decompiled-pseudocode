void __fastcall vUMPDThreadCleanup(struct _W32THREAD *a1)
{
  struct UMPDOBJ *ThreadCurrentObj; // rax
  void *v3; // rdx

  while ( 1 )
  {
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(a1);
    if ( !ThreadCurrentObj )
      break;
    UMPDOBJ::vRelease(ThreadCurrentObj, 1);
  }
  if ( qword_1C02D5F78 && (int)qword_1C02D5F78() >= 0 && qword_1C02D5F80 )
    qword_1C02D5F80(a1);
  v3 = (void *)*((_QWORD *)a1 + 9);
  if ( v3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    *((_QWORD *)a1 + 9) = 0LL;
  }
}

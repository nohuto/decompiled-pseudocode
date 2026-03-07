void __fastcall CMonitorTopology::UnlockAndRelease(struct CMonitorTopology **a1, struct _TL *a2)
{
  char *v3; // rdx

  if ( *a1 )
  {
    if ( qword_1C02D65D8 )
      qword_1C02D65D8(a2);
    v3 = (char *)*a1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)*a1, 0xFFFFFFFF) == 1 )
    {
      if ( v3 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    }
    *a1 = 0LL;
  }
}

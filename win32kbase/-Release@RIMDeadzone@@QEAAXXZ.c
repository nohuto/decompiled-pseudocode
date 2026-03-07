void __fastcall RIMDeadzone::Release(DeadzonePalmTelemetry **this)
{
  DeadzonePalmTelemetry *v3; // rcx
  char *v4; // rdx

  if ( (*((_DWORD *)this + 1))-- == 1 )
  {
    RIMDeadzone::_ClearDeadzoneAreas((RIMDeadzone *)this);
    v3 = this[7];
    if ( v3 )
    {
      DeadzonePalmTelemetry::ClearSession(v3);
      v4 = (char *)this[7];
      if ( v4 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    }
  }
}

__int64 __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2)
{
  void *v4; // rdx
  void *v5; // rdx
  __int64 v6; // rax
  void *v7; // rdx
  void *v8; // rdx
  void *v10; // rdx
  RIMDeadzone **v12; // rdi
  __int64 v13; // rsi

  if ( *(_QWORD *)(a2 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 675LL);
  if ( *(_QWORD *)(a2 + 192) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 676LL);
  if ( *(_QWORD *)(a2 + 104) != a2 + 104 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 680LL);
  v4 = *(void **)(a2 + 216);
  if ( v4 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  v5 = *(void **)(a2 + 320);
  if ( v5 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 2) <= 1u )
  {
    v6 = *(_QWORD *)(a2 + 464);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_QWORD *)(a2 + 464)) )
        RIMFreeHidTLCInfo(*(void **)(a2 + 464));
    }
    if ( *(_QWORD *)(a2 + 456) )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
      {
        if ( *(_DWORD *)(a2 + 448) )
        {
          v12 = (RIMDeadzone **)(a2 + 408);
          v13 = 5LL;
          do
          {
            if ( *v12 )
            {
              RIMDeadzone::Release(*v12);
              if ( *((_DWORD *)*v12 + 1) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 724LL);
              if ( *v12 )
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v12);
              *v12 = 0LL;
              --*(_DWORD *)(a2 + 448);
            }
            ++v12;
            --v13;
          }
          while ( v13 );
          if ( *(_DWORD *)(a2 + 448) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 731LL);
        }
        RIMReleasePointerDeviceInfo(a1, a2);
      }
      RIMFreeHidDesc(*(void **)(a2 + 456));
      *(_QWORD *)(a2 + 456) = 0LL;
    }
  }
  if ( *(_BYTE *)(a2 + 48) == 3 && *(_QWORD *)(a2 + 464) )
  {
    RIMFreeHidDesc(*(void **)(a2 + 456));
    *(_QWORD *)(a2 + 456) = 0LL;
  }
  if ( !*(_BYTE *)(a2 + 48) )
  {
    v10 = *(void **)(a2 + 896);
    if ( v10 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v10);
      *(_QWORD *)(a2 + 896) = 0LL;
      *(_WORD *)(a2 + 890) = 0;
    }
  }
  v7 = *(void **)(a2 + 352);
  if ( v7 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
  v8 = *(void **)(a2 + 376);
  if ( v8 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v8);
  return RIMIDEFreeInjectedInfo(a2);
}

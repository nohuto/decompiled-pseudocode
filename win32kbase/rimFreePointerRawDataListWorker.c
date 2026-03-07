void __fastcall rimFreePointerRawDataListWorker(_QWORD *a1)
{
  _QWORD *v1; // rbx
  void *v2; // rdi
  char *v3; // rdx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)v1[2];
      if ( !*((_QWORD *)v2 + 1) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 442);
      v3 = (char *)*((_QWORD *)v2 + 1);
      if ( v3 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v2);
    }
    while ( v1 );
  }
}

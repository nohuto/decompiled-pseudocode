char TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create()
{
  _QWORD *ProcessorHistory; // rsi
  __int64 Pool2; // rax
  char v2; // di
  void *v3; // rbx
  void *v4; // rax

  ProcessorHistory = (_QWORD *)WPP_MAIN_CB.Dpc.ProcessorHistory;
  Pool2 = ExAllocatePool2(262LL, 40LL, 1869834581LL);
  v2 = 0;
  v3 = (void *)Pool2;
  if ( !Pool2 )
    return 0;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 36) = 0;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  if ( !NSInstrumentation::CTypeIsolation<36864,144>::Initialize(Pool2) )
  {
    NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>((__int64)v3);
    ExFreePoolWithTag(v3, 0);
    return 0;
  }
  *ProcessorHistory = v3;
  v4 = NSInstrumentation::CTypeIsolation<40960,160>::Create();
  if ( v4 )
  {
    ProcessorHistory[1] = v4;
    return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(ProcessorHistory);
  }
  return v2;
}

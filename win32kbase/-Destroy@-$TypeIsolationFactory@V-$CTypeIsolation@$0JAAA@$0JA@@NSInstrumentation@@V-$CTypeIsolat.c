__int64 TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy()
{
  KAFFINITY ProcessorHistory; // rbx
  void *v1; // rdi
  void *v2; // rdi

  ProcessorHistory = WPP_MAIN_CB.Dpc.ProcessorHistory;
  v1 = *(void **)WPP_MAIN_CB.Dpc.ProcessorHistory;
  if ( *(_QWORD *)WPP_MAIN_CB.Dpc.ProcessorHistory )
  {
    NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>(*(_QWORD *)WPP_MAIN_CB.Dpc.ProcessorHistory);
    ExFreePoolWithTag(v1, 0);
  }
  v2 = *(void **)(ProcessorHistory + 8);
  if ( v2 )
  {
    NSInstrumentation::CTypeIsolation<40960,160>::~CTypeIsolation<40960,160>(*(_QWORD *)(ProcessorHistory + 8));
    ExFreePoolWithTag(v2, 0);
  }
  return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy(ProcessorHistory);
}

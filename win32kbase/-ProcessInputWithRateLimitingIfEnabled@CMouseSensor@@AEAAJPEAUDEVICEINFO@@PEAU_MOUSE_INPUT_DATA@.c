__int64 __fastcall CMouseSensor::ProcessInputWithRateLimitingIfEnabled(
        LARGE_INTEGER *this,
        struct DEVICEINFO *a2,
        struct _MOUSE_INPUT_DATA *a3,
        unsigned int a4,
        bool a5)
{
  unsigned int v9; // r14d
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 QuadPart; // rbp
  CMouseSensor::MouseRateLimitHoldingFrame *v12; // rcx
  __int64 result; // rax

  v9 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  QuadPart = PerformanceCounter.QuadPart;
  v12 = (CMouseSensor::MouseRateLimitHoldingFrame *)&this[176];
  if ( LOBYTE(this[232].LowPart) )
  {
    if ( !CMouseSensor::MouseRateLimitHoldingFrame::CanCombineMouseReportBatches(
            v12,
            PerformanceCounter.QuadPart,
            a2,
            a5,
            a4) )
    {
      v9 = CMouseSensor::FlushMouseReports((CMouseSensor *)this);
      CMouseSensor::MouseRateLimitHoldingFrame::InitializeHoldingFrame(this + 176, a5, a2);
      InputTraceLogging::Mouse::FlushHoldingBuffer(a2);
    }
  }
  else
  {
    CMouseSensor::MouseRateLimitHoldingFrame::InitializeHoldingFrame((LARGE_INTEGER *)v12, a5, a2);
  }
  if ( (unsigned __int8)CMouseSensor::MouseRateLimitHoldingFrame::CopyMouseInputToHoldingBuffer(
                          (CMouseSensor::MouseRateLimitHoldingFrame *)&this[176],
                          a3,
                          a4,
                          QuadPart) )
  {
    v9 = CMouseSensor::FlushMouseReports((CMouseSensor *)this);
    InputTraceLogging::Mouse::FlushHoldingBuffer(a2);
  }
  else
  {
    InputTraceLogging::Mouse::BufferMouseInput(a2);
  }
  InputTraceLogging::Mouse::ProcessInputWithRateLimitingIfEnabled(
    a2,
    this[177].QuadPart > 0,
    QuadPart,
    this[230].QuadPart,
    this[177].QuadPart,
    LOWORD(this[227].LowPart));
  result = v9;
  this[231].QuadPart = QuadPart;
  return result;
}

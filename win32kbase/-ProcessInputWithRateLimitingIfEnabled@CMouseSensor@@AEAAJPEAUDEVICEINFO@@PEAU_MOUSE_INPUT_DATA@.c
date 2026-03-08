/*
 * XREFs of ?ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00F3D88
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C00F3CE0 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?CopyMouseInputToHoldingBuffer@MouseRateLimitHoldingFrame@CMouseSensor@@QEAA_NPEAU_MOUSE_INPUT_DATA@@K_J@Z @ 0x1C00F3A02 (-CopyMouseInputToHoldingBuffer@MouseRateLimitHoldingFrame@CMouseSensor@@QEAA_NPEAU_MOUSE_INPUT_D.c)
 *     ?FlushHoldingBuffer@Mouse@InputTraceLogging@@SAXPEAUDEVICEINFO@@@Z @ 0x1C00F3AF0 (-FlushHoldingBuffer@Mouse@InputTraceLogging@@SAXPEAUDEVICEINFO@@@Z.c)
 *     ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C00F3B84 (-FlushMouseReports@CMouseSensor@@AEAAJXZ.c)
 *     ?InitializeHoldingFrame@MouseRateLimitHoldingFrame@CMouseSensor@@QEAAX_NPEAUDEVICEINFO@@@Z @ 0x1C00F3C24 (-InitializeHoldingFrame@MouseRateLimitHoldingFrame@CMouseSensor@@QEAAX_NPEAUDEVICEINFO@@@Z.c)
 *     ?ProcessInputWithRateLimitingIfEnabled@Mouse@InputTraceLogging@@SAXPEAUDEVICEINFO@@_N_J22K@Z @ 0x1C00F3EB0 (-ProcessInputWithRateLimitingIfEnabled@Mouse@InputTraceLogging@@SAXPEAUDEVICEINFO@@_N_J22K@Z.c)
 *     ?BufferMouseInput@Mouse@InputTraceLogging@@SAXPEAUDEVICEINFO@@@Z @ 0x1C0214B78 (-BufferMouseInput@Mouse@InputTraceLogging@@SAXPEAUDEVICEINFO@@@Z.c)
 *     ?CanCombineMouseReportBatches@MouseRateLimitHoldingFrame@CMouseSensor@@QEAA_N_JPEAUDEVICEINFO@@_NK@Z @ 0x1C0214C0C (-CanCombineMouseReportBatches@MouseRateLimitHoldingFrame@CMouseSensor@@QEAA_N_JPEAUDEVICEINFO@@_.c)
 */

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

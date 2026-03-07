void __fastcall CMouseSensor::MouseRateLimitHoldingFrame::InitializeHoldingFrame(
        LARGE_INTEGER *this,
        char a2,
        struct DEVICEINFO *a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 QuadPart; // rcx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  QuadPart = this->QuadPart;
  this[54] = PerformanceCounter;
  LOBYTE(this[56].LowPart) = 1;
  LOBYTE(this[53].LowPart) = a2;
  this[52].QuadPart = (LONGLONG)a3;
  LOWORD(this[51].LowPart) = 0;
  this[1].QuadPart = QuadPart;
  this[2].QuadPart = 9 * QuadPart / 10;
  if ( QuadPart > 0 )
    CMouseSensor::MouseRateLimitHoldingFrame::HandleMouseReportRateLimitingTimer(
      (CMouseSensor::MouseRateLimitHoldingFrame *)this,
      0,
      2 * ((unsigned __int64)(1000 * QuadPart) / gliQpcFreq.QuadPart));
}

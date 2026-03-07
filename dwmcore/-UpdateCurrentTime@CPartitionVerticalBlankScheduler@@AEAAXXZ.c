void __fastcall CPartitionVerticalBlankScheduler::UpdateCurrentTime(LARGE_INTEGER *this)
{
  unsigned __int64 *p_QuadPart; // r15
  LARGE_INTEGER v3; // rbx
  LARGE_INTEGER *v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 QuadPart; // rbx
  unsigned __int64 v7; // rbx
  ULONG_PTR v8; // rax
  unsigned __int64 v9; // rbx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+28h] [rbp-69h] BYREF

  p_QuadPart = (unsigned __int64 *)&this[1168].QuadPart;
  v3 = this[1168];
  v4 = this + 1166;
  v5 = (unsigned __int64)&this[1168] | ((_QWORD)(this + 1168) << 32);
  if ( (v5 ^ this[1166].QuadPart) != v3.QuadPart )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    v7 = v5 ^ v3.QuadPart;
    pExceptionRecord.ExceptionInformation[0] = (int)HIDWORD(v4->QuadPart);
    pExceptionRecord.ExceptionInformation[1] = v4->LowPart;
    pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v7);
    pExceptionRecord.ExceptionInformation[3] = (unsigned int)v7;
    pExceptionRecord.ExceptionCode = -2003304320;
    pExceptionRecord.NumberParameters = 4;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  this[1167] = *v4;
  QueryPerformanceCounter(v4);
  QuadPart = this[1167].QuadPart;
  if ( v4->QuadPart < QuadPart )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionInformation[0] = (int)HIDWORD(v4->QuadPart);
    pExceptionRecord.ExceptionInformation[1] = v4->LowPart;
    pExceptionRecord.ExceptionInformation[2] = SHIDWORD(QuadPart);
    v8 = (unsigned int)QuadPart;
    v9 = QuadPart - v4->QuadPart;
    pExceptionRecord.ExceptionInformation[3] = v8;
    pExceptionRecord.ExceptionInformation[4] = g_qpcFrequency.HighPart;
    pExceptionRecord.ExceptionInformation[5] = g_qpcFrequency.LowPart;
    pExceptionRecord.ExceptionCode = -2003304293;
    pExceptionRecord.NumberParameters = 8;
    pExceptionRecord.ExceptionInformation[6] = (int)((1000 * v9 / g_qpcFrequency.QuadPart) >> 32);
    pExceptionRecord.ExceptionInformation[7] = (unsigned int)(1000 * v9 / g_qpcFrequency.QuadPart);
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  *p_QuadPart = v4->QuadPart ^ v5;
}

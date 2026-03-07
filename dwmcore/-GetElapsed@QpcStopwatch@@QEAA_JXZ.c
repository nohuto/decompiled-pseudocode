LONGLONG __fastcall QpcStopwatch::GetElapsed(QpcStopwatch *this)
{
  LONGLONG result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  if ( *(_QWORD *)this )
  {
    QueryPerformanceCounter(&PerformanceCount);
    return PerformanceCount.QuadPart - *(_QWORD *)this;
  }
  return result;
}

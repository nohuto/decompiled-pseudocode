__int64 __fastcall BLTQUEUE::IssueCommand(BLTQUEUE *this)
{
  *((_QWORD *)this + 78) = KeGetCurrentThread();
  *((LARGE_INTEGER *)this + 97) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 520), 0, 0);
  KeWaitForSingleObject((char *)this + 544, Executive, 0, 0, 0LL);
  *((_QWORD *)this + 78) = 0LL;
  return *((unsigned int *)this + 150);
}

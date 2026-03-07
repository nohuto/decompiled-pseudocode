LARGE_INTEGER PopSstDiagQueryResumeTimestamp()
{
  return (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C39050);
}

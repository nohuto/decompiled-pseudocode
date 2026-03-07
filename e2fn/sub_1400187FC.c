unsigned __int64 sub_1400187FC()
{
  unsigned __int64 v0; // rcx

  if ( qword_1400DF6C0 )
    v0 = 1000000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / qword_1400DF6C0;
  else
    v0 = MEMORY[0xFFFFF78000000014] / 10LL;
  return v0 / 0x3E8;
}

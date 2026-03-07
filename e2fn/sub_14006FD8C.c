__int64 __fastcall sub_14006FD8C(__int64 a1)
{
  __int64 v2; // rdx

  if ( qword_1400DF6C0 )
    v2 = 1000000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / qword_1400DF6C0;
  else
    v2 = MEMORY[0xFFFFF78000000014] / 10LL;
  return v2 - a1;
}

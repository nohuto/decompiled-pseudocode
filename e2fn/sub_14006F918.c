__int64 __fastcall sub_14006F918(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx

  *(_QWORD *)a1 = &off_1400D8FF8;
  *(_QWORD *)(a1 + 8) = 0xA5A5A5A5A500008BuLL;
  if ( qword_1400DF6C0 )
    v4 = 1000000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / qword_1400DF6C0;
  else
    v4 = MEMORY[0xFFFFF78000000014] / 10LL;
  *(_QWORD *)(a1 + 16) = v4;
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = &off_1400D41D0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( a1 + 24 != a2 )
    sub_1400011A8((_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  return a1;
}

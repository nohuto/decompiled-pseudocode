__int64 __fastcall KiComputeNewInterruptTime(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r8

  LOBYTE(v4) = MEMORY[0xFFFFF78000000369];
  *((_QWORD *)&v4 + 1) = 0LL;
  v5 = MEMORY[0xFFFFF78000000350];
  v6 = MEMORY[0xFFFFF78000000008];
  v7 = MEMORY[0xFFFFF78000000360];
  *a2 = 0LL;
  if ( a1 > v5 )
  {
    v8 = a1 - v5;
    if ( (_BYTE)v4 )
      v8 <<= v4;
    v4 = v8 * (unsigned __int128)v7;
    KiInterruptTimeErrorAccumulator += v4;
    if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v4 )
      ++*((_QWORD *)&v4 + 1);
    *a2 = *((_QWORD *)&v4 + 1);
  }
  return *((_QWORD *)&v4 + 1) + v6;
}

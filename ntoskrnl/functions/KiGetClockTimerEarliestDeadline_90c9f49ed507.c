__int64 __fastcall KiGetClockTimerEarliestDeadline(__int64 a1, char a2)
{
  unsigned __int64 v2; // r10
  int v3; // r8d
  unsigned int *v4; // rcx
  unsigned int v5; // r9d
  char v6; // al

  v2 = -1LL;
  v3 = 0;
  v4 = (unsigned int *)(a1 + 36384);
  v5 = 7;
  do
  {
    v6 = *((_BYTE *)v4 + 4);
    if ( (v6 & 1) != 0 && (a2 || (v6 & 2) == 0) && *((_QWORD *)v4 - 1) + (unsigned __int64)*v4 < v2 )
    {
      v2 = *((_QWORD *)v4 - 1) + *v4;
      v5 = v3;
    }
    ++v3;
    v4 += 4;
  }
  while ( v3 < 7 );
  return v5;
}

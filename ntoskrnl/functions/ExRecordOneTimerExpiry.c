char __fastcall ExRecordOneTimerExpiry(unsigned __int8 a1, char a2)
{
  __int64 v2; // r8
  unsigned __int8 v3; // dl
  __int64 *v4; // r10
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx

  if ( ExpIRTimerExpiryCounts )
  {
    v2 = a1 < 0x11u ? a1 : 0;
    v3 = a1 < 0x11u ? a2 : 0;
    v4 = qword_140005ED0;
    LOBYTE(v5) = v3 < LOBYTE(qword_140005ED0[3 * v2]) ? v3 : 0;
    v6 = (unsigned __int8)v5;
    if ( ((unsigned __int8)v2 & (unsigned __int8)-(v3 < LOBYTE(qword_140005ED0[3 * v2]))) != 0 )
    {
      v7 = v3 < LOBYTE(qword_140005ED0[3 * v2]) ? (unsigned __int8)v2 : 0;
      do
      {
        v5 = *(unsigned __int8 *)v4;
        v4 += 3;
        v6 = (unsigned int)(v5 + v6);
        --v7;
      }
      while ( v7 );
    }
    ++*(_DWORD *)(ExpIRTimerExpiryCounts + 4 * v6);
  }
  return v5;
}

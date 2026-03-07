__int64 __fastcall KeQuerySystemAllowedCpuSetAffinity(unsigned __int16 *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  bool v6; // zf
  unsigned int v7; // ebp
  unsigned int v8; // r8d
  unsigned __int64 *v9; // r10
  unsigned __int64 v10; // r9
  __int64 v11; // r11
  unsigned __int64 v12; // rdx

  do
  {
    result = RtlBeginReadTickLock(&KiCpuSetSequence);
    v5 = result;
    if ( *a2 == result )
      return result;
    memset(a1 + 4, 0, 8LL * *a1);
    v6 = KiRestrictedSystemCpuSetsActive == 0;
    *a1 = 1;
    if ( v6 )
    {
      KiCopyAffinityEx((__int64)a1, a1[1], (unsigned __int16 *)&KeActiveProcessors);
      goto LABEL_4;
    }
    v7 = (unsigned __int16)KiActiveGroups;
    v8 = 0;
    if ( KiActiveGroups )
    {
      v9 = (unsigned __int64 *)&KiSystemAllowedCpuSets;
      while ( 1 )
      {
        v10 = *v9;
        v11 = 0LL;
        if ( !*v9 )
          goto LABEL_15;
        do
        {
          _BitScanForward64(&v12, v10);
          v11 |= *((_QWORD *)KiCpuSetAffinities + 64 * v8 + (unsigned int)v12);
          v10 &= ~(1LL << v12);
        }
        while ( v10 );
        if ( !v11 )
          goto LABEL_15;
        if ( *a1 > (unsigned __int16)v8 )
          goto LABEL_14;
        if ( a1[1] > (unsigned __int16)v8 )
          break;
LABEL_15:
        ++v8;
        v9 += 2;
        if ( v8 >= v7 )
          goto LABEL_4;
      }
      *a1 = v8 + 1;
LABEL_14:
      *(_QWORD *)&a1[4 * (unsigned __int16)v8 + 4] |= v11;
      goto LABEL_15;
    }
LABEL_4:
    result = KiCpuSetSequence;
  }
  while ( KiCpuSetSequence != v5 );
  *a2 = v5;
  return result;
}

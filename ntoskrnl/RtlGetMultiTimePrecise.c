/*
 * XREFs of RtlGetMultiTimePrecise @ 0x1402F9390
 * Callers:
 *     RtlConvertHostPerfCounterToPerfCounter @ 0x1405A5100 (RtlConvertHostPerfCounterToPerfCounter.c)
 *     EtwpGetTimeStampAndQpcDelta @ 0x1405FECD0 (EtwpGetTimeStampAndQpcDelta.c)
 *     EtwpInitializeTimeStamp @ 0x14078CF30 (EtwpInitializeTimeStamp.c)
 *     EtwpInitializeBootTimeStamps @ 0x140B70ED8 (EtwpInitializeBootTimeStamps.c)
 *     EtwpFixBootSystemTime @ 0x140B942D0 (EtwpFixBootSystemTime.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     RtlBeginReadTickLock @ 0x140236FBC (RtlBeginReadTickLock.c)
 *     HvlGetSharedPageVa @ 0x1402F9564 (HvlGetSharedPageVa.c)
 */

__int64 __fastcall RtlGetMultiTimePrecise(LARGE_INTEGER *a1, int a2, int *a3)
{
  __int64 v3; // rbx
  char v4; // si
  __int64 v5; // rbp
  char v6; // r13
  int v7; // r14d
  __int64 SharedPageVa; // r15
  __int64 v9; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  int v11; // edi
  LONGLONG v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+28h] [rbp-70h]
  unsigned __int64 v16; // [rsp+30h] [rbp-68h]
  unsigned __int64 v17; // [rsp+38h] [rbp-60h]
  __int64 v18; // [rsp+40h] [rbp-58h]
  __int64 TickLock; // [rsp+48h] [rbp-50h]

  v3 = 0LL;
  v4 = a2;
  v16 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v6 = 0;
  v15 = 0LL;
  v14 = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    v7 = a2 & 4;
    SharedPageVa = HvlGetSharedPageVa();
    while ( 1 )
    {
      TickLock = RtlBeginReadTickLock((__int64 *)0xFFFFF78000000340LL);
      if ( v7 )
      {
        v16 = MEMORY[0xFFFFF78000000348];
        v17 = MEMORY[0xFFFFF78000000358];
        v6 = MEMORY[0xFFFFF78000000368];
        v18 = MEMORY[0xFFFFF78000000014];
      }
      if ( (v4 & 2) != 0 && SharedPageVa )
      {
        v14 = MEMORY[0xFFFFF780000003C7];
        do
        {
          do
          {
            v5 = *(_QWORD *)(SharedPageVa + 24);
            v9 = MEMORY[0xFFFFF780000003B8];
            v15 = MEMORY[0xFFFFF780000003B8];
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
          }
          while ( v5 != *(_QWORD *)(SharedPageVa + 24) );
        }
        while ( v9 != MEMORY[0xFFFFF780000003B8] );
        v7 = v4 & 4;
      }
      else
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      }
      if ( MEMORY[0xFFFFF78000000340] == TickLock )
        break;
      _mm_pause();
    }
    v11 = 0;
    if ( (v4 & 1) != 0 )
    {
      *a1 = PerformanceCounter;
      v11 = 1;
    }
    if ( (v4 & 2) != 0 && !v14 && v5 )
    {
      a1[1].QuadPart = v5 + PerformanceCounter.QuadPart - v15;
      v11 |= 2u;
    }
    if ( (v4 & 4) != 0 )
    {
      if ( PerformanceCounter.QuadPart > v16 )
      {
        v12 = PerformanceCounter.QuadPart - v16 - 1;
        if ( v6 )
          v12 <<= v6;
        v3 = ((unsigned __int64)v12 * (unsigned __int128)v17) >> 64;
      }
      a1[2].QuadPart = v3 + v18;
      v11 |= 4u;
    }
    *a3 = v11;
  }
  else
  {
    *a3 = 0;
  }
  return 0LL;
}

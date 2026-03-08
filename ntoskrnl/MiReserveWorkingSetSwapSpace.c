/*
 * XREFs of MiReserveWorkingSetSwapSpace @ 0x140A40660
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14065065C (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiFreeReservationRuns @ 0x140765980 (MiFreeReservationRuns.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140A4071C (MiReserveWorkingSetSwapSpaceRuns.c)
 */

__int64 __fastcall MiReserveWorkingSetSwapSpace(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned int *v8; // r8
  unsigned int v9; // ebx
  unsigned int v10; // r9d
  int v11; // r9d
  __int64 result; // rax

  v8 = *(unsigned int **)(a1 + 8LL * a4 + 17056);
  v9 = a4;
  if ( a4 == a5 )
    goto LABEL_6;
  v9 = a4;
  if ( a5 == 16 )
    goto LABEL_6;
  v10 = *v8;
  if ( (v8[51] & 0x20) != 0 )
    v11 = v10 >> 1;
  else
    v11 = v10 - (v10 >> 6);
  while ( 1 )
  {
    result = MiReserveWorkingSetSwapSpaceRuns(a1, a6, v9, v11, (__int64)a2);
    if ( !result )
      break;
    MiFreeReservationRuns(a1, (unsigned __int64)a2);
    memset(a2, 0, 0x50uLL);
    if ( v9 == a5 || a5 >= 0x10 )
      return 3221226021LL;
    v9 = a5;
LABEL_6:
    v11 = 1;
  }
  return result;
}

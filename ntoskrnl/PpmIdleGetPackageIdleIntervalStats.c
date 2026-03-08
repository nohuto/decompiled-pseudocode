/*
 * XREFs of PpmIdleGetPackageIdleIntervalStats @ 0x14084C230
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmConvertTimeTo @ 0x1403A1D04 (PpmConvertTimeTo.c)
 *     PpmParkGetParkNode @ 0x14040B904 (PpmParkGetParkNode.c)
 */

__int64 __fastcall PpmIdleGetPackageIdleIntervalStats(int a1, __int16 a2, unsigned __int64 *a3)
{
  unsigned int v4; // edi
  int v5; // r15d
  _WORD *ParkNode; // rax
  _WORD *v9; // rbx
  __int64 v10; // r11
  __int64 v11; // rbp
  __int64 v12; // r11
  unsigned int v13; // r11d
  __int64 v14; // r8
  unsigned __int64 *v15; // r14
  __int64 v16; // r13
  __int64 v17; // r12

  v4 = 0;
  v5 = 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  ParkNode = PpmParkGetParkNode(a2);
  v9 = ParkNode;
  if ( !ParkNode )
    goto LABEL_15;
  v10 = *((_QWORD *)ParkNode + 6);
  if ( !v10 )
    goto LABEL_15;
  if ( a1 == 74 )
  {
    v11 = 37LL;
    v12 = v10 + 32 - (_QWORD)a3;
    do
    {
      *a3 = PpmConvertTimeTo(*(unsigned __int64 *)((char *)a3 + v12), 0x989680uLL);
      ++a3;
      --v11;
    }
    while ( v11 );
    goto LABEL_16;
  }
  if ( a1 != 75 )
    goto LABEL_15;
  v13 = 0;
  if ( !*((_BYTE *)ParkNode + 11) )
    goto LABEL_15;
  do
  {
    if ( v13 >= 2 )
      break;
    v14 = *(_QWORD *)(104LL * v13 + *((_QWORD *)v9 + 23) + 32);
    if ( v14 )
    {
      v5 = 1;
      v15 = &a3[37 * v13];
      v16 = 37LL;
      v17 = v14 + 32 - (_QWORD)v15;
      do
      {
        *v15 = PpmConvertTimeTo(*(unsigned __int64 *)((char *)v15 + v17), 0x989680uLL);
        ++v15;
        --v16;
      }
      while ( v16 );
    }
    ++v13;
  }
  while ( v13 < *((unsigned __int8 *)v9 + 11) );
  if ( !v5 )
LABEL_15:
    v4 = -1073741637;
LABEL_16:
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v4;
}

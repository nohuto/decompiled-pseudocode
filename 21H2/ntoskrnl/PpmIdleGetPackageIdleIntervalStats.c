/*
 * XREFs of PpmIdleGetPackageIdleIntervalStats @ 0x1407FBB54
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PpmConvertTimeTo @ 0x140387A68 (PpmConvertTimeTo.c)
 */

__int64 __fastcall PpmIdleGetPackageIdleIntervalStats(int a1, unsigned __int16 a2, unsigned __int64 *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  int v6; // r15d
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  _QWORD *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r12
  unsigned __int64 *v16; // r13

  v4 = a2;
  LODWORD(v5) = 0;
  v6 = 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( (unsigned int)v4 >= PpmParkNumNodes )
    goto LABEL_12;
  v8 = PpmParkNodes + 336 * v4;
  v9 = *(_QWORD *)(v8 + 72);
  if ( !v9 )
    goto LABEL_12;
  if ( a1 == 74 )
  {
    v10 = v9 + 32 - (_QWORD)a3;
    v11 = 37LL;
    do
    {
      *a3 = PpmConvertTimeTo(*(unsigned __int64 *)((char *)a3 + v10), 0x989680uLL);
      ++a3;
      --v11;
    }
    while ( v11 );
    goto LABEL_6;
  }
  if ( a1 != 75 )
    goto LABEL_12;
  v13 = (_QWORD *)(v8 + 152);
  v14 = 2LL;
  do
  {
    if ( *v13 )
    {
      v6 = 1;
      v15 = *v13 + 32LL - (_QWORD)a3;
      v16 = a3;
      v5 = 37LL;
      do
      {
        *v16 = PpmConvertTimeTo(*(unsigned __int64 *)((char *)v16 + v15), 0x989680uLL);
        ++v16;
        --v5;
      }
      while ( v5 );
    }
    ++v13;
    a3 += 37;
    --v14;
  }
  while ( v14 );
  if ( !v6 )
LABEL_12:
    LODWORD(v5) = -1073741637;
LABEL_6:
  PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)v5;
}

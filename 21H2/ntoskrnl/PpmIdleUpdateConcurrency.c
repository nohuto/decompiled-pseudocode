/*
 * XREFs of PpmIdleUpdateConcurrency @ 0x1403D98F0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     PpmIdleInstallConcurrency @ 0x1403D9880 (PpmIdleInstallConcurrency.c)
 *     PpmIdleRemoveConcurrency @ 0x1405C8360 (PpmIdleRemoveConcurrency.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 */

void __fastcall PpmIdleUpdateConcurrency(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, char a3, char a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rdi
  KSPIN_LOCK v10; // rax
  __int64 v11; // rbp
  int v12; // ecx
  unsigned __int64 *v13; // rax
  __int16 v14; // [rsp+40h] [rbp-8h]

  v4 = 0;
  v6 = 0LL;
  _disable();
  KxAcquireSpinLock(SpinLock);
  v10 = SpinLock[2];
  v11 = *((unsigned int *)SpinLock + 3);
  if ( a2 > v10 )
  {
    SpinLock[2] = a2;
    v6 = a2 - v10;
    if ( a4 )
    {
      SpinLock[3] += v6;
      SpinLock[v11 + 41] += v6;
    }
  }
  v12 = v11 + 1;
  if ( a3 )
    v12 = v11 - 1;
  *((_DWORD *)SpinLock + 3) = v12;
  KxReleaseSpinLock(SpinLock);
  if ( (v14 & 0x200) != 0 )
    _enable();
  if ( !a3 && !(_DWORD)v11 && v6 && a4 )
  {
    v13 = (unsigned __int64 *)&PpmPackageIdleIntervalLimits;
    do
    {
      if ( v6 < *v13 )
        break;
      ++v4;
      v13 += 3;
    }
    while ( v4 < 0x24 );
    _InterlockedExchangeAdd64((volatile signed __int64 *)&SpinLock[v4 + 4], v6);
  }
}

/*
 * XREFs of PopIdleWakeFindOrAllocateWakeSource @ 0x1405DBB80
 * Callers:
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x140398BE0 (PopIdleWakeStopActiveIntervalAccounting.c)
 * Callees:
 *     PopIdleWakeAreIdenticalWakeSources @ 0x1405DBA8C (PopIdleWakeAreIdenticalWakeSources.c)
 */

__int64 __fastcall PopIdleWakeFindOrAllocateWakeSource(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  int v6; // r12d
  _BYTE *v8; // rbx
  int v9; // r15d
  _BYTE *i; // rdi
  signed __int32 v11; // ecx

  v6 = a4;
  if ( (unsigned int)a2 <= 4 )
    return 800LL * a2 + a1 + 280;
  v9 = 5;
  for ( i = (_BYTE *)(a1 + 4692); ; i += 800 )
  {
    v8 = i - 412;
    if ( !*((_DWORD *)i - 1) )
      break;
    if ( a2 == *(_DWORD *)v8 && (_BYTE)v6 == (*i & 1) && PopIdleWakeAreIdenticalWakeSources(a2, i - 404, (_QWORD *)a3) )
      return (__int64)v8;
    if ( (unsigned int)++v9 >= 0x19 )
      return a1 + 3480;
  }
  *(_DWORD *)v8 = a2;
  *(_OWORD *)(v8 + 8) = *(_OWORD *)a3;
  *(_OWORD *)(v8 + 24) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(v8 + 40) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(v8 + 56) = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(v8 + 72) = *(_OWORD *)(a3 + 64);
  *(_OWORD *)(v8 + 88) = *(_OWORD *)(a3 + 80);
  *(_OWORD *)(v8 + 104) = *(_OWORD *)(a3 + 96);
  *(_OWORD *)(v8 + 120) = *(_OWORD *)(a3 + 112);
  *((_QWORD *)v8 + 17) = *(_QWORD *)(a3 + 128);
  *(_DWORD *)i ^= (*(_DWORD *)i ^ v6) & 1;
  do
  {
    v11 = _InterlockedIncrement(&PopIdleWakeNextToken);
    *((_DWORD *)v8 + 104) = v11;
  }
  while ( v11 == -1 );
  return (__int64)v8;
}

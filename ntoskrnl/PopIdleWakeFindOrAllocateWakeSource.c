/*
 * XREFs of PopIdleWakeFindOrAllocateWakeSource @ 0x14059B27C
 * Callers:
 *     PopIdleWakeNotifyWakeSource @ 0x14059B75C (PopIdleWakeNotifyWakeSource.c)
 * Callees:
 *     PopIdleWakeAreIdenticalWakeSources @ 0x14059B030 (PopIdleWakeAreIdenticalWakeSources.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x14059B0CC (PopIdleWakeAssignAccountingToSource.c)
 */

__int64 __fastcall PopIdleWakeFindOrAllocateWakeSource(__int64 a1, int a2, __int64 a3)
{
  __int64 i; // rbx
  int v7; // ebp
  signed __int32 v8; // ecx

  if ( (unsigned int)a2 <= 0xB )
    return 1184LL * a2 + a1 + 144;
  v7 = 12;
  for ( i = a1 + 14352; *(_DWORD *)i != 130; i += 1184LL )
  {
    if ( a2 == *(_DWORD *)i && PopIdleWakeAreIdenticalWakeSources(a2, (_BYTE *)(i + 8), (_QWORD *)a3) )
      return i;
    if ( (unsigned int)++v7 >= 0x20 )
      return a1 + 4880;
  }
  PopIdleWakeAssignAccountingToSource(a1, i, a2, a3);
  *(_DWORD *)i = a2;
  *(_OWORD *)(i + 8) = *(_OWORD *)a3;
  *(_OWORD *)(i + 24) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(i + 40) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(i + 56) = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(i + 72) = *(_OWORD *)(a3 + 64);
  *(_OWORD *)(i + 88) = *(_OWORD *)(a3 + 80);
  *(_OWORD *)(i + 104) = *(_OWORD *)(a3 + 96);
  *(_OWORD *)(i + 120) = *(_OWORD *)(a3 + 112);
  *(_QWORD *)(i + 136) = *(_QWORD *)(a3 + 128);
  do
  {
    v8 = _InterlockedIncrement(&PopIdleWakeNextToken);
    *(_DWORD *)(i + 408) = v8;
  }
  while ( v8 == -1 );
  return i;
}

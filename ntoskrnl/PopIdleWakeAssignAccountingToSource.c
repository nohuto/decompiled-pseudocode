/*
 * XREFs of PopIdleWakeAssignAccountingToSource @ 0x14059B0CC
 * Callers:
 *     PopIdleWakeFindOrAllocateWakeSource @ 0x14059B27C (PopIdleWakeFindOrAllocateWakeSource.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 */

__int64 __fastcall PopIdleWakeAssignAccountingToSource(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int Number; // edx

  *(_DWORD *)a2 = a3;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)a4;
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a2 + 40) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a2 + 56) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(a2 + 72) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(a2 + 88) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(a2 + 104) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(a2 + 120) = *(_OWORD *)(a4 + 112);
  *(_QWORD *)(a2 + 136) = *(_QWORD *)(a4 + 128);
  do
  {
    result = (unsigned int)_InterlockedIncrement(&PopIdleWakeNextToken);
    *(_DWORD *)(a2 + 408) = result;
  }
  while ( (_DWORD)result == -1 );
  if ( a3 == 128 )
  {
    *(_QWORD *)(a1 + 38168) = a2 + 8;
    KeResetEvent((PRKEVENT)(a1 + 38144));
    Number = KeGetPcr()->Prcb.Number;
    if ( !*(_QWORD *)(a1 + 38136) )
      *(_WORD *)(a1 + 38082) = Number + 2048;
    return KiInsertQueueDpc(a1 + 38080, 0LL, 0LL, 0LL, 0);
  }
  return result;
}

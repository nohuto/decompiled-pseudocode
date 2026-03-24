/*
 * XREFs of EtwpAddLastDroppedEvent @ 0x1405AB638
 * Callers:
 *     EtwpFinalizeHeader @ 0x140713010 (EtwpFinalizeHeader.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14032EE60 (EtwpQueryUsedProcessorCount.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     EtwpAddEventToBuffer @ 0x140712F90 (EtwpAddEventToBuffer.c)
 */

__int64 __fastcall EtwpAddLastDroppedEvent(__int64 a1, __int64 a2, int a3)
{
  int v6; // esi
  int UsedProcessorCount; // eax
  unsigned int *v8; // rdi
  unsigned int v9; // eax
  char v10; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 1288) )
    return 3221225659LL;
  v6 = a3 - *(_DWORD *)(a2 + 48);
  UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
  v8 = (unsigned int *)EtwpAddEventToBuffer(
                         a2,
                         82LL,
                         a2 + 88,
                         *(_QWORD *)(a1 + 1288),
                         8 * UsedProcessorCount + 8,
                         v6,
                         &v10);
  if ( !v8 )
    return 3221225990LL;
  v9 = EtwpQueryUsedProcessorCount(a1);
  *v8 = v9;
  memmove(v8 + 2, *(const void **)(a1 + 1288), 8LL * v9);
  return 0LL;
}

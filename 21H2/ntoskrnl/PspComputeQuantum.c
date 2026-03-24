/*
 * XREFs of PspComputeQuantum @ 0x1406D9AFC
 * Callers:
 *     PspComputeQuantumAndPriority @ 0x1406D9A54 (PspComputeQuantumAndPriority.c)
 *     PsChangeQuantumTable @ 0x14078C7B8 (PsChangeQuantumTable.c)
 * Callees:
 *     <none>
 */

char __fastcall PspComputeQuantum(__int64 a1, char a2)
{
  __int64 v2; // rcx
  __int64 v4; // rax

  if ( *(_BYTE *)(a1 + 1463) == 1 )
    return 6;
  v2 = *(_QWORD *)(a1 + 1296);
  if ( !v2 || !PspUseJobSchedulingClasses )
    return *((_BYTE *)&PspForegroundQuantum + (PsPrioritySeparation & (unsigned int)-(a2 != 0)));
  v4 = *(unsigned int *)(v2 + 852);
  if ( (unsigned int)v4 >= 0xA )
    v4 = *(unsigned int *)(v2 + 484);
  return *((_BYTE *)PspJobSchedulingClasses + v4);
}

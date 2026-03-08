/*
 * XREFs of IopPortBacktrackAllocation @ 0x140957150
 * Callers:
 *     <none>
 * Callees:
 *     IopPortGetNextAlias @ 0x14081F944 (IopPortGetNextAlias.c)
 *     RtlDeleteRange @ 0x1408200A0 (RtlDeleteRange.c)
 */

__int64 __fastcall IopPortBacktrackAllocation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rdi
  char NextAlias; // al
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned __int64 i; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  for ( i = *a2; ; RtlDeleteRange(v9, i, *(_QWORD *)(v6 + 16) + i - 1, v8) )
  {
    NextAlias = IopPortGetNextAlias(*(_DWORD *)(a2[5] + 36), v2, &i);
    v8 = *(_QWORD *)(v7 + 32);
    v9 = *(_QWORD *)(a1 + 48);
    if ( !NextAlias )
      break;
    v2 = i;
  }
  return RtlDeleteRange(v9, *a2, a2[1], v8);
}

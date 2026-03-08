/*
 * XREFs of HUBHTX_IncrementAndCheckIfOverCurrentCountExceededMax @ 0x1C0007180
 * Callers:
 *     HUBPSM30_CheckingIfPersistentOvercurrent @ 0x1C0011BC0 (HUBPSM30_CheckingIfPersistentOvercurrent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHTX_IncrementAndCheckIfOverCurrentCountExceededMax(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 1448);
  *(_QWORD *)(a1 + 1448) = MEMORY[0xFFFFF78000000014];
  if ( v1 > 30000000 )
    *(_BYTE *)(a1 + 1456) = 0;
  ++*(_BYTE *)(a1 + 1456);
  result = 3089LL;
  if ( *(_BYTE *)(a1 + 1456) <= 5u )
    return 3005LL;
  return result;
}

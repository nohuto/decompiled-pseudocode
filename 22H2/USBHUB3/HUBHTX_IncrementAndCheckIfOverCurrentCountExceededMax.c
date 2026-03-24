/*
 * XREFs of HUBHTX_IncrementAndCheckIfOverCurrentCountExceededMax @ 0x1C0006A2C
 * Callers:
 *     HUBPSM30_CheckingIfPersistentOvercurrent @ 0x1C0010670 (HUBPSM30_CheckingIfPersistentOvercurrent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHTX_IncrementAndCheckIfOverCurrentCountExceededMax(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // dl
  __int64 result; // rax
  unsigned __int8 v4; // dl

  v1 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 1448);
  *(_QWORD *)(a1 + 1448) = MEMORY[0xFFFFF78000000014];
  if ( v1 <= 30000000 )
    v2 = *(_BYTE *)(a1 + 1456);
  else
    v2 = 0;
  result = 3089LL;
  v4 = v2 + 1;
  *(_BYTE *)(a1 + 1456) = v4;
  if ( v4 <= 5u )
    return 3005LL;
  return result;
}

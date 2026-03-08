/*
 * XREFs of ExQueryBigPoolTag @ 0x1406054EC
 * Callers:
 *     sub_1403ED56C @ 0x1403ED56C (sub_1403ED56C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExQueryBigPoolTag(unsigned __int64 a1, _DWORD *a2)
{
  int v4; // ebx
  unsigned int v5; // edx
  char *v6; // r8
  unsigned __int64 v7; // rcx
  __int64 result; // rax

  if ( !PoolBigPageTable || !PoolBigPageTableSize )
    return 0LL;
  v4 = 1;
  v5 = (PoolBigPageTableSize - 1) & ((40543 * (a1 >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(a1 >> 12)) >> 32));
  while ( 1 )
  {
    v6 = (char *)PoolBigPageTable + 32 * v5;
    v7 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 1) == 0 && a1 >= v7 && a1 < *((_QWORD *)v6 + 2) + v7 )
      break;
    if ( ++v5 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v4 )
        return 0LL;
      v5 = 0;
      v4 = 0;
    }
  }
  if ( !v6 )
    return 0LL;
  result = 1LL;
  *a2 = *((_DWORD *)v6 + 2);
  return result;
}

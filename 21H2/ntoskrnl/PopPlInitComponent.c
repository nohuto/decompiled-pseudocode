/*
 * XREFs of PopPlInitComponent @ 0x1408F95AC
 * Callers:
 *     PopPlInitComponents @ 0x1408F9688 (PopPlInitComponents.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopPlInitComponent(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4, char **a5)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  char *v9; // rsi
  char *v10; // rdi
  SIZE_T v11; // r14
  char *PoolWithTag; // rax
  __int128 v13; // xmm0
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  signed __int64 v16; // rax
  __int64 result; // rax

  v5 = 0;
  v7 = *((unsigned int *)a2 + 4);
  v9 = 0LL;
  if ( (_DWORD)v7 )
  {
    v10 = (char *)(a3 + *((unsigned int *)a2 + 5));
    if ( (unsigned __int64)&v10[8 * v7] <= a4 )
    {
      v11 = 8 * (int)v7 + 32;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x6C506F50u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v11);
        v13 = *a2;
        *((_QWORD *)v9 + 2) = a1;
        v14 = 0LL;
        *(_OWORD *)v9 = v13;
        v15 = *((unsigned int *)a2 + 4);
        *((_QWORD *)v9 + 3) = v15;
        if ( v15 )
        {
          v16 = v9 - v10;
          do
          {
            ++v14;
            *(_QWORD *)&v10[v16 + 32] = *(_QWORD *)v10;
            v10 += 8;
          }
          while ( v14 < *((_QWORD *)v9 + 3) );
        }
      }
      else
      {
        v5 = -1073741670;
      }
    }
    else
    {
      v5 = -1073741306;
    }
  }
  result = v5;
  *a5 = v9;
  return result;
}

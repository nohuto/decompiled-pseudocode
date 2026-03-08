/*
 * XREFs of PopPlInitComponent @ 0x14099D364
 * Callers:
 *     PopPlInitComponents @ 0x14099D424 (PopPlInitComponents.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPlInitComponent(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4, __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v9; // r10
  _QWORD *v10; // rdi
  __int64 Pool2; // rax
  __int128 v12; // xmm0
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 result; // rax

  v5 = 0;
  v7 = *((unsigned int *)a2 + 4);
  v9 = 0LL;
  if ( (_DWORD)v7 )
  {
    v10 = (_QWORD *)(a3 + *((unsigned int *)a2 + 5));
    if ( (unsigned __int64)&v10[v7] <= a4 )
    {
      Pool2 = ExAllocatePool2(64LL, 8 * (int)v7 + 32, 1817210704LL);
      v9 = Pool2;
      if ( Pool2 )
      {
        v12 = *a2;
        *(_QWORD *)(Pool2 + 16) = a1;
        v13 = 0LL;
        *(_OWORD *)Pool2 = v12;
        v14 = *((unsigned int *)a2 + 4);
        *(_QWORD *)(v9 + 24) = v14;
        if ( v14 )
        {
          v15 = v9 - (_QWORD)v10;
          do
          {
            ++v13;
            *(_QWORD *)((char *)v10 + v15 + 32) = *v10;
            ++v10;
          }
          while ( v13 < *(_QWORD *)(v9 + 24) );
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

/*
 * XREFs of SymCryptParallelHashSetNextWork @ 0x1403EFC24
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1403EF7BC (SymCryptParallelHashProcess.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1403F9D60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

char __fastcall SymCryptParallelHashSetNextWork(__int64 *a1, unsigned int **a2)
{
  unsigned int *v2; // rsi
  __int64 v4; // r15
  unsigned int *v6; // rdi
  char v7; // al
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  size_t v10; // r8
  __int64 v11; // rcx
  unsigned int *v12; // r12
  size_t v13; // rbp
  unsigned __int64 v14; // rcx
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v2 = *a2;
  v4 = *a1;
  v16 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = a2[3];
      if ( !*((_BYTE *)a2 + 8) )
        break;
      switch ( *((_BYTE *)a2 + 8) )
      {
        case 1:
          v8 = *((unsigned __int8 *)a2 + 9);
          a2[4] = (unsigned int *)(v8 + *((_QWORD *)v6 + 2));
          v9 = *((_QWORD *)v6 + 3) - v8;
          a2[5] = (unsigned int *)v9;
          if ( v9 >= *(unsigned int *)(v4 + 40) )
          {
            *((_BYTE *)a2 + 8) = 2;
            return 1;
          }
          goto LABEL_11;
        case 2:
LABEL_11:
          v10 = (size_t)a2[5];
          if ( v10 )
          {
            memmove(v2 + 8, a2[4], v10);
            *v2 = *((_DWORD *)a2 + 10);
          }
LABEL_8:
          a2[3] = (unsigned int *)*((_QWORD *)v6 + 4);
          *((_BYTE *)a2 + 8) = 0;
          break;
        case 3:
          v7 = ((__int64 (__fastcall *)(__int64 *, unsigned int *, unsigned int **, char *))a1[3])(a1, v2, a2, &v16);
LABEL_25:
          if ( v7 )
            return v16;
          break;
        case 4:
          ((void (__fastcall *)(__int64 *, unsigned int *, unsigned int *))a1[4])(a1, v2, a2[3]);
          goto LABEL_8;
      }
    }
    if ( !v6 )
      return 0;
    v11 = *v2;
    if ( v6[2] != 1 )
    {
      v7 = ((__int64 (__fastcall *)(__int64 *, unsigned int *, unsigned int **, char *))a1[2])(a1, v2, a2, &v16);
      goto LABEL_25;
    }
    *((_QWORD *)v2 + 2) += *((_QWORD *)v6 + 3);
    if ( *((_QWORD *)v2 + 2) < *((_QWORD *)v6 + 3) )
      ++*((_QWORD *)v2 + 3);
    if ( v11 )
    {
      v12 = v2 + 8;
      v13 = *(unsigned int *)(v4 + 40) - v11;
      if ( v13 >= *((_QWORD *)v6 + 3) )
        v13 = *((_QWORD *)v6 + 3);
      memmove((char *)v12 + v11, *((const void **)v6 + 2), v13);
      *v2 += v13;
      if ( *v2 == *(_DWORD *)(v4 + 40) )
      {
        a2[4] = v12;
        a2[5] = (unsigned int *)*(unsigned int *)(v4 + 40);
        if ( v13 == *((_QWORD *)v6 + 3) )
        {
          a2[3] = (unsigned int *)*((_QWORD *)v6 + 4);
        }
        else
        {
          *((_BYTE *)a2 + 8) = 1;
          *((_BYTE *)a2 + 9) = v13;
        }
        *v2 = 0;
        return 1;
      }
      a2[3] = (unsigned int *)*((_QWORD *)v6 + 4);
    }
    else
    {
      a2[4] = (unsigned int *)*((_QWORD *)v6 + 2);
      v14 = *((_QWORD *)v6 + 3);
      a2[5] = (unsigned int *)v14;
      *((_BYTE *)a2 + 8) = 2;
      if ( v14 >= *(unsigned int *)(v4 + 40) )
        return 1;
    }
  }
}

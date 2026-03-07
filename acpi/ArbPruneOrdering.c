__int64 __fastcall ArbPruneOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebx
  char *Pool2; // rsi
  __int64 v8; // rax
  char *v9; // rbx
  unsigned __int64 *v10; // rcx
  unsigned __int64 i; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 result; // rax
  void *v18; // rcx

  if ( a3 < a2 )
    return (unsigned int)-1073741811;
  Pool2 = (char *)ExAllocatePool2(256LL, 32LL * *a1 + 16, 1281520193LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v8 = *a1;
  v9 = Pool2;
  if ( (_WORD)v8 )
  {
    v10 = (unsigned __int64 *)*((_QWORD *)a1 + 1);
    for ( i = (unsigned __int64)&v10[2 * v8]; (unsigned __int64)v10 < i; i = *((_QWORD *)a1 + 1) + 16LL * *a1 )
    {
      v12 = *v10;
      if ( a3 < *v10 || (v13 = v10[1], a2 > v13) )
      {
        *(_OWORD *)v9 = *(_OWORD *)v10;
      }
      else if ( a2 <= v12 )
      {
        if ( a3 >= v13 )
          goto LABEL_17;
        *(_QWORD *)v9 = a3 + 1;
        *((_QWORD *)v9 + 1) = v10[1];
      }
      else
      {
        v14 = a2 - 1;
        if ( a3 < v13 )
        {
          *(_QWORD *)v9 = a3 + 1;
          *((_QWORD *)v9 + 1) = v10[1];
          *((_QWORD *)v9 + 2) = *v10;
          *((_QWORD *)v9 + 3) = v14;
          v9 += 32;
          goto LABEL_17;
        }
        *(_QWORD *)v9 = v12;
        *((_QWORD *)v9 + 1) = v14;
      }
      v9 += 16;
LABEL_17:
      v10 += 2;
    }
  }
  v15 = (v9 - Pool2) >> 4;
  if ( (_WORD)v15 )
  {
    if ( (unsigned __int16)v15 > a1[1] )
    {
      v16 = ExAllocatePool2(256LL, 16LL * (unsigned __int16)v15, 1281520193LL);
      if ( !v16 )
      {
        v6 = -1073741670;
        ExFreePoolWithTag(Pool2, 0);
        return v6;
      }
      v18 = (void *)*((_QWORD *)a1 + 1);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      *((_QWORD *)a1 + 1) = v16;
      a1[1] = v15;
    }
    memmove(*((void **)a1 + 1), Pool2, 16LL * (unsigned __int16)v15);
  }
  ExFreePoolWithTag(Pool2, 0);
  result = 0LL;
  *a1 = v15;
  return result;
}

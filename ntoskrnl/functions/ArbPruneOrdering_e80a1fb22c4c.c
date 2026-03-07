__int64 __fastcall ArbPruneOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 Pool2; // rax
  _BYTE *v7; // rsi
  char *v8; // rbx
  __int64 v9; // rax
  unsigned __int64 *v10; // rcx
  unsigned __int64 i; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rbx
  __int64 result; // rax
  unsigned int v17; // ebx
  __int64 v18; // r14
  void *v19; // rcx

  if ( a3 < a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, 32LL * *a1 + 16, 1281520193LL);
    v7 = (_BYTE *)Pool2;
    if ( Pool2 )
    {
      v8 = (char *)Pool2;
      v9 = *a1;
      if ( (_WORD)v9 )
      {
        v10 = (unsigned __int64 *)*((_QWORD *)a1 + 1);
        for ( i = (unsigned __int64)&v10[2 * v9]; ; i = *((_QWORD *)a1 + 1) + 16LL * *a1 )
        {
          if ( (unsigned __int64)v10 >= i )
            goto LABEL_14;
          v12 = *v10;
          if ( a3 < *v10 )
            break;
          v13 = v10[1];
          if ( a2 > v13 )
            break;
          if ( a2 <= v12 )
          {
            if ( a3 < v13 )
            {
              *(_QWORD *)v8 = a3 + 1;
              *((_QWORD *)v8 + 1) = v10[1];
              goto LABEL_9;
            }
          }
          else
          {
            v14 = a2 - 1;
            if ( a3 >= v13 )
            {
              *(_QWORD *)v8 = v12;
              *((_QWORD *)v8 + 1) = v14;
              goto LABEL_9;
            }
            *(_QWORD *)v8 = a3 + 1;
            *((_QWORD *)v8 + 1) = v10[1];
            *((_QWORD *)v8 + 2) = *v10;
            *((_QWORD *)v8 + 3) = v14;
            v8 += 32;
          }
LABEL_10:
          v10 += 2;
        }
        *(_OWORD *)v8 = *(_OWORD *)v10;
LABEL_9:
        v8 += 16;
        goto LABEL_10;
      }
LABEL_14:
      v15 = (v8 - v7) >> 4;
      if ( !(_WORD)v15 )
        goto LABEL_17;
      if ( (unsigned __int16)v15 <= a1[1] )
      {
LABEL_16:
        memmove(*((void **)a1 + 1), v7, 16LL * (unsigned __int16)v15);
LABEL_17:
        ExFreePoolWithTag(v7, 0);
        result = 0LL;
        *a1 = v15;
        return result;
      }
      v18 = ExAllocatePool2(256LL, 16LL * (unsigned __int16)v15, 1281520193LL);
      if ( v18 )
      {
        v19 = (void *)*((_QWORD *)a1 + 1);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        *((_QWORD *)a1 + 1) = v18;
        a1[1] = v15;
        goto LABEL_16;
      }
      v17 = -1073741670;
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v17;
}

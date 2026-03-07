char __fastcall EmpEvaluateParseNodeMapping(
        unsigned int *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        _QWORD *a9,
        unsigned int a10,
        _DWORD *a11,
        unsigned int a12,
        _QWORD *a13,
        unsigned int a14)
{
  char v14; // r10
  _QWORD *v17; // rdx
  unsigned int v18; // r9d
  unsigned int *v19; // r8
  __int64 v20; // rax
  _DWORD *v21; // rdx
  unsigned int v22; // r8d
  __int64 v23; // rax
  _QWORD *v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // rax

  v14 = 0;
  if ( a1 && a2 == a10 + a12 + a14 )
  {
    v17 = a9;
    if ( a9 && (v18 = 0, a10) )
    {
      v19 = a1;
      while ( 1 )
      {
        v20 = *v19;
        if ( (unsigned int)v20 >= a4 )
          break;
        ++v18;
        *v17 = *(_QWORD *)(a3 + 8 * v20);
        ++v19;
        ++v17;
        if ( v18 >= a10 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v21 = a11;
      if ( a11 && (v22 = 0, a12) )
      {
        while ( 1 )
        {
          v23 = a1[v22 + a10];
          if ( (unsigned int)v23 >= a6 )
            break;
          ++v22;
          *v21++ = *(_DWORD *)(a5 + 4 * v23);
          if ( v22 >= a12 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        v24 = a13;
        if ( a13 && (v25 = 0, a14) )
        {
          while ( 1 )
          {
            v26 = a1[a10 + a12 + v25];
            if ( (unsigned int)v26 >= a8 )
              break;
            ++v25;
            *v24++ = *(_QWORD *)(a7 + 8 * v26);
            if ( v25 >= a14 )
              return 1;
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return v14;
}

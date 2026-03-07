unsigned __int64 __fastcall RtlpHpVaMgrRangeFind(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 i; // rbx
  __int64 v6; // rdi
  __int64 v8; // r15
  int v9; // ecx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  _QWORD **v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx

  i = *(_QWORD *)(a1 + 8);
  v6 = a3;
  v8 = a2;
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && i )
    i ^= a1 + 8;
  v9 = *(_BYTE *)(a1 + 16) & 1;
  v10 = 0LL;
  while ( i )
  {
    if ( a2 < *(_WORD *)(i + 24) )
    {
      v11 = *(_QWORD *)i;
      v10 = i;
    }
    else
    {
      if ( a2 <= *(_WORD *)(i + 24) )
        goto LABEL_13;
      v11 = *(_QWORD *)(i + 8);
    }
    if ( v9 && v11 )
      i ^= v11;
    else
      i = v11;
  }
  i = v10;
LABEL_13:
  if ( i )
  {
    if ( (unsigned __int16)v6 > 1u )
    {
      v13 = *(_QWORD *)(a1 + 24);
      v14 = v6;
      v15 = v6 - 1;
      while ( 1 )
      {
        v16 = (i - *(_QWORD *)(v13 + 40)) >> *(_DWORD *)(v13 + 24);
        if ( v8 + v16 + v14 - (v15 & (v16 + v14 - 1)) - 1 <= v16 + *(unsigned __int16 *)(i + 24) )
          break;
        v17 = *(_QWORD ***)(i + 8);
        v18 = i;
        if ( v17 )
        {
          v19 = *v17;
          for ( i = *(_QWORD *)(i + 8); v19; v19 = (_QWORD *)*v19 )
            i = (unsigned __int64)v19;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v18 )
              break;
            v18 = i;
          }
        }
        if ( !i )
          return i;
      }
      *a4 = RtlSparseArrayElementAllocated(v13 + 16, v16 + v14 - (v15 & (v16 + v14 - 1)) - 1);
    }
    else
    {
      *a4 = i;
    }
  }
  return i;
}

__int64 __fastcall LdrApplyDynamicRelocations(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int *v9; // r8
  unsigned __int64 v10; // rcx
  bool v11; // zf
  unsigned int *v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  unsigned int *v15; // rax
  __int64 v16; // rcx
  unsigned int *v17; // r8
  __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  unsigned __int16 *v21; // rbx
  unsigned int i; // r10d
  __int64 v23; // rax
  unsigned __int64 v24; // rcx

  if ( *a2 != 1 )
    return 3221225659LL;
  v9 = a2 + 2;
  v10 = (unsigned __int64)a2 + (unsigned int)a2[1] + 8;
  v11 = v10 == (_QWORD)(a2 + 2);
  if ( v10 >= (unsigned __int64)(a2 + 2) )
  {
    v12 = a2 + 2;
    if ( v11 )
      return 0LL;
    while ( 1 )
    {
      v13 = v12[2];
      v14 = (unsigned __int64)v12 + v13 + 12;
      if ( v12 < v9 || v14 > v10 || v14 < (unsigned __int64)v12 )
        break;
      if ( *(_QWORD *)v12 == a7 )
      {
        v15 = v12 + 3;
        if ( v12 + 3 == (unsigned int *)v14 )
          return 0LL;
        while ( 1 )
        {
          v16 = v15[1];
          if ( (unsigned int)v16 < 0xA )
            break;
          if ( (v16 & 1) != 0 )
            break;
          v17 = (unsigned int *)((char *)v15 + v16);
          v18 = (unsigned int)v16;
          if ( v15 <= v12 || (unsigned __int64)v17 > v14 || v17 < v15 )
            break;
          v19 = a1 + *v15;
          v20 = (unsigned __int64)(v18 - 8) >> 1;
          v21 = (unsigned __int16 *)(v15 + 2);
          for ( i = 0; i < (unsigned int)v20; v19 = v24 & 0xFFFFFFFFFFFFF000uLL )
          {
            v23 = *v21;
            if ( !(_WORD)v23 && i )
              break;
            if ( (unsigned __int16)v23 >= 0x1000u )
              return 3221225595LL;
            v24 = v23 | v19;
            ++i;
            ++v21;
            *(_QWORD *)v24 += a8 - a7;
          }
          v15 = v17;
          if ( v17 == (unsigned int *)v14 )
            return 0LL;
        }
        return 3221225595LL;
      }
      v12 = (unsigned int *)((char *)v12 + v13 + 12);
      if ( v14 == v10 )
        return 0LL;
    }
  }
  return 3221225595LL;
}

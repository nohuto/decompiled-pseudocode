unsigned __int64 __fastcall MiLimitLoaderBlockTotalMemory(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // r14
  ULONG_PTR v3; // r8
  __int64 v4; // rax
  ULONG_PTR BugCheckParameter4; // r9
  unsigned __int64 v6; // rbp
  __int64 v8; // r13
  int v9; // r12d
  __int64 v10; // r11
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rbx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  _QWORD *v26; // rcx
  unsigned int v28; // eax
  unsigned __int64 v29; // rax

  v2 = a1 + 352;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 360);
  BugCheckParameter4 = 0LL;
  v6 = 0LL;
  v8 = 0x5C5C0C00048LL;
  v9 = 16777524;
  v10 = v4 & 1;
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      goto LABEL_15;
    v11 = v4 ^ (v2 | 1);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 360);
  }
  while ( v11 )
  {
    v13 = *(int *)(v11 + 24);
    if ( (unsigned int)v13 > 0x2A || !_bittest64(&v8, v13) )
    {
      v14 = *(_QWORD *)(v11 + 40);
      v3 += v14;
      if ( (unsigned int)v13 <= 0x18 )
      {
        if ( _bittest(&v9, v13) )
          BugCheckParameter4 += v14;
      }
    }
    v15 = *(_QWORD **)(v11 + 8);
    v16 = v11;
    if ( v15 )
    {
      v12 = (_QWORD *)*v15;
      v11 = *(_QWORD *)(v11 + 8);
      if ( *v15 )
      {
        do
        {
          v11 = (unsigned __int64)v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
    }
    else
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v11 || *(_QWORD *)v11 == v16 )
          break;
        v16 = v11;
      }
    }
  }
LABEL_15:
  if ( v3 - BugCheckParameter4 > a2 )
    KeBugCheckEx(0x1Au, 0x3030309uLL, a2, v3, BugCheckParameter4);
  v17 = 0LL;
  v18 = (v3 - a2) & -(__int64)(a2 < v3);
  v19 = *(_QWORD *)v2;
  if ( v10 )
  {
    if ( !v19 )
      return v6;
    v19 ^= v2;
  }
  while ( v19 )
  {
    v20 = *(_QWORD *)(v19 + 8);
    v17 = (_QWORD *)v19;
    if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v20 )
      v19 ^= v20;
    else
      v19 = *(_QWORD *)(v19 + 8);
  }
  while ( v17 )
  {
    v21 = (_QWORD *)*v17;
    v25 = (unsigned __int64)v17;
    v26 = v17;
    if ( *v17 )
    {
      while ( 1 )
      {
        v17 = v21;
        if ( !v21[1] )
          break;
        v21 = (_QWORD *)v21[1];
      }
    }
    else
    {
      while ( 1 )
      {
        v17 = (_QWORD *)(v17[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v17 || (_QWORD *)v17[1] == v26 )
          break;
        v26 = v17;
      }
    }
    if ( v18 )
    {
      v28 = *(_DWORD *)(v25 + 24);
      if ( v28 <= 0x18 )
      {
        if ( _bittest(&v9, v28) )
        {
          v29 = *(_QWORD *)(v25 + 40);
          if ( v29 > v18 )
          {
            *(_QWORD *)(v25 + 40) = v29 - v18;
            v18 = 0LL;
          }
          else
          {
            RtlRbRemoveNode((unsigned __int64 *)v2, v25);
            v18 -= *(_QWORD *)(v25 + 40);
            *(_QWORD *)(v25 + 40) = 0LL;
          }
        }
      }
    }
    v22 = *(int *)(v25 + 24);
    if ( (unsigned int)v22 > 0x2A || !_bittest64(&v8, v22) )
    {
      v23 = *(_QWORD *)(v25 + 40);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v25 + 32) + v23;
        if ( v24 > v6 )
          v6 = v24;
      }
    }
  }
  return v6;
}

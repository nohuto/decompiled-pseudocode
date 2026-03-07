__int64 __fastcall MiCreateSparsePfnDatabase(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rax
  ULONG_PTR v3; // r9
  int v4; // esi
  __int64 v5; // r12
  unsigned __int64 i; // rbx
  __int64 v7; // rcx
  int v8; // r15d
  unsigned __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  _QWORD **v12; // rax
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rcx
  int v16; // ecx

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 360);
  v3 = -1LL;
  v4 = 3;
  v5 = 0LL;
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      goto LABEL_31;
    i = v2 ^ ((a1 + 352) | 1);
  }
  else
  {
    i = *(_QWORD *)(a1 + 360);
  }
  if ( !i )
    goto LABEL_31;
  v7 = 0x5C5C0C00048LL;
  do
  {
    v8 = *(_DWORD *)(i + 24);
    v9 = v8 & 0x1FFFFFFF;
    if ( (unsigned int)v9 <= 0x2A && _bittest64(&v7, (unsigned int)v9) )
    {
      if ( v3 == -1LL )
        goto LABEL_22;
      goto LABEL_17;
    }
    if ( v3 == -1LL )
    {
      v3 = *(_QWORD *)(i + 32);
      goto LABEL_21;
    }
    if ( v3 + v5 == *(_QWORD *)(i + 32) )
    {
      if ( (v4 & 0x20000000) == 0 || (v4 & 0x1FFFFFFF) == 2 || (v4 & 0x1FFFFFFF) == 0x18 )
      {
        v10 = v8 & 0x20000000;
        if ( (v8 & 0x20000000) == 0 || (_DWORD)v9 == 2 || (_DWORD)v9 == 24 )
        {
LABEL_16:
          v5 += *(_QWORD *)(i + 40);
          goto LABEL_22;
        }
        v16 = v4 & 0x1FFFFFFF;
        if ( (v4 & 0x20000000) == 0 || v16 == 2 || v16 == 24 )
          goto LABEL_17;
      }
      else
      {
        v10 = v8 & 0x20000000;
      }
      if ( v10 && (_DWORD)v9 != 2 && (_DWORD)v9 != 24 )
        goto LABEL_16;
    }
LABEL_17:
    if ( !(unsigned int)MxMapPfnRange(v3) )
      return 0LL;
    if ( (unsigned int)v9 > 0x2A || (v11 = 0x5C5C0C00048LL, !_bittest64(&v11, v9)) )
    {
      v3 = *(_QWORD *)(i + 32);
LABEL_21:
      v5 = *(_QWORD *)(i + 40);
      v4 = v8;
      goto LABEL_22;
    }
    v3 = -1LL;
LABEL_22:
    v12 = *(_QWORD ***)(i + 8);
    v13 = i;
    if ( v12 )
    {
      v14 = *v12;
      for ( i = *(_QWORD *)(i + 8); v14; v14 = (_QWORD *)*v14 )
        i = (unsigned __int64)v14;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v13 )
          break;
        v13 = i;
      }
    }
    v7 = 0x5C5C0C00048LL;
  }
  while ( i );
  if ( v3 != -1LL && !(unsigned int)MxMapPfnRange(v3) )
    return 0LL;
LABEL_31:
  if ( !(unsigned int)MxMapPfnRange(qword_140C65820 + 1) )
    return 0LL;
  if ( qword_140C67DE0 == qword_140C65820 + 1 )
    return 1LL;
  LOBYTE(v1) = (unsigned int)MxMapPfnRange(qword_140C67DE0) != 0;
  return v1;
}

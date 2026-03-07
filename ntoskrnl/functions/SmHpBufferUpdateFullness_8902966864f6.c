__int64 __fastcall SmHpBufferUpdateFullness(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v3; // eax
  signed int v4; // ebp
  __int64 v6; // rsi
  _BYTE *v7; // rdx
  int v8; // ebx
  __int64 result; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rbx

  v3 = *(unsigned __int16 *)(a2 + 10);
  v4 = -1;
  v6 = a1;
  v7 = (_BYTE *)(a1 + 552);
  if ( (_WORD)v3 )
  {
    LOBYTE(a1) = *v7;
    v8 = v3 >> *v7;
  }
  else
  {
    v8 = -1;
  }
  *(_WORD *)(a2 + 10) = a3 + v3;
  *(_DWORD *)(v6 + 560) += a3;
  result = *(unsigned __int16 *)(a2 + 10);
  if ( (_WORD)result )
  {
    LOBYTE(a1) = *v7;
    v4 = (unsigned int)result >> *v7;
  }
  if ( v8 != v4 )
  {
    result = SmHpBufferProtectEx(a1, a2, 1, 0LL);
    v10 = *(_QWORD **)a2;
    if ( v8 >= 0 )
    {
      SmHpUnprotectListNeighbors(v6, v6 + 16 * (v8 + 18LL), v10);
      v11 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 )
        goto LABEL_17;
      result = v10[1];
      if ( *(_QWORD **)result != v10 )
        goto LABEL_17;
      *(_QWORD *)result = v11;
      *(_QWORD *)(v11 + 8) = result;
      if ( *(_QWORD *)(v6 + 16 * (v8 + 18LL)) == v6 + 16 * (v8 + 18LL) )
      {
        result = (unsigned int)(1 << v8);
        *(_DWORD *)(v6 + 284) ^= result;
      }
    }
    if ( v4 < 0 )
    {
      v10[1] = v10;
      *v10 = v10;
    }
    else
    {
      v12 = (_QWORD *)(v6 + 16 * (v4 + 18LL));
      if ( (_QWORD *)*v12 == v12 )
        *(_DWORD *)(v6 + 284) ^= 1 << v4;
      else
        SmHpUnprotectListNeighbors(v6, v6 + 16 * (v4 + 18LL), 0LL);
      result = v12[1];
      if ( *(_QWORD **)result != v12 )
LABEL_17:
        __fastfail(3u);
      *v10 = v12;
      v10[1] = result;
      *(_QWORD *)result = v10;
      v12[1] = v10;
    }
  }
  return result;
}

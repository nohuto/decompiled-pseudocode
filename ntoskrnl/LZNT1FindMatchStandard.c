__int64 __fastcall LZNT1FindMatchStandard(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int64 v2; // r11
  unsigned int v4; // r9d
  int v6; // ebp
  unsigned __int64 v7; // r13
  int v8; // r14d
  int v9; // r15d
  _BYTE **v10; // rcx
  _BYTE *v11; // rdi
  __int64 result; // rax
  unsigned int v13; // r10d
  _BYTE *v14; // rsi
  _BYTE *v15; // rdx
  _BYTE *v16; // rdx
  _BYTE **v17; // [rsp+48h] [rbp+10h]

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 16);
  v6 = *a1;
  v7 = *(_QWORD *)a2;
  v8 = a1[1];
  v9 = a1[2];
  v17 = (_BYTE **)(a2 + 16 * ((((-24993 * (v9 ^ (16 * (v8 ^ (16 * v6))))) >> 4) & 0xFFF) + 2LL));
  v10 = (_BYTE **)(a2 + 16LL * (((-24993 * (v9 ^ (16 * (v8 ^ (16 * v6))))) >> 4) & 0xFFF) + 40);
  v11 = *v17;
  result = 0LL;
  v13 = 0;
  v14 = *v10;
  if ( (unsigned __int64)*v17 >= *(_QWORD *)a2
    && v11 < a1
    && *v11 == (_BYTE)v6
    && v11[1] == (_BYTE)v8
    && v11[2] == (_BYTE)v9 )
  {
    result = 3LL;
    if ( v4 > 3 )
    {
      v15 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[(unsigned int)result] >= v2 )
          break;
        if ( *v15 != v15[v11 - a1] )
          break;
        result = (unsigned int)(result + 1);
        ++v15;
      }
      while ( (unsigned int)result < v4 );
    }
  }
  if ( (unsigned __int64)v14 >= v7 && v14 < a1 && *v14 == (_BYTE)v6 && v14[1] == (_BYTE)v8 && v14[2] == (_BYTE)v9 )
  {
    v13 = 3;
    if ( v4 > 3 )
    {
      v16 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[v13] >= v2 )
          break;
        if ( *v16 != v16[v14 - a1] )
          break;
        ++v13;
        ++v16;
      }
      while ( v13 < v4 );
    }
  }
  *v10 = v11;
  *v17 = a1;
  if ( (unsigned int)result < v13 )
  {
    *(_QWORD *)(a2 + 24) = v14;
    return v13;
  }
  else
  {
    *(_QWORD *)(a2 + 24) = v11;
  }
  return result;
}

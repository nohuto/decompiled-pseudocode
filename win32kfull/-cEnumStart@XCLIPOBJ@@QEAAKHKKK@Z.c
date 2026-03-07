__int64 __fastcall XCLIPOBJ::cEnumStart(XCLIPOBJ *this, int a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r11d
  __int128 v8; // xmm0
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r8d
  unsigned __int64 v12; // rcx
  int v13; // r9d
  unsigned __int64 i; // rdx
  __int64 result; // rax
  int *v16; // rdx
  int v17; // eax
  _DWORD *v18; // rdx
  int v19; // r9d
  __int64 v20; // rdx
  unsigned int v21; // ecx

  v5 = 0;
  *((_DWORD *)this + 28) = a3;
  *((_DWORD *)this + 32) = a2;
  if ( a4 != 4 )
    v5 = a4;
  *((_DWORD *)this + 27) = v5;
  if ( a2 )
    v8 = *(_OWORD *)(*((_QWORD *)this + 7) + 56LL);
  else
    v8 = *(_OWORD *)((char *)this + 4);
  v9 = *((_QWORD *)this + 7);
  *((_OWORD *)this + 4) = v8;
  v10 = *(_DWORD *)(v9 + 52);
  *((_DWORD *)this + 29) = 0;
  v11 = v10 - 1;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 22) = v11;
  if ( v5 >= 2 )
  {
    v16 = (int *)(*(_QWORD *)(v9 + 40) - 4LL);
    v17 = *v16;
    *((_DWORD *)this + 30) = -1;
    v18 = (int *)((char *)v16 - (unsigned int)(4 * v17 + 16));
    *((_QWORD *)this + 10) = v18 + 1;
    if ( !a2 )
    {
      v19 = *((_DWORD *)this + 19);
      while ( 1 )
      {
        v20 = (__int64)v18 - (unsigned int)(4 * *v18 + 16) + 4;
        if ( *(_DWORD *)(v20 + 4) < v19 )
          break;
        *((_DWORD *)this + 22) = --v11;
        if ( !v11 )
          return 0xFFFFFFFFLL;
        *((_QWORD *)this + 10) = v20;
        v18 = (_DWORD *)(v20 - 4);
      }
    }
  }
  else
  {
    v12 = *(_QWORD *)(v9 + 32);
    *((_QWORD *)this + 10) = v12;
    *((_DWORD *)this + 30) = 1;
    if ( !a2 )
    {
      v13 = *((_DWORD *)this + 17);
      for ( i = (unsigned int)(4 * *(_DWORD *)v12 + 16); ; v12 = (unsigned int)(4 * *(_DWORD *)i + 16) )
      {
        i += v12;
        if ( *(_DWORD *)(i + 8) > v13 )
          break;
        *((_DWORD *)this + 22) = --v11;
        if ( !v11 )
          return 0xFFFFFFFFLL;
        *((_QWORD *)this + 10) = i;
      }
    }
  }
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 25) = 4 * ((v5 & 1) == 0) - 2;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v21 = *((_DWORD *)this + 34);
  result = 0xFFFFFFFFLL;
  if ( v21 <= a5 )
    return v21;
  return result;
}

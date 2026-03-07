_DWORD *__fastcall IoSetLinkShareAccess(int a1, char a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  int v6; // r10d
  int v7; // ebx
  int v8; // r11d
  _DWORD *v9; // rax
  bool v10; // cl
  int v11; // eax
  _DWORD *result; // rax

  v6 = a1 & 0x21;
  v7 = a1 & 6;
  *(_BYTE *)(a3 + 74) = v6 != 0;
  v8 = a1 & 0x10000;
  *(_BYTE *)(a3 + 75) = v7 != 0;
  *(_BYTE *)(a3 + 76) = (a1 & 0x10000) != 0;
  v9 = *(_DWORD **)(a3 + 208);
  v10 = v9 && (*v9 & 1) != 0;
  if ( v6 || v7 || v8 )
  {
    *(_BYTE *)(a3 + 79) = (a2 & 4) != 0;
    *(_BYTE *)(a3 + 77) = a2 & 1;
    *(_BYTE *)(a3 + 78) = (a2 & 2) != 0;
    if ( a6 < 0 && (a2 & 1) == 0 )
      *(_BYTE *)(a3 + 77) = 1;
    if ( v10 )
    {
      v11 = 0;
      *(_QWORD *)a4 = 0LL;
      *(_QWORD *)(a4 + 8) = 0LL;
      *(_QWORD *)(a4 + 16) = 0LL;
    }
    else
    {
      *(_DWORD *)a4 = 1;
      *(_DWORD *)(a4 + 4) = *(unsigned __int8 *)(a3 + 74);
      *(_DWORD *)(a4 + 8) = *(unsigned __int8 *)(a3 + 75);
      *(_DWORD *)(a4 + 12) = *(unsigned __int8 *)(a3 + 76);
      *(_DWORD *)(a4 + 16) = *(unsigned __int8 *)(a3 + 77);
      *(_DWORD *)(a4 + 20) = *(unsigned __int8 *)(a3 + 78);
      v11 = *(unsigned __int8 *)(a3 + 79);
    }
    *(_DWORD *)(a4 + 24) = v11;
    result = a5;
    if ( a5 && !v10 )
    {
      ++*a5;
      if ( (a6 & 0x80u) == 0 )
        a5[1] += *(unsigned __int8 *)(a3 + 76);
      a5[2] += *(unsigned __int8 *)(a3 + 79);
    }
  }
  else
  {
    result = 0LL;
    *(_QWORD *)a4 = 0LL;
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_DWORD *)(a4 + 24) = 0;
  }
  return result;
}

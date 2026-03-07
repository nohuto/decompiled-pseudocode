struct EDGE *__fastcall AddEdgeToGET(
        struct EDGE *a1,
        struct EDGE *a2,
        struct _POINTFIX *a3,
        struct _POINTFIX *a4,
        struct _RECTL *a5)
{
  int v5; // r15d
  FIX y; // edi
  struct _POINTFIX *v9; // rdx
  int v10; // r11d
  FIX v11; // ebp
  int v12; // esi
  int v13; // eax
  FIX v14; // r14d
  FIX x; // r10d
  LONG v16; // eax
  FIX v17; // r9d
  LONG top; // eax
  LONG bottom; // ecx
  bool v20; // sf
  bool v21; // of
  bool v22; // cc
  int v23; // ecx
  int v24; // eax
  struct EDGE *result; // rax
  int v26; // r10d
  int v27; // r8d
  int v28; // ecx
  unsigned int v29; // r10d
  int v30; // ebp
  unsigned int v31; // r11d
  __int64 v32; // rax
  int v33; // edx
  int v34; // eax
  int v35; // r8d
  __int64 v36; // rax

  v5 = 0;
  y = a3->y;
  v9 = a4;
  v10 = a4->y - y;
  v11 = a4->y;
  if ( v10 < 0 )
    v9 = a3;
  v12 = a4->y - y;
  v13 = a3->y - a4->y;
  v14 = 0;
  if ( v10 < 0 )
  {
    v11 = a3->y;
    a3 = a4;
    y = a4->y;
    v12 = v13;
  }
  x = v9->x;
  v16 = v11;
  v17 = a3->x;
  *((_DWORD *)a2 + 10) = ((v10 >> 31) & 0xFFFFFFFE) + 1;
  if ( a5 )
  {
    top = a5->top;
    if ( v11 < top )
      return a2;
    bottom = a5->bottom;
    if ( y > bottom )
      return a2;
    v21 = __OFSUB__(y, top);
    v20 = y - top < 0;
    v22 = y < top;
    v14 = y;
    if ( y >= top )
      top = y;
    LOBYTE(v5) = v20 ^ v21;
    if ( !v22 )
      v14 = 0;
    y = top;
    v16 = v11;
    if ( v11 > bottom )
      v16 = a5->bottom;
  }
  v23 = (y + 15) >> 4;
  v24 = ((v16 + 15) >> 4) - v23;
  *((_DWORD *)a2 + 4) = v23;
  *((_DWORD *)a2 + 2) = v24;
  if ( v24 <= 0 )
    return a2;
  v26 = x - v17;
  v27 = v26;
  if ( v26 < 0 )
  {
    v27 = -v26;
    v28 = -v12;
  }
  else
  {
    v28 = -1;
  }
  v29 = ((v26 >> 31) & 0xFFFFFFFE) + 1;
  *((_DWORD *)a2 + 9) = v29;
  *((_DWORD *)a2 + 5) = v28;
  if ( v27 < v12 )
  {
    *((_DWORD *)a2 + 8) = 0;
    v30 = 0;
  }
  else
  {
    *((_DWORD *)a2 + 8) = v27 / v12;
    v30 = v27 / v12;
    if ( v29 == -1 )
    {
      v30 = -v30;
      *((_DWORD *)a2 + 8) = v30;
    }
    v27 %= v12;
  }
  *((_DWORD *)a2 + 6) = v27;
  *((_DWORD *)a2 + 7) = v12;
  if ( v5 )
  {
    v31 = a5->top;
    y = v14;
  }
  else
  {
    v31 = (y + 15) & 0xFFFFFFF0;
  }
  if ( y != v31 )
  {
    v32 = v31 - y;
    do
    {
      v17 += v30;
      v28 += v27;
      if ( v28 >= 0 )
      {
        v28 -= v12;
        v17 += v29;
      }
      --v32;
    }
    while ( v32 );
  }
  v33 = (v17 + 15) >> 4;
  *((_DWORD *)a2 + 3) = v33;
  if ( v29 == 1 )
    v34 = ((v17 + 15) & 0xFFFFFFF0) - v17;
  else
    v34 = ((_BYTE)v17 - 1) & 0xF;
  *((_DWORD *)a2 + 5) = v28 - v12 * v34;
  *((_DWORD *)a2 + 6) = 16 * v27;
  v35 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 7) = 16 * v12;
  while ( 1 )
  {
    v36 = *(_QWORD *)a1;
    if ( v35 <= *(_DWORD *)(*(_QWORD *)a1 + 16LL)
      && (v35 != *(_DWORD *)(*(_QWORD *)a1 + 16LL) || v33 <= *(_DWORD *)(v36 + 12)) )
    {
      break;
    }
    a1 = *(struct EDGE **)a1;
  }
  *(_QWORD *)a2 = v36;
  result = (struct EDGE *)((char *)a2 + 48);
  *(_QWORD *)a1 = a2;
  return result;
}

__int64 __fastcall DDA_CLIPLINE::bInit(DDA_CLIPLINE *this, struct _POINTFIX *a2, struct _POINTFIX *a3)
{
  int v3; // edi
  FIX x; // r11d
  FIX v7; // r9d
  int v8; // r8d
  int v9; // r9d
  FIX y; // esi
  FIX v11; // r10d
  int v12; // r10d
  int v13; // ecx
  FIX v14; // eax
  int v15; // r8d
  int v16; // eax
  int v17; // r11d
  int v18; // eax
  int v19; // esi
  signed __int64 v20; // r15
  __int64 v21; // r15
  unsigned int v22; // r13d
  int v23; // r12d
  signed int v24; // r14d
  int v25; // ebp
  signed int v26; // ebp
  int v27; // ecx
  int v28; // r8d
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // ecx
  __int64 result; // rax

  v3 = 0;
  *(_DWORD *)this = 0;
  x = a2->x;
  v7 = a3->x;
  if ( a3->x >= a2->x )
  {
    v8 = 0;
  }
  else
  {
    x = -x;
    v8 = 32;
    *(_DWORD *)this = 32;
    v7 = -v7;
  }
  v9 = v7 - x;
  *((_DWORD *)this + 4) = v9;
  if ( v9 < 0 )
    return 0LL;
  y = a2->y;
  v11 = a3->y;
  if ( v11 < y )
  {
    v8 |= 8u;
    y = -y;
    *(_DWORD *)this = v8;
    v11 = -v11;
  }
  v12 = v11 - y;
  *((_DWORD *)this + 3) = v12;
  if ( v12 < 0 )
    return 0LL;
  if ( v12 >= (unsigned int)v9 )
  {
    if ( v12 == v9 )
    {
      v8 |= 0x10u;
    }
    else
    {
      v13 = v9;
      *((_DWORD *)this + 3) = v9;
      v14 = x;
      *((_DWORD *)this + 4) = v12;
      x = y;
      v9 = v12;
      y = v14;
      v12 = v13;
      v8 |= 5u;
    }
  }
  v15 = *(_DWORD *)((char *)gaflRound + (v8 & 0xFFFFFFFC)) | v8;
  v16 = x >> 4;
  v17 = x & 0xF;
  *((_DWORD *)this + 1) = v16;
  v18 = y >> 4;
  v19 = y & 0xF;
  *((_DWORD *)this + 2) = v18;
  *(_DWORD *)this = v15;
  v20 = v9 * (unsigned __int64)(unsigned int)(v19 + 8) - v12 * (unsigned __int64)(unsigned int)v17;
  if ( (v15 & 0x8000) != 0 )
    --v20;
  v21 = v20 >> 4;
  *((_QWORD *)this + 3) = v21;
  v22 = (unsigned int)(v9 + v17) >> 4;
  v23 = ((_BYTE)v12 + (_BYTE)v19) & 0xF;
  v24 = v22 - 1;
  v25 = ((_BYTE)v9 + (_BYTE)v17) & 0xF;
  if ( (((_BYTE)v9 + (_BYTE)v17) & 0xF) != 0 )
  {
    if ( (((_BYTE)v12 + (_BYTE)v19) & 0xF) != 0 )
    {
      if ( (int)abs32(v23 - 8) <= v25 )
        v24 = (unsigned int)(v9 + v17) >> 4;
    }
    else
    {
      if ( v25 - (unsigned int)((v15 & 0x80) != 0) + 8 < 0x10 )
        --v22;
      v24 = v22;
    }
  }
  if ( (v15 & 0x90) != 0x90 )
    goto LABEL_28;
  if ( (((_BYTE)v9 + (_BYTE)v17) & 0xF) != 0 && v23 == v25 + 8 )
    --v24;
  if ( v17 && v19 == v17 + 8 )
  {
    v26 = 0;
  }
  else
  {
LABEL_28:
    v26 = 0;
    if ( v17 )
    {
      if ( v19 )
        v26 = (int)abs32(v19 - 8) <= v17;
      else
        LOBYTE(v26) = v17 - (unsigned int)((v15 & 0x80) != 0) + 8 >= 0x10;
    }
  }
  if ( v21 >= 0 && (unsigned int)v21 >= v9 - (v12 & (unsigned int)-v26) )
    v3 = 1;
  if ( v24 < v26 )
    return 0LL;
  v27 = *((_DWORD *)this + 1);
  v28 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 8) = v27 + v26;
  *((_DWORD *)this + 10) = v27 + v24;
  *((_DWORD *)this + 9) = v28 + v3;
  v29 = *((unsigned int *)this + 4);
  v30 = v21 + v12 * (__int64)v24;
  if ( v30 >= 0xFFFFFFFFLL )
    v30 /= v29;
  else
    LODWORD(v30) = (unsigned int)v30 / (unsigned int)v29;
  v31 = v28 + v30;
  result = 1LL;
  *((_DWORD *)this + 11) = v31;
  return result;
}

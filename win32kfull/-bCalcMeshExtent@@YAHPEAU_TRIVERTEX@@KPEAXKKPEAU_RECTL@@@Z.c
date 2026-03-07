__int64 __fastcall bCalcMeshExtent(
        struct _TRIVERTEX *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        struct _RECTL *a6)
{
  LONG v6; // edi
  LONG v7; // r11d
  LONG v8; // esi
  LONG v9; // ebp
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rax
  LONG v17; // r10d
  LONG v18; // r8d
  __int64 v19; // rax
  LONG v20; // ecx
  LONG v21; // edx
  LONG v22; // r9d
  LONG v23; // eax
  int v24; // ecx
  __int64 result; // rax
  int v26; // r9d
  __int64 v27; // r10
  __int64 v28; // rax
  __int64 v29; // rax
  LONG x; // ecx
  LONG v31; // r8d
  LONG y; // edx
  LONG v33; // eax
  int v34; // [rsp+0h] [rbp-48h]
  _DWORD v35[4]; // [rsp+8h] [rbp-40h]

  v6 = 0x80000000;
  v7 = 0x7FFFFFFF;
  v8 = 0x7FFFFFFF;
  v9 = 0x80000000;
  if ( a5 >= 2 )
  {
    if ( a5 == 2 )
    {
      v26 = 0;
      if ( a4 )
      {
LABEL_31:
        v27 = 0LL;
        v35[0] = *a3;
        v35[1] = a3[1];
        v35[2] = a3[2];
        while ( 1 )
        {
          v28 = (unsigned int)v35[v27];
          if ( (unsigned int)v28 >= a2 )
            break;
          v29 = v28;
          x = a1[v29].x;
          v31 = x;
          y = a1[v29].y;
          v33 = y;
          if ( x >= v7 )
            v31 = v7;
          v7 = v31;
          if ( x <= v6 )
            x = v6;
          v6 = x;
          if ( y >= v8 )
            v33 = v8;
          v8 = v33;
          if ( y <= v9 )
            y = v9;
          ++v27;
          v9 = y;
          if ( v27 >= 3 )
          {
            a3 += 3;
            if ( ++v26 < a4 )
              goto LABEL_31;
            goto LABEL_22;
          }
        }
      }
      else
      {
LABEL_22:
        if ( v7 >= -134217728
          && v7 <= 0x8000000
          && (unsigned int)(v6 + 0x8000000) <= 0x10000000
          && (unsigned int)(v8 + 0x8000000) <= 0x10000000
          && (unsigned int)(v9 + 0x8000000) <= 0x10000000 )
        {
          a6->left = v7;
          result = 1LL;
          a6->right = v6;
          a6->top = v8;
          a6->bottom = v9;
          return result;
        }
      }
    }
  }
  else
  {
    v34 = 0;
    if ( a4 )
    {
      while ( 1 )
      {
        v14 = (unsigned int)*a3;
        if ( (unsigned int)v14 > a2 )
          break;
        v15 = a3[1];
        if ( v15 > a2 )
          break;
        v16 = v14;
        v17 = a1[v16].y;
        v18 = a1[v16].x;
        v19 = v15;
        v20 = v17;
        v21 = a1[v19].x;
        v22 = a1[v19].y;
        v23 = v18;
        if ( v18 >= v7 )
          v23 = v7;
        v7 = v21;
        if ( v18 <= v6 )
          v18 = v6;
        v6 = v21;
        if ( v17 >= v8 )
          v20 = v8;
        v8 = v22;
        if ( v17 <= v9 )
          v17 = v9;
        v9 = v22;
        if ( v21 >= v23 )
          v7 = v23;
        if ( v21 <= v18 )
          v6 = v18;
        if ( v22 >= v20 )
          v8 = v20;
        v24 = v34;
        if ( v22 <= v17 )
          v9 = v17;
        a3 += 2;
        ++v34;
        if ( v24 + 1 >= a4 )
          goto LABEL_22;
      }
    }
  }
  a6->left = 0;
  a6->right = 0;
  a6->top = 0;
  a6->bottom = 0;
  return 0LL;
}

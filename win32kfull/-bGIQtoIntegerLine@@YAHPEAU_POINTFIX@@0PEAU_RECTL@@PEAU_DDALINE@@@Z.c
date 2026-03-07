__int64 __fastcall bGIQtoIntegerLine(
        struct _POINTFIX *a1,
        struct _POINTFIX *a2,
        struct _RECTL *a3,
        struct _DDALINE *a4)
{
  FIX x; // r10d
  unsigned int v5; // r11d
  FIX v6; // eax
  FIX v7; // edi
  __int64 v9; // rbx
  FIX v10; // esi
  int v11; // esi
  FIX y; // r8d
  FIX v13; // r9d
  int v14; // r9d
  FIX v15; // r10d
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  int v19; // r10d
  int v20; // eax
  int v21; // r8d
  unsigned int v22; // edi
  int v23; // edi
  int v24; // eax
  signed __int64 v25; // rbp
  unsigned __int64 v26; // rdx
  __int64 v27; // rbp
  int v28; // r13d
  unsigned __int64 v29; // r14
  int v30; // edi
  int v31; // edi
  unsigned __int64 v32; // r8
  struct _RECTL *v33; // rax
  int top; // r15d
  int bottom; // r12d
  int left; // r10d
  int right; // r13d
  int v38; // r13d
  int v39; // r10d
  int v40; // r12d
  int v41; // r15d
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // r10d
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // edx
  int v51; // r8d
  int v52; // ecx
  int v53; // eax
  int v55; // [rsp+0h] [rbp-48h]
  int v56; // [rsp+50h] [rbp+8h]
  int v57; // [rsp+58h] [rbp+10h]

  x = a1->x;
  v5 = 0;
  v6 = a2->x;
  v7 = -a1->x;
  v9 = 4LL;
  if ( a2->x >= a1->x )
    v7 = a1->x;
  if ( v6 >= x )
    v9 = 0LL;
  v10 = -a2->x;
  if ( v6 >= x )
    v10 = a2->x;
  v11 = v10 - v7;
  if ( v11 >= 0 )
  {
    y = a1->y;
    v13 = a2->y;
    if ( v13 < y )
    {
      y = -y;
      v13 = -v13;
      v9 = (unsigned int)v9 | 2;
    }
    v14 = v13 - y;
    if ( v14 >= 0 )
    {
      v15 = v7;
      if ( v14 >= (unsigned int)v11 )
      {
        if ( v14 == v11 )
        {
          v9 = (unsigned int)v9 | 8;
        }
        else
        {
          v16 = v11;
          v15 = y;
          v11 = v14;
          y = v7;
          v14 = v16;
          v9 = (unsigned int)v9 | 1;
        }
      }
      v17 = v15;
      v18 = dword_1C032B7C0[v9] | v9;
      v19 = v15 & 0xF;
      v56 = v17 >> 4;
      v20 = y;
      v21 = y & 0xF;
      v57 = v20 >> 4;
      v22 = v21 + 8;
      if ( (unsigned int)v11 > 0x1FFFFFF )
      {
        v26 = v14 * (unsigned __int64)(unsigned int)v19;
        v25 = v11 * (unsigned __int64)v22 - v26 - 1;
        if ( (v18 & 0x8000) == 0 )
          v25 = v11 * (unsigned __int64)v22 - v26;
      }
      else
      {
        v23 = v11 * v22 - v19 * v14;
        v24 = v23 - 1;
        if ( (v18 & 0x200) == 0 )
          v24 = v23;
        v25 = v24;
      }
      v27 = v25 >> 4;
      v28 = ((_BYTE)v14 + (_BYTE)v21) & 0xF;
      LODWORD(v29) = ((unsigned int)(v11 + v19) >> 4) - 1;
      v30 = ((_BYTE)v11 + (_BYTE)v19) & 0xF;
      if ( (((_BYTE)v11 + (_BYTE)v19) & 0xF) != 0 )
      {
        if ( (((_BYTE)v14 + (_BYTE)v21) & 0xF) != 0 )
        {
          if ( (int)abs32(v28 - 8) <= v30 )
            LODWORD(v29) = (unsigned int)(v11 + v19) >> 4;
        }
        else if ( v30 - (unsigned int)((v18 & 0x100) != 0) + 8 >= 0x10 )
        {
          LODWORD(v29) = (unsigned int)(v11 + v19) >> 4;
        }
      }
      if ( (v18 & 0x108) != 0x108 )
        goto LABEL_38;
      if ( (((_BYTE)v11 + (_BYTE)v19) & 0xF) != 0 && v28 == v30 + 8 )
        LODWORD(v29) = v29 - 1;
      if ( v19 && v21 == v19 + 8 )
      {
        v31 = 0;
      }
      else
      {
LABEL_38:
        v31 = 0;
        if ( v19 )
        {
          if ( v21 )
            v31 = (int)abs32(v21 - 8) <= v19;
          else
            LOBYTE(v31) = v19 - (unsigned int)((v18 & 0x100) != 0) + 8 >= 0x10;
        }
      }
      LODWORD(v32) = 0;
      if ( v27 >= 0 )
        LODWORD(v32) = v27 >= v11 - (v14 & (unsigned int)-v31);
      if ( (int)v29 < v31 )
      {
        *((_DWORD *)a4 + 3) = 0;
        return 1;
      }
      if ( !a3 )
      {
        v27 += (v14 & (unsigned int)-v31) - (unsigned __int64)(unsigned int)v11;
        if ( v27 >= 0 )
          LODWORD(v27) = v27 - v11;
LABEL_78:
        v5 = 1;
        v50 = v32 + v57;
        v51 = v31 + v56;
        *(_DWORD *)a4 = v18;
        *((_DWORD *)a4 + 4) = v11;
        if ( (v18 & 1) == 0 )
          v51 = v50;
        *((_DWORD *)a4 + 5) = v14;
        if ( (v18 & 1) == 0 )
          v50 = v31 + v56;
        *((_DWORD *)a4 + 6) = v27;
        *((_DWORD *)a4 + 7) = 1;
        v52 = -v50;
        if ( (v18 & 4) == 0 )
          v52 = v50;
        v53 = -v51;
        *((_DWORD *)a4 + 1) = v52;
        if ( (v18 & 2) == 0 )
          v53 = v51;
        *((_DWORD *)a4 + 2) = v53;
        *((_DWORD *)a4 + 3) = v29 - v31 + 1;
        return v5;
      }
      v33 = &a3[v18 & 3];
      if ( (v18 & 4) != 0 )
      {
        if ( (v18 & 1) == 0 )
        {
          top = v33->top;
          left = 1 - v33->right;
          right = 1 - v33->left;
          bottom = v33->bottom;
LABEL_49:
          v38 = right - v56;
          v39 = left - v56;
          v40 = bottom - v57;
          v41 = top - v57;
          if ( v40 <= (int)v32 || v38 <= v31 || v39 > (int)v29 )
            goto LABEL_68;
          v42 = v38 - 1;
          if ( (int)v29 < v38 )
            v42 = v29;
          v55 = v42;
          v43 = v27 + v14 * (__int64)v42;
          if ( v43 >= 0xFFFFFFFFLL )
            v43 /= (unsigned __int64)(unsigned int)v11;
          else
            LODWORD(v43) = (unsigned int)v43 / v11;
          if ( v41 > (int)v43 )
            goto LABEL_68;
          v44 = v11;
          if ( v40 > (int)v43 )
          {
            LODWORD(v29) = v55;
          }
          else
          {
            v45 = ~v27 + v11 * (__int64)v40;
            if ( v45 >= 0xFFFFFFFFLL )
            {
              v44 = v11;
              v29 = (~v27 + v11 * (__int64)v40) / (unsigned __int64)(unsigned int)v14;
            }
            else
            {
              LODWORD(v29) = (unsigned int)v45 / v14;
            }
          }
          if ( v39 <= v31 )
          {
            v47 = v11;
          }
          else
          {
            v31 = v39;
            v46 = v14 * (__int64)v39;
            v47 = v11;
            v48 = v27 + v46;
            if ( v48 >= 0xFFFFFFFFLL )
              v32 = v48 / (unsigned __int64)(unsigned int)v11;
            else
              LODWORD(v32) = (unsigned int)v48 / v11;
            if ( v40 <= (int)v32 )
              goto LABEL_68;
          }
          if ( v41 > (int)v32 )
          {
            LODWORD(v32) = v41;
            v49 = ~v27 + v44 * v41;
            if ( v49 >= 0xFFFFFFFFLL )
              v49 /= (unsigned __int64)(unsigned int)v14;
            else
              LODWORD(v49) = (unsigned int)v49 / v14;
            v31 = v49 + 1;
            if ( v38 <= (int)v49 + 1 )
            {
LABEL_68:
              *((_DWORD *)a4 + 3) = 0;
              return 1;
            }
          }
          LODWORD(v27) = v14 * v31 - v11 * v32 - v47 + v27;
          goto LABEL_78;
        }
        top = 1 - v33->bottom;
        bottom = 1 - v33->top;
      }
      else
      {
        top = v33->top;
        bottom = v33->bottom;
      }
      right = v33->right;
      left = v33->left;
      goto LABEL_49;
    }
  }
  return v5;
}

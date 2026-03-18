/*
 * XREFs of ?bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z @ 0x1C014C90C
 * Callers:
 *     ?vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C0133C2C (-vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

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
  int v17; // ebx
  int v18; // r10d
  int v19; // eax
  int v20; // r8d
  unsigned int v21; // edi
  int v22; // edi
  int v23; // eax
  signed __int64 v24; // rbp
  __int64 v25; // rbp
  int v26; // r13d
  unsigned __int64 v27; // r14
  int v28; // edi
  int v29; // edi
  unsigned __int64 v30; // r8
  struct _RECTL *v31; // rax
  int top; // r15d
  int bottom; // r12d
  int right; // r13d
  int left; // r10d
  int v36; // r13d
  int v37; // r10d
  int v38; // r12d
  int v39; // r15d
  int v40; // ecx
  __int64 v41; // rax
  int v42; // edx
  int v43; // r8d
  int v44; // ecx
  int v45; // eax
  __int64 v47; // rax
  int v48; // eax
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  signed __int64 v51; // rax
  __int64 v52; // [rsp+8h] [rbp-40h]
  int v53; // [rsp+50h] [rbp+8h]
  int v54; // [rsp+58h] [rbp+10h]

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
          v48 = v11;
          v15 = y;
          v11 = v14;
          y = v7;
          v14 = v48;
          v9 = (unsigned int)v9 | 1;
        }
      }
      v16 = v15;
      v17 = gaflHardwareRound[v9] | v9;
      v18 = v15 & 0xF;
      v53 = v16 >> 4;
      v19 = y;
      v20 = y & 0xF;
      v54 = v19 >> 4;
      v21 = v20 + 8;
      if ( (unsigned int)v11 > 0x1FFFFFF )
      {
        v49 = v14 * (unsigned __int64)(unsigned int)v18;
        v24 = v11 * (unsigned __int64)v21 - v49 - 1;
        if ( (v17 & 0x8000) == 0 )
          v24 = v11 * (unsigned __int64)v21 - v49;
      }
      else
      {
        v22 = v11 * v21 - v18 * v14;
        v23 = v22 - 1;
        if ( (v17 & 0x200) == 0 )
          v23 = v22;
        v24 = v23;
      }
      v25 = v24 >> 4;
      v26 = ((_BYTE)v14 + (_BYTE)v20) & 0xF;
      LODWORD(v27) = ((unsigned int)(v11 + v18) >> 4) - 1;
      v28 = ((_BYTE)v11 + (_BYTE)v18) & 0xF;
      if ( (((_BYTE)v11 + (_BYTE)v18) & 0xF) != 0 )
      {
        if ( (((_BYTE)v14 + (_BYTE)v20) & 0xF) != 0 )
        {
          if ( (int)abs32(v26 - 8) <= v28 )
            LODWORD(v27) = (unsigned int)(v11 + v18) >> 4;
        }
        else if ( v28 - (unsigned int)((v17 & 0x100) != 0) + 8 >= 0x10 )
        {
          LODWORD(v27) = (unsigned int)(v11 + v18) >> 4;
        }
      }
      if ( (v17 & 0x108) != 0x108 )
        goto LABEL_18;
      if ( (((_BYTE)v11 + (_BYTE)v18) & 0xF) != 0 && v26 == v28 + 8 )
        LODWORD(v27) = v27 - 1;
      if ( v18 && v20 == v18 + 8 )
      {
        v29 = 0;
      }
      else
      {
LABEL_18:
        v29 = 0;
        if ( v18 )
        {
          if ( v20 )
            v29 = (int)abs32(v20 - 8) <= v18;
          else
            LOBYTE(v29) = v18 - (unsigned int)((v17 & 0x100) != 0) + 8 >= 0x10;
        }
      }
      LODWORD(v30) = 0;
      if ( v25 >= 0 )
        LODWORD(v30) = v25 >= v11 - (v14 & (unsigned int)-v29);
      if ( (int)v27 < v29 )
      {
        *((_DWORD *)a4 + 3) = 0;
        return 1;
      }
      if ( !a3 )
      {
        v25 += (v14 & (unsigned int)-v29) - (unsigned __int64)(unsigned int)v11;
        if ( v25 >= 0 )
          LODWORD(v25) = v25 - v11;
LABEL_39:
        v42 = v30 + v54;
        v5 = 1;
        *(_DWORD *)a4 = v17;
        v43 = v29 + v53;
        *((_DWORD *)a4 + 4) = v11;
        if ( (v17 & 1) == 0 )
          v43 = v42;
        *((_DWORD *)a4 + 5) = v14;
        *((_DWORD *)a4 + 6) = v25;
        *((_DWORD *)a4 + 7) = 1;
        if ( (v17 & 1) == 0 )
          v42 = v29 + v53;
        v44 = -v42;
        if ( (v17 & 4) == 0 )
          v44 = v42;
        v45 = -v43;
        *((_DWORD *)a4 + 1) = v44;
        if ( (v17 & 2) == 0 )
          v45 = v43;
        *((_DWORD *)a4 + 2) = v45;
        *((_DWORD *)a4 + 3) = v27 - v29 + 1;
        return v5;
      }
      v31 = &a3[v17 & 3];
      if ( (v17 & 4) != 0 )
      {
        if ( (v17 & 1) == 0 )
        {
          top = v31->top;
          left = 1 - v31->right;
          right = 1 - v31->left;
          bottom = v31->bottom;
          goto LABEL_26;
        }
        top = 1 - v31->bottom;
        bottom = 1 - v31->top;
      }
      else
      {
        top = v31->top;
        bottom = v31->bottom;
      }
      right = v31->right;
      left = v31->left;
LABEL_26:
      v36 = right - v53;
      v37 = left - v53;
      v38 = bottom - v54;
      v39 = top - v54;
      if ( v38 <= (int)v30 || v36 <= v29 || v37 > (int)v27 )
        goto LABEL_87;
      v40 = v36 - 1;
      if ( (int)v27 < v36 )
        v40 = v27;
      v41 = v25 + v14 * (__int64)v40;
      v52 = ~v25;
      if ( v41 >= 0xFFFFFFFFLL )
        v41 /= (unsigned __int64)(unsigned int)v11;
      else
        LODWORD(v41) = (unsigned int)v41 / v11;
      if ( v39 > (int)v41 )
        goto LABEL_87;
      if ( v38 <= (int)v41 )
      {
        v50 = ~v25 + v11 * (__int64)v38;
        if ( v50 >= 0xFFFFFFFFLL )
          v27 = (~v25 + v11 * (__int64)v38) / (unsigned __int64)(unsigned int)v14;
        else
          LODWORD(v27) = (unsigned int)v50 / v14;
      }
      else
      {
        LODWORD(v27) = v40;
      }
      if ( v37 > v29 )
      {
        v29 = v37;
        v47 = v25 + v14 * (__int64)v37;
        if ( v47 >= 0xFFFFFFFFLL )
          v30 = (v25 + v14 * (__int64)v37) / (unsigned __int64)(unsigned int)v11;
        else
          LODWORD(v30) = (unsigned int)v47 / v11;
        if ( v38 <= (int)v30 )
          goto LABEL_87;
      }
      if ( v39 > (int)v30 )
      {
        LODWORD(v30) = v39;
        v51 = v52 + v11 * (__int64)v39;
        if ( v51 >= 0xFFFFFFFFLL )
          v51 = (v52 + v11 * (__int64)v39) / (unsigned __int64)(unsigned int)v14;
        else
          LODWORD(v51) = (unsigned int)v51 / v14;
        v29 = v51 + 1;
        if ( v36 <= (int)v51 + 1 )
        {
LABEL_87:
          *((_DWORD *)a4 + 3) = 0;
          return 1;
        }
      }
      LODWORD(v25) = v14 * v29 - v11 * v30 - v11 + v25;
      goto LABEL_39;
    }
  }
  return v5;
}

/*
 * XREFs of ?vPatternCopyLoop@@YAXPEAU_RECTL@@PEAKPEAU_PATBLTFRAME@@HKKKKJJJPEBK3@Z @ 0x1C02E973C
 * Callers:
 *     ?vPatCpyRect1_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02E8040 (-vPatCpyRect1_8x8@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 *     ?vPatCpyRect4_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02E82C0 (-vPatCpyRect4_8x8@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vPatternCopyLoop(
        struct _RECTL *a1,
        unsigned int *a2,
        struct _PATBLTFRAME *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        int a10,
        int a11,
        const unsigned int *a12,
        const unsigned int *a13)
{
  const unsigned int *v13; // rsi
  struct _RECTL *v14; // r11
  __int64 v15; // r13
  int v16; // edi
  LONG top; // r9d
  int v19; // ecx
  int v20; // r10d
  const unsigned int *v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  int v24; // r12d
  unsigned int *v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rbx
  void *v28; // r11
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rbx
  void *v31; // r11
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // rsi
  _DWORD *v34; // r10
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rbp
  _DWORD *v37; // r10
  unsigned __int64 v38; // r11
  int v39; // r9d
  int v40; // ecx
  int v41; // r9d
  unsigned int *v43; // [rsp+68h] [rbp+10h]
  LONG v44; // [rsp+70h] [rbp+18h]
  int v46; // [rsp+A0h] [rbp+48h]

  v13 = a12;
  v14 = a1;
  v15 = a9;
  v16 = a4;
  top = a1->top;
  v19 = 8;
  v20 = 4 * a9;
  v21 = &a12[(top - *((_DWORD *)a3 + 9)) & 7];
  v22 = v14->bottom - top;
  if ( v22 < 8 )
  {
    v19 = v14->bottom - top;
    if ( !v22 )
      return;
  }
  v23 = a10;
  do
  {
    v46 = v19 - 1;
    v24 = (v14->bottom - top + 7) >> 3;
    v25 = a2;
    a2 = (unsigned int *)((char *)a2 + v23);
    v44 = top + 1;
    v26 = *v21++;
    v43 = a2;
    if ( v21 == a13 )
      v21 = v13;
    if ( v16 <= 5 )
    {
      if ( v16 != 5 )
      {
        if ( v16 )
        {
          if ( v16 != 1 )
          {
            if ( v16 != 2 )
            {
              if ( v16 != 3 )
              {
                if ( v16 != 4 )
                  goto LABEL_140;
                while ( 1 )
                {
                  *v25 = a6 & v26 | a8 & *v25;
                  switch ( (_DWORD)v15 )
                  {
                    case 1:
                      goto LABEL_30;
                    case 2:
                      goto LABEL_29;
                    case 3:
                      goto LABEL_28;
                    case 4:
                      goto LABEL_27;
                    case 5:
                      goto LABEL_26;
                    case 6:
                      goto LABEL_25;
                    case 7:
                      goto LABEL_24;
                    case 8:
                      goto LABEL_23;
                  }
                  if ( (_DWORD)v15 == 9 )
                    break;
LABEL_31:
                  v25[v15 + 1] = a5 & v26 | v25[v15 + 1] & a7;
                  v25 = (unsigned int *)((char *)v25 + a11);
                  if ( !--v24 )
                  {
                    v14 = a1;
                    goto LABEL_138;
                  }
                }
                v25[9] = v26;
LABEL_23:
                v25[8] = v26;
LABEL_24:
                v25[7] = v26;
LABEL_25:
                v25[6] = v26;
LABEL_26:
                v25[5] = v26;
LABEL_27:
                v25[4] = v26;
LABEL_28:
                v25[3] = v26;
LABEL_29:
                v25[2] = v26;
LABEL_30:
                v25[1] = v26;
                goto LABEL_31;
              }
              v27 = (unsigned __int64)v20 >> 2;
              while ( 1 )
              {
                v28 = v25;
                v29 = v27;
                if ( v27 )
                {
                  if ( ((unsigned __int8)v25 & 4) == 0 )
                    goto LABEL_38;
                  *v25 = v26;
                  v29 = v27 - 1;
                  if ( v27 != 1 )
                    break;
                }
LABEL_40:
                v25 = (unsigned int *)((char *)v25 + a11);
                if ( !--v24 )
                  goto LABEL_41;
              }
              v28 = v25 + 1;
LABEL_38:
              memset64(v28, v26 | (v26 << 32), v29 >> 1);
              if ( (v29 & 1) != 0 )
                *((_DWORD *)v28 + v29 - 1) = v26;
              goto LABEL_40;
            }
            v30 = (unsigned __int64)v20 >> 2;
            while ( 1 )
            {
              v31 = v25;
              v32 = v30;
              if ( v30 )
              {
                if ( ((unsigned __int8)v25 & 4) == 0 )
                  goto LABEL_47;
                *v25 = v26;
                v32 = v30 - 1;
                if ( v30 != 1 )
                  break;
              }
LABEL_49:
              v25[v15] = a5 & v26 | a7 & v25[v15];
              v25 = (unsigned int *)((char *)v25 + a11);
              if ( !--v24 )
                goto LABEL_41;
            }
            v31 = v25 + 1;
LABEL_47:
            memset64(v31, v26 | (v26 << 32), v32 >> 1);
            if ( (v32 & 1) != 0 )
              *((_DWORD *)v31 + v32 - 1) = v26;
            goto LABEL_49;
          }
          v33 = (unsigned __int64)v20 >> 2;
          while ( 1 )
          {
            v34 = v25 + 1;
            v35 = v33;
            *v25 = a6 & v26 | a8 & *v25;
            if ( v33 )
            {
              if ( ((unsigned __int8)v34 & 4) == 0 )
                goto LABEL_56;
              *v34 = v26;
              v35 = v33 - 1;
              if ( v33 != 1 )
                break;
            }
LABEL_58:
            v25 = (unsigned int *)((char *)v25 + a11);
            if ( !--v24 )
            {
LABEL_41:
              v14 = a1;
              a2 = v43;
              v13 = a12;
              goto LABEL_138;
            }
          }
          v34 = v25 + 2;
LABEL_56:
          memset64(v34, v26 | (v26 << 32), v35 >> 1);
          if ( (v35 & 1) != 0 )
            v34[v35 - 1] = v26;
          goto LABEL_58;
        }
        v36 = (unsigned __int64)v20 >> 2;
        while ( 1 )
        {
          v37 = v25 + 1;
          v38 = v36;
          *v25 = a6 & v26 | a8 & *v25;
          if ( v36 )
          {
            if ( ((unsigned __int8)v37 & 4) == 0 )
              goto LABEL_65;
            *v37 = v26;
            v38 = v36 - 1;
            if ( v36 != 1 )
              break;
          }
LABEL_67:
          v25[v15 + 1] = a5 & v26 | v25[v15 + 1] & a7;
          v25 = (unsigned int *)((char *)v25 + a11);
          if ( !--v24 )
          {
            v14 = a1;
            v13 = a12;
            goto LABEL_138;
          }
        }
        v37 = v25 + 2;
LABEL_65:
        memset64(v37, v26 | (v26 << 32), v38 >> 1);
        if ( (v38 & 1) != 0 )
          v37[v38 - 1] = v26;
        goto LABEL_67;
      }
      while ( 1 )
      {
        *v25 = a6 & v26 | a8 & *v25;
        switch ( (_DWORD)v15 )
        {
          case 1:
            goto LABEL_86;
          case 2:
            goto LABEL_85;
          case 3:
            goto LABEL_84;
          case 4:
            goto LABEL_83;
          case 5:
            goto LABEL_82;
          case 6:
            goto LABEL_81;
          case 7:
            goto LABEL_80;
          case 8:
            goto LABEL_79;
        }
        if ( (_DWORD)v15 == 9 )
          break;
LABEL_87:
        v25 = (unsigned int *)((char *)v25 + a11);
        if ( !--v24 )
          goto LABEL_139;
      }
      v25[9] = v26;
LABEL_79:
      v25[8] = v26;
LABEL_80:
      v25[7] = v26;
LABEL_81:
      v25[6] = v26;
LABEL_82:
      v25[5] = v26;
LABEL_83:
      v25[4] = v26;
LABEL_84:
      v25[3] = v26;
LABEL_85:
      v25[2] = v26;
LABEL_86:
      v25[1] = v26;
      goto LABEL_87;
    }
    if ( v16 != 6 )
    {
      if ( v16 != 7 )
      {
        if ( v16 == 8 )
        {
          v40 = a6 & v26;
          v41 = a5 & v26;
          do
          {
            *v25 = v40 | a8 & *v25;
            v25[1] = v41 | a7 & v25[1];
            v25 = (unsigned int *)((char *)v25 + a11);
            --v24;
          }
          while ( v24 );
        }
        else if ( v16 == 9 )
        {
          v39 = a6 & v26;
          do
          {
            *v25 = v39 | a8 & *v25;
            v25 = (unsigned int *)((char *)v25 + a11);
            --v24;
          }
          while ( v24 );
        }
        goto LABEL_140;
      }
      while ( 1 )
      {
        switch ( (_DWORD)v15 )
        {
          case 1:
            goto LABEL_116;
          case 2:
            goto LABEL_115;
          case 3:
            goto LABEL_114;
          case 4:
            goto LABEL_113;
          case 5:
            goto LABEL_112;
          case 6:
            goto LABEL_111;
          case 7:
            goto LABEL_110;
          case 8:
            goto LABEL_109;
        }
        if ( (_DWORD)v15 == 9 )
          break;
LABEL_117:
        v25 = (unsigned int *)((char *)v25 + a11);
        if ( !--v24 )
          goto LABEL_140;
      }
      v25[8] = v26;
LABEL_109:
      v25[7] = v26;
LABEL_110:
      v25[6] = v26;
LABEL_111:
      v25[5] = v26;
LABEL_112:
      v25[4] = v26;
LABEL_113:
      v25[3] = v26;
LABEL_114:
      v25[2] = v26;
LABEL_115:
      v25[1] = v26;
LABEL_116:
      *v25 = v26;
      goto LABEL_117;
    }
    do
    {
      if ( (_DWORD)v15 != 1 )
      {
        if ( (_DWORD)v15 != 2 )
        {
          if ( (_DWORD)v15 != 3 )
          {
            if ( (_DWORD)v15 != 4 )
            {
              if ( (_DWORD)v15 != 5 )
              {
                if ( (_DWORD)v15 != 6 )
                {
                  if ( (_DWORD)v15 != 7 )
                  {
                    if ( (_DWORD)v15 != 8 )
                    {
                      if ( (_DWORD)v15 != 9 )
                        goto LABEL_137;
                      v25[8] = v26;
                    }
                    v25[7] = v26;
                  }
                  v25[6] = v26;
                }
                v25[5] = v26;
              }
              v25[4] = v26;
            }
            v25[3] = v26;
          }
          v25[2] = v26;
        }
        v25[1] = v26;
      }
      *v25 = v26;
LABEL_137:
      v25[v15] = a5 & v26 | a7 & v25[v15];
      v25 = (unsigned int *)((char *)v25 + a11);
      --v24;
    }
    while ( v24 );
LABEL_138:
    v20 = 4 * v15;
LABEL_139:
    v16 = a4;
LABEL_140:
    v19 = v46;
    top = v44;
    v23 = a10;
  }
  while ( v46 );
}
